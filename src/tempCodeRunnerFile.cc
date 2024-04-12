int db(){

    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;

    try {
        // Create a MySQL driver instance
        driver = sql::mysql::get_mysql_driver_instance();

        // Establish connection to the database
        con = driver->connect("localhost","root ","krrish#987");

        if (con == nullptr) {
            std::cerr << "Failed to connect to database" << std::endl;
            return 1;
        }

        std::cout << "Connected to database successfully" << std::endl;

        // Perform database operations here

        // Close connection
        con->close();
        delete con;
    } catch (sql::SQLException& e) {
        std::cerr << "SQL Exception: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}