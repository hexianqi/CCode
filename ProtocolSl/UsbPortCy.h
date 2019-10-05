#pragma once

#include <vector>

using namespace std;

class CUsbPortCy
{
public:
    CUsbPortCy();
    ~CUsbPortCy();

public:
    bool open(int num);
    bool close();
    bool write(vector<unsigned char> data);
    bool read(vector<unsigned char> &data);
    bool write(unsigned char *data, int maxSize);
    bool read(unsigned char *data, int maxSize);

protected:
    bool _isConnected;
};