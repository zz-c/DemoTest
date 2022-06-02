#include <cstdlib>
#include <iostream>
#include <thread>
#include <utility>
#include <boost/asio/ts/buffer.hpp>
#include <boost/asio/ts/internet.hpp>



const int max_length = 1024;

void session(boost::asio::ip::tcp::socket sock)
{
    try
    {
        for (;;)
        {
            char data[max_length];

            boost::system::error_code error;
            size_t length = sock.read_some(boost::asio::buffer(data), error);
            if (error == boost::asio::stream_errc::eof)
                break; // Connection closed cleanly by peer.
            else if (error)
                throw std::system_error(error); // Some other error.

            boost::asio::write(sock, boost::asio::buffer(data, length));
        }
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception in thread: " << e.what() << "\n";
    }
}

void server(boost::asio::io_context& io_context, unsigned short port)
{
    boost::asio::ip::tcp::acceptor a(io_context, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), port));
    for (;;)
    {
        boost::asio::ip::tcp::socket sock(io_context);
        a.accept(sock);
        std::thread(session, std::move(sock)).detach();
    }
}

int main(int argc, char* argv[])
{
    try
    {
        char const* port = "8888";
        boost::asio::io_context io_context;
        server(io_context, std::atoi(port));
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}