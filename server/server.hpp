//
// Created by jwW on 2019-10-21.
//

#pragma once

class Server {
public:
    Server() = default;
    ~Server() = default;

    static int Run(unsigned short port);
};
