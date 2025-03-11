#include <iostream>
// #include <mysql/jdbc.h>
// #include <boost/filesystem.hpp>
// #include "socket.h"

// using namespace sql;
using namespace std;

void gameLogic();

int main () {

    

    string strL = "hello";
    char strUG = toupper(strL.at(0));

    int num = 0;

    cout << strUG;











    // boost::filesystem::path p{"."};
    // std::cout << "Current directory: " << boost::filesystem::absolute(p) << std::endl;


    // try {
        

    //     // Buat koneksi
    //     sql::mysql::MySQL_Driver *driver = sql::mysql::get_mysql_driver_instance();
    //     std::unique_ptr<Connection> conn(driver->connect("tcp://127.0.0.1:3306", "root", ""));
        
    //     // Pilih database
    //     conn->setSchema("mc_ai_GameLogic");
    //     std::cout << "Connected to database!" << std::endl;

    //     // execute query
    //     std::unique_ptr<Statement> stmt(conn->createStatement());
    //     stmt->execute("CREATE TABLE IF NOT EXISTS user_member (id_user_member INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(255), password VARCHAR(255))");
    //     std::unique_ptr<ResultSet> res(stmt->executeQuery("CREATE TABLE IF NOT EXISTS user_member (id_user_member INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(255), password VARCHAR(255))"));

    //     while (res->next()) {
    //         std::cout << "output query: " << res->getRow() <<std::endl;
    //         //std::cout << "output query: " << res->get <<std::endl;
    //     }

    // } catch (SQLException &e) {
    //     std::cerr << "Error: " << e.what() << std::endl;
    //     return EXIT_FAILURE;
    // }
    // return EXIT_SUCCESS;


    // std::cout << "\nhello new world\n";
    // std::cout << "this is ";
    // serverGreet();
    // std::cout << "random num 1~100 : " << connectId();


    return 0;
} 

void gameLogic() {
    
}