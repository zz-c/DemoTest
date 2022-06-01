#include<iostream>
#include<boost/filesystem.hpp>

#include <cstdlib>
#include <iostream>
#include <thread>
#include <utility>
#include <boost/asio/steady_timer.hpp>
#include <boost/asio/io_service.hpp>
#include <boost/asio/ts/buffer.hpp>
#include <boost/asio/ts/internet.hpp>


//void server(boost::asio::io_context& io_context, unsigned short port){
//	tcp::acceptor a(io_context, tcp::endpoint(tcp::v4(), port));
//	for (;;)
//	{
//		tcp::socket sock(io_context);
//		a.accept(sock);
//		std::thread(session, std::move(sock)).detach();
//	}
//}

int main() {
	std::cout << "Hello io_service!\n";

	// ip::address:from_string(str)：这个函数根据一个IPv4地址（用.隔开的）或者一个IPv6地址（十六进制表示）创建一个地址。
	boost::asio::ip::address addr = boost::asio::ip::address::from_string("192.168.135.1");
	assert(addr.is_v4());
	std::cout << "addr.is_v4():\t" << addr.is_v4() << std::endl;
	std::cout << "addr.to_string():\t" << addr.to_string() << std::endl;


	std::unique_ptr<boost::asio::steady_timer> m_reconn_timer;

	try{
		char const* port = "8888";
		boost::asio::io_context io_context;
		//server(io_context, std::atoi(port));
	}catch (std::exception& e){
		std::cerr << "Exception: " << e.what() << "\n";
	}
	return 0;
}

int main1() {
	std::cout << "Hello Boost!\n";
	boost::filesystem::path dir("c:\\users");
	std::cout << dir << std::endl;//返回带有双引号的路径字符串
	std::cout << dir.string() << std::endl;//返回不带双引号的路径字符串
	std::cout << dir.root_name() << std::endl;//盘符名
	std::cout << dir.root_directory() << std::endl;//根目录
	std::cout << dir.root_path() << std::endl;//根路径

	std::cout << dir.relative_path() << std::endl;//相对路径
	std::cout << dir.parent_path() << std::endl;//上级目录
	std::cout << dir.filename() << std::endl;//文件名
	std::cout << dir.stem() << std::endl;//不带扩展的文件名
	std::cout << dir.extension() << std::endl;//文件扩展名
	boost::filesystem::exists("c:\\users\\86151\\desktop\\cpp\\bin");//判断文件存在性

	system("pause");
	return 0;
}
