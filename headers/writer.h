#ifndef LIB_WRITER_H
#define LIB_WRITER_H

//
// Created by Anarsiel on 2019-05-30.
//

#include <fstream>
#include <algorithm>
#include <functional>

struct writer {

    explicit writer(std::string const &file_name);
    writer(writer const &other);
    ~writer();

    void write_char(uint8_t c);

private:
    std::ofstream my_file_writer;
    std::string file_name;

    size_t start_index;

    const static size_t BUFFER_SIZE = 239;
    uint8_t buffer[BUFFER_SIZE];

    void write_buffer();
};

#endif //LIB_WRITER_H
