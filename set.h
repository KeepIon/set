#ifndef SET
#define SET
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <locale>
#include <codecvt>
#include <cstdint>
#include <climits>
using namespace std;
bool set(int& a, long long int b) {
    if (b > INT_MAX || b < INT_MIN)
        return false;
    a = b;
    return true;
}
bool set(int& a, float b) {
    if (int(b) != b)
        return false;
    a = int(b);
    return true;
}
bool set(int& a, double b) {
    if (int(b) != b)
        return false;
    a = b;
    return true;
}
bool set(int& a, char b) {
    if (b < '0' || b>'9')
        return false;
    a = int(b - '0');
    return true;
}
bool set(int& a, string b) {
    int re;
    try {
        re = stoi(b);
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
    a = re;
    return true;
}
bool set(int& a, short b) {
    if (b < -32768 || b>32767)
        return false;
    a = b;
    return true;
}
void set(int& a, int b) {
    a = b;
}
void set(int& a, wchar_t b) {
    a = int(b - L'0');
}
void set(float& a, int b) {
    a = float(b);
}
void set(float& a, double b) {
    a = float(b);
}
bool set(float& a, char b) {
    if (b < '0' || b>'9')
        return false;
    a = float(b - '0');
    return true;
}
void set(float& a, string b) {
    set(a, b[0]);
}
bool set(float& a, wchar_t b) {
    if (b < L'0' || b>L'9')
        return false;
    a = float(int(b - L'0'));
    return true;
}
void set(float& a, short b) {
    a = float(b);
}
bool set(float& a, long long b) {
    if (b > (1LL << 24) || b < -(1LL << 24))
        return false;
    a = float(int(b));
    return true;
}
void set(float& a, float b) {
    a = b;
}
void set(double& a, int b) {
    a = double(b);
}
void set(double& a, float b) {
    a = double(b);
}
bool set(double& a, char b) {
    if (b < '0' || b>'9')
        return false;
    a = double(int(b - '0'));
    return true;
}
void set(double& a, string b) {
    set(a, b[0]);
}
bool set(double& a, wchar_t b) {
    if (b < L'0' || b>L'9')
        return false;
    a = double(int(b - L'0'));
    return true;
}
bool set(double& a, long long int b) {
    if (b > (1LL << 53) || b < -(1LL << 53))
        return false;
    a = double(b);
    return true;
}
void set(double& a, double b) {
    a = b;
}
void set(short& a, int b) {
    b = short(b);
}
bool set(short& a, float b) {
    if (int(b) != b || b < 0 || b>9)
        return false;
    a = short(b);
    return true;
}
bool set(short& a, double b) {
    if (int(b) != b || b < 0 || b>9)
        return false;
    a = short(b);
    return true;
}
bool set(short& a, long long int b) {
    if (b > SHRT_MAX || b < SHRT_MIN)
        return false;
    a = short(b);
    return true;
}
void set(short& a, short b) {
    a = b;
}
void set(char& a, int b) {
    a = char(b + '0');
}
bool set(char& a, float b) {
    if (int(b) != b || b > 9 || b < 0)
        return false;
    a = char(int(b) + '0');
    return true;
}
bool set(char& a, double b) {
    if (int(b) != b || b > 9 || b < 0)
        return false;
    a = char(int(b) + '0');
    return true;
}
void set(char& a, string b) {
    a = b[0];
}
bool set(char& a, short b) {
    if (b < 0 || b>9)
        return false;
    a = char(b + '0');
    return true;
}
bool set(char& a, wchar_t b) {
    if (b < 0 || b > 255)
        return false;
    a = static_cast<char>(b);
    return true;
}
void set(char& a, long long int b) {
    a = char(b % 10 + '0');
}
void set(char& a, char b) {
    a = b;
}
bool set(wchar_t& a, int b) {
    if (b < 0 || b>9)
        return false;
    a = wchar_t(b + L'0');
    return true;
}
bool set(wchar_t& a, float b) {
    if (int(b) != b || b < 0 || b>9)
        return false;
    a = wchar_t(int(b) + L'0');
    return true;
}
bool set(wchar_t& a, double b) {
    if (int(b) != b || b < 0 || b>9)
        return false;
    a = wchar_t(int(b) + L'0');
    return true;
}
bool set(wchar_t& a, short b) {
    if (b < 0 || b > 9) {
        return false;
    }
    a = static_cast<wchar_t>(b + L'0');
    return true;
}
bool set(wchar_t& a, char b) {
    int result = mbtowc(&a, &b, 1);
    if (result == -1) {
        return false;
    }
    return true;
}
void set(wchar_t& a, string b) {
    set(a, b[0]);
}
void set(wchar_t& a, long long int b) {
    a = wchar_t(b % 10 + L'0');
}
void set(wchar_t& a, wchar_t b) {
    a = b;
}
void set(long long int& a, int b) {
    a = (long long int)b;
}
void set(long long int& a, float b) {
    a = (long long int)b;
}
void set(long long int& a, double b) {
    a = (long long int)b;
}
void set(long long int& a, short b) {
    a = (long long int)b;
}
bool set(long long int& a, char b) {
    if (b < '0' || b>'9')
        return false;
    a = b - '0';
    return true;
}
bool set(long long int& a, wchar_t b) {
    if (b < L'0' || b>L'9')
        return false;
    a = b - L'0';
    return true;
}
void set(long long int& a, string b) {
    set(a, b[0]);
}
void set(long long int& a, long long int b) {
    a = b;
}
void set(string& a, int b) {
    a = to_string(b);
}
void set(string& a, float b) {
    a = to_string(b);
}
void set(string& a, double b) {
    a = to_string(b);
}
void set(string& a, short b) {
    a = to_string(b);
}
void set(string& a, char b) {
    a = to_string(b);
}
void set(string& a, wchar_t b) {
    a = to_string(b);
}
void set(string& a, long long int b) {
    a = to_string(b);
}
void set(string& a, string b) {
    a = b;
}
void set(wstring& a, int b) {
    a = to_wstring(b);
}
void set(wstring& a, float b) {
    a = to_wstring(b);
}
void set(wstring& a, double b) {
    a = to_wstring(b);
}
void set(wstring& a, short b) {
    a = to_wstring(b);
}
void set(wstring& a, long long int b) {
    a = to_wstring(b);
}
void set(wstring& a, char b) {
    a = to_wstring(b);
}
void set(wstring& a, wchar_t b) {
    a = to_wstring(b);
}
void set(wstring& a, string b) {
    wstring_convert<codecvt_utf8<wchar_t>> converter;
    a = converter.from_bytes(b);
}
void set(wstring& a, wstring b) {
    a = b;
}
void set(bool& a, int b) {
    a = (b != 0);
}
void set(bool& a, float b) {
    a = (b != 0.0f);
}
void set(bool& a, double b) {
    a = (b != 0.0);
}
bool set(bool& a, string b) {
    if (b == "true" || b == "1" || b == "yes") {
        a = true;
        return true;
    }
    else if (b == "false" || b == "0" || b == "no") {
        a = false;
        return true;
    }
    return false;
}
bool set(int& a, wstring b) {
    try {
        size_t pos;
        int re = stoi(b, &pos);
        if (pos != b.length()) {
            return false;
        }
        a = re;
        return true;
    }
    catch (const invalid_argument& e) {
        return false;
    }
    catch (const out_of_range& e) {
        return false;
    }
}
bool set(float& a, wstring b) {
    try {
        size_t pos;
        float re = stof(b, &pos);
        if (pos != b.length()) {
            return false;
        }
        a = re;
        return true;
    }
    catch (const invalid_argument& e) {
        return false;
    }
    catch (const out_of_range& e) {
        return false;
    }
}
bool set(double& a, wstring b) {
    try {
        size_t pos;
        double re = stod(b, &pos);
        if (pos != b.length()) {
            return false;
        }
        a = re;
        return true;
    }
    catch (const invalid_argument& e) {
        return false;
    }
    catch (const out_of_range& e) {
        return false;
    }
}
bool set(short& a, wstring b) {
    try {
        size_t pos;
        int re = stoi(b, &pos);
        if (pos != b.length() || re < SHRT_MIN || re > SHRT_MAX) {
            return false;
        }
        a = static_cast<short>(re);
        return true;
    }
    catch (const invalid_argument& e) {
        return false;
    }
    catch (const out_of_range& e) {
        return false;
    }
}
bool set(long long int& a, wstring b) {
    try {
        size_t pos;
        long long re = stoll(b, &pos);
        if (pos != b.length()) {
            return false;
        }
        a = re;
        return true;
    }
    catch (const invalid_argument& e) {
        return false;
    }
    catch (const out_of_range& e) {
        return false;
    }
}
bool set(char& a, wstring b) {
    if (b.length() != 1) {
        return false;
    }
    wchar_t wc = b[0];
    if (wc > 127) {
        return false;
    }
    a = static_cast<char>(wc);
    return true;
}
bool set(wchar_t& a, wstring b) {
    if (b.length() != 1) {
        return false;
    }
    a = b[0];
    return true;
}
bool set(string& a, wstring b) {
    try {
        wstring_convert<codecvt_utf8<wchar_t>> converter;
        a = converter.to_bytes(b);
        return true;
    }
    catch (const exception& e) {
        return false;
    }
}
bool set(string& a, const wchar_t* b) {
    return set(a, std::wstring(b));
}
bool set(bool& a, wstring b) {
    if (b == L"true" || b == L"1" || b == L"yes" || b == L"ÊÇ") {
        a = true;
        return true;
    }
    else if (b == L"false" || b == L"0" || b == L"no" || b == L"·ñ") {
        a = false;
        return true;
    }
    return false;
}
void set(long int& a, int b) {
    a = static_cast<long int>(b);
}
bool set(long int& a, float b) {
    if (b < LONG_MIN || b > LONG_MAX || static_cast<long int>(b) != b) {
        return false;
    }
    a = static_cast<long int>(b);
    return true;
}
bool set(long int& a, double b) {
    if (b < LONG_MIN || b > LONG_MAX || static_cast<long int>(b) != b) {
        return false;
    }
    a = static_cast<long int>(b);
    return true;
}
void set(long int& a, short b) {
    a = static_cast<long int>(b);
}
bool set(long int& a, char b) {
    if (b < '0' || b > '9') {
        return false;
    }
    a = static_cast<long int>(b - '0');
    return true;
}
bool set(long int& a, wchar_t b) {
    if (b < L'0' || b > L'9') {
        return false;
    }
    a = static_cast<long int>(b - L'0');
    return true;
}
bool set(long int& a, string b) {
    try {
        size_t pos;
        long re = stol(b, &pos);
        if (pos != b.length()) {
            return false;
        }
        a = re;
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(long int& a, wstring b) {
    try {
        size_t pos;
        long re = stol(b, &pos);
        if (pos != b.length()) {
            return false;
        }
        a = re;
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(long int& a, long long int b) {
    if (b < LONG_MIN || b > LONG_MAX) {
        return false;
    }
    a = static_cast<long int>(b);
    return true;
}
void set(long int& a, long int b) {
    a = b;
}
bool set(int& a, long int b) {
    if (b < INT_MIN || b > INT_MAX) {
        return false;
    }
    a = static_cast<int>(b);
    return true;
}
void set(float& a, long int b) {
    a = static_cast<float>(b);
}
void set(double& a, long int b) {
    a = static_cast<double>(b);
}
bool set(short& a, long int b) {
    if (b < SHRT_MIN || b > SHRT_MAX) {
        return false;
    }
    a = static_cast<short>(b);
    return true;
}
bool set(char& a, long int b) {
    if (b < 0 || b > 9) {
        return false;
    }
    a = static_cast<char>(b + '0');
    return true;
}
bool set(wchar_t& a, long int b) {
    if (b < 0 || b > 9) {
        return false;
    }
    a = static_cast<wchar_t>(b + L'0');
    return true;
}
void set(string& a, long int b) {
    a = to_string(b);
}
void set(wstring& a, long int b) {
    a = to_wstring(b);
}
void set(long long int& a, long int b) {
    a = static_cast<long long int>(b);
}
bool set(unsigned long int& a, long int b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned long int>(b);
    return true;
}
void set(bool& a, long int b) {
    a = (b != 0);
}
bool set(long int& a, unsigned long int b) {
    if (b > LONG_MAX) {
        return false;
    }
    a = static_cast<long int>(b);
    return true;
}
bool set(unsigned long int& a, string b) {
    try {
        size_t pos;
        unsigned long re = stoul(b, &pos);
        if (pos != b.length()) {
            return false;
        }
        a = re;
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(unsigned long int& a, wstring b) {
    try {
        size_t pos;
        unsigned long re = stoul(b, &pos);
        if (pos != b.length()) {
            return false;
        }
        a = re;
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(unsigned int& a, int b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned int>(b);
    return true;
}
bool set(unsigned int& a, float b) {
    if (b < 0 || b > UINT_MAX || static_cast<unsigned int>(b) != b) {
        return false;
    }
    a = static_cast<unsigned int>(b);
    return true;
}
bool set(unsigned int& a, double b) {
    if (b < 0 || b > UINT_MAX || static_cast<unsigned int>(b) != b) {
        return false;
    }
    a = static_cast<unsigned int>(b);
    return true;
}
bool set(unsigned int& a, short b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned int>(b);
    return true;
}
bool set(unsigned int& a, char b) {
    if (b < '0' || b > '9') {
        return false;
    }
    a = static_cast<unsigned int>(b - '0');
    return true;
}
bool set(unsigned int& a, wchar_t b) {
    if (b < L'0' || b > L'9') {
        return false;
    }
    a = static_cast<unsigned int>(b - L'0');
    return true;
}
bool set(unsigned int& a, string b) {
    try {
        size_t pos;
        unsigned long re = stoul(b, &pos);
        if (pos != b.length() || re > UINT_MAX) {
            return false;
        }
        a = static_cast<unsigned int>(re);
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(unsigned int& a, long long int b) {
    if (b < 0 || b > UINT_MAX) {
        return false;
    }
    a = static_cast<unsigned int>(b);
    return true;
}
bool set(unsigned int& a, long int b) {
    if (b < 0 || b > UINT_MAX) {
        return false;
    }
    a = static_cast<unsigned int>(b);
    return true;
}
void set(unsigned int& a, unsigned short b) {
    a = static_cast<unsigned int>(b);
}
bool set(unsigned int& a, unsigned long b) {
    if (b > UINT_MAX) {
        return false;
    }
    a = static_cast<unsigned int>(b);
    return true;
}
bool set(unsigned int& a, unsigned long long b) {
    if (b > UINT_MAX) {
        return false;
    }
    a = static_cast<unsigned int>(b);
    return true;
}
void set(unsigned int& a, unsigned int b) {
    a = b;
}
bool set(int& a, unsigned int b) {
    if (b > INT_MAX) {
        return false;
    }
    a = static_cast<int>(b);
    return true;
}
void set(float& a, unsigned int b) {
    a = static_cast<float>(b);
}
void set(double& a, unsigned int b) {
    a = static_cast<double>(b);
}
bool set(short& a, unsigned int b) {
    if (b > SHRT_MAX) {
        return false;
    }
    a = static_cast<short>(b);
    return true;
}
bool set(char& a, unsigned int b) {
    if (b > 9) {
        return false;
    }
    a = static_cast<char>(b + '0');
    return true;
}
bool set(wchar_t& a, unsigned int b) {
    if (b > 9) {
        return false;
    }
    a = static_cast<wchar_t>(b + L'0');
    return true;
}
void set(string& a, unsigned int b) {
    a = to_string(b);
}
void set(wstring& a, unsigned int b) {
    a = to_wstring(b);
}
void set(long long int& a, unsigned int b) {
    a = static_cast<long long int>(b);
}
void set(long int& a, unsigned int b) {
    a = static_cast<long int>(b);
}
void set(bool& a, unsigned int b) {
    a = (b != 0);
}
bool set(unsigned short& a, int b) {
    if (b < 0 || b > USHRT_MAX) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
bool set(unsigned short& a, float b) {
    if (b < 0 || b > USHRT_MAX || static_cast<unsigned short>(b) != b) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
bool set(unsigned short& a, double b) {
    if (b < 0 || b > USHRT_MAX || static_cast<unsigned short>(b) != b) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
bool set(unsigned short& a, short b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
bool set(unsigned short& a, char b) {
    if (b < '0' || b > '9') {
        return false;
    }
    a = static_cast<unsigned short>(b - '0');
    return true;
}
bool set(unsigned short& a, wchar_t b) {
    if (b < L'0' || b > L'9') {
        return false;
    }
    a = static_cast<unsigned short>(b - L'0');
    return true;
}
bool set(unsigned short& a, string b) {
    try {
        size_t pos;
        unsigned long re = stoul(b, &pos);
        if (pos != b.length() || re > USHRT_MAX) {
            return false;
        }
        a = static_cast<unsigned short>(re);
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(unsigned short& a, wstring b) {
    try {
        size_t pos;
        unsigned long re = stoul(b, &pos);
        if (pos != b.length() || re > USHRT_MAX) {
            return false;
        }
        a = static_cast<unsigned short>(re);
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(unsigned short& a, long long int b) {
    if (b < 0 || b > USHRT_MAX) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
bool set(unsigned short& a, long int b) {
    if (b < 0 || b > USHRT_MAX) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
bool set(unsigned short& a, unsigned int b) {
    if (b > USHRT_MAX) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
bool set(unsigned short& a, unsigned long b) {
    if (b > USHRT_MAX) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
bool set(unsigned short& a, unsigned long long b) {
    if (b > USHRT_MAX) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
void set(unsigned short& a, unsigned short b) {
    a = b;
}
void set(int& a, unsigned short b) {
    a = static_cast<int>(b);
}
void set(float& a, unsigned short b) {
    a = static_cast<float>(b);
}
void set(double& a, unsigned short b) {
    a = static_cast<double>(b);
}
bool set(short& a, unsigned short b) {
    if (b > SHRT_MAX) {
        return false;
    }
    a = static_cast<short>(b);
    return true;
}
bool set(char& a, unsigned short b) {
    if (b > 9) {
        return false;
    }
    a = static_cast<char>(b + '0');
    return true;
}
bool set(wchar_t& a, unsigned short b) {
    if (b > 9) {
        return false;
    }
    a = static_cast<wchar_t>(b + L'0');
    return true;
}
void set(string& a, unsigned short b) {
    a = to_string(b);
}
void set(wstring& a, unsigned short b) {
    a = to_wstring(b);
}
void set(long long int& a, unsigned short b) {
    a = static_cast<long long int>(b);
}
void set(long int& a, unsigned short b) {
    a = static_cast<long int>(b);
}
void set(bool& a, unsigned short b) {
    a = (b != 0);
}
void set(unsigned long long& a, int b) {
    if (b < 0) {
        a = 0;
    }
    else {
        a = static_cast<unsigned long long>(b);
    }
}
bool set(unsigned long long& a, float b) {
    if (b < 0 || b > ULLONG_MAX) {
        return false;
    }
    a = static_cast<unsigned long long>(b);
    return true;
}
bool set(unsigned long long& a, double b) {
    if (b < 0 || b > ULLONG_MAX) {
        return false;
    }
    a = static_cast<unsigned long long>(b);
    return true;
}
void set(unsigned long long& a, short b) {
    if (b < 0) {
        a = 0;
    }
    else {
        a = static_cast<unsigned long long>(b);
    }
}
bool set(unsigned long long& a, char b) {
    if (b < '0' || b > '9') {
        return false;
    }
    a = static_cast<unsigned long long>(b - '0');
    return true;
}
bool set(unsigned long long& a, wchar_t b) {
    if (b < L'0' || b > L'9') {
        return false;
    }
    a = static_cast<unsigned long long>(b - L'0');
    return true;
}
bool set(unsigned long long& a, string b) {
    try {
        size_t pos;
        a = stoull(b, &pos);
        return pos == b.length();
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(unsigned long long& a, wstring b) {
    try {
        size_t pos;
        a = stoull(b, &pos);
        return pos == b.length();
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(unsigned long long& a, long long int b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned long long>(b);
    return true;
}
void set(unsigned long long& a, long int b) {
    if (b < 0) {
        a = 0;
    }
    else {
        a = static_cast<unsigned long long>(b);
    }
}
void set(unsigned long long& a, unsigned int b) {
    a = static_cast<unsigned long long>(b);
}
void set(unsigned long long& a, unsigned short b) {
    a = static_cast<unsigned long long>(b);
}
void set(unsigned long long& a, unsigned long b) {
    a = static_cast<unsigned long long>(b);
}
void set(unsigned long long& a, unsigned long long b) {
    a = b;
}
bool set(int& a, unsigned long long b) {
    if (b > INT_MAX) {
        return false;
    }
    a = static_cast<int>(b);
    return true;
}
void set(float& a, unsigned long long b) {
    a = static_cast<float>(b);
}
void set(double& a, unsigned long long b) {
    a = static_cast<double>(b);
}
bool set(short& a, unsigned long long b) {
    if (b > SHRT_MAX) {
        return false;
    }
    a = static_cast<short>(b);
    return true;
}
bool set(char& a, unsigned long long b) {
    if (b > 9) {
        return false;
    }
    a = static_cast<char>(b + '0');
    return true;
}
bool set(wchar_t& a, unsigned long long b) {
    if (b > 9) {
        return false;
    }
    a = static_cast<wchar_t>(b + L'0');
    return true;
}
void set(string& a, unsigned long long b) {
    a = to_string(b);
}
void set(wstring& a, unsigned long long b) {
    a = to_wstring(b);
}
bool set(long long int& a, unsigned long long b) {
    if (b > LLONG_MAX) {
        return false;
    }
    a = static_cast<long long int>(b);
    return true;
}
bool set(long int& a, unsigned long long b) {
    if (b > LONG_MAX) {
        return false;
    }
    a = static_cast<long int>(b);
    return true;
}
bool set(unsigned long& a, unsigned long long b) {
    if (b > ULONG_MAX) {
        return false;
    }
    a = static_cast<unsigned long>(b);
    return true;
}
void set(bool& a, unsigned long long b) {
    a = (b != 0);
}
void set(long double& a, int b) {
    a = static_cast<long double>(b);
}
void set(long double& a, float b) {
    a = static_cast<long double>(b);
}
void set(long double& a, double b) {
    a = static_cast<long double>(b);
}
void set(long double& a, short b) {
    a = static_cast<long double>(b);
}
bool set(long double& a, char b) {
    if (b < '0' || b > '9') return false;
    a = static_cast<long double>(b - '0');
    return true;
}
bool set(long double& a, wchar_t b) {
    if (b < L'0' || b > L'9') return false;
    a = static_cast<long double>(b - L'0');
    return true;
}
bool set(long double& a, string b) {
    try {
        size_t pos;
        a = stold(b, &pos);
        return pos == b.length();
    }
    catch (...) {
        return false;
    }
}
bool set(long double& a, wstring b) {
    try {
        size_t pos;
        a = stold(b, &pos);
        return pos == b.length();
    }
    catch (...) {
        return false;
    }
}
void set(long double& a, long long int b) {
    a = static_cast<long double>(b);
}
void set(long double& a, long int b) {
    a = static_cast<long double>(b);
}
void set(long double& a, unsigned int b) {
    a = static_cast<long double>(b);
}
void set(long double& a, unsigned short b) {
    a = static_cast<long double>(b);
}
void set(long double& a, unsigned long b) {
    a = static_cast<long double>(b);
}
void set(long double& a, unsigned long long b) {
    a = static_cast<long double>(b);
}
void set(long double& a, long double b) {
    a = b;
}
bool set(int& a, long double b) {
    if (b < INT_MIN || b > INT_MAX || static_cast<long double>(static_cast<int>(b)) != b) {
        return false;
    }
    a = static_cast<int>(b);
    return true;
}
bool set(int8_t& a, int b) {
    if (b < INT8_MIN || b > INT8_MAX) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, float b) {
    if (b < INT8_MIN || b > INT8_MAX || static_cast<int8_t>(b) != b) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, double b) {
    if (b < INT8_MIN || b > INT8_MAX || static_cast<int8_t>(b) != b) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, short b) {
    if (b < INT8_MIN || b > INT8_MAX) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, char b) {
    if (b < '0' || b > '9') {
        return false;
    }
    a = static_cast<int8_t>(b - '0');
    return true;
}
bool set(int8_t& a, wchar_t b) {
    if (b < L'0' || b > L'9') {
        return false;
    }
    a = static_cast<int8_t>(b - L'0');
    return true;
}
bool set(int8_t& a, string b) {
    try {
        size_t pos;
        int re = stoi(b, &pos);
        if (pos != b.length() || re < INT8_MIN || re > INT8_MAX) {
            return false;
        }
        a = static_cast<int8_t>(re);
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(int8_t& a, wstring b) {
    try {
        size_t pos;
        int re = stoi(b, &pos);
        if (pos != b.length() || re < INT8_MIN || re > INT8_MAX) {
            return false;
        }
        a = static_cast<int8_t>(re);
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(int8_t& a, long long int b) {
    if (b < INT8_MIN || b > INT8_MAX) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, long int b) {
    if (b < INT8_MIN || b > INT8_MAX) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, unsigned int b) {
    if (b > INT8_MAX) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, unsigned short b) {
    if (b > INT8_MAX) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, unsigned long b) {
    if (b > INT8_MAX) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, unsigned long long b) {
    if (b > INT8_MAX) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
bool set(int8_t& a, uint8_t b) {
    if (b > INT8_MAX) {
        return false;
    }
    a = static_cast<int8_t>(b);
    return true;
}
void set(int8_t& a, int8_t b) {
    a = b;
}
void set(int& a, int8_t b) {
    a = static_cast<int>(b);
}
void set(float& a, int8_t b) {
    a = static_cast<float>(b);
}
void set(double& a, int8_t b) {
    a = static_cast<double>(b);
}
void set(short& a, int8_t b) {
    a = static_cast<short>(b);
}
bool set(char& a, int8_t b) {
    if (b < 0 || b > 9) {
        return false;
    }
    a = static_cast<char>(b + '0');
    return true;
}
bool set(wchar_t& a, int8_t b) {
    if (b < 0 || b > 9) {
        return false;
    }
    a = static_cast<wchar_t>(b + L'0');
    return true;
}
void set(string& a, int8_t b) {
    a = to_string(static_cast<int>(b));
}
void set(wstring& a, int8_t b) {
    a = to_wstring(static_cast<int>(b));
}
void set(long long int& a, int8_t b) {
    a = static_cast<long long int>(b);
}
void set(long int& a, int8_t b) {
    a = static_cast<long int>(b);
}
bool set(unsigned int& a, int8_t b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned int>(b);
    return true;
}
bool set(unsigned short& a, int8_t b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned short>(b);
    return true;
}
bool set(unsigned long& a, int8_t b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned long>(b);
    return true;
}
bool set(unsigned long long& a, int8_t b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned long long>(b);
    return true;
}
bool set(uint8_t& a, int8_t b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
void set(bool& a, int8_t b) {
    a = (b != 0);
}
bool set(int16_t& a, char b) {
    if (b < '0' || b > '9') {
        return false;
    }
    a = static_cast<int16_t>(b - '0');
    return true;
}
bool set(int16_t& a, wchar_t b) {
    if (b < L'0' || b > L'9') {
        return false;
    }
    a = static_cast<int16_t>(b - L'0');
    return true;
}
bool set(int16_t& a, string b) {
    try {
        size_t pos;
        int re = stoi(b, &pos);
        if (pos != b.length() || re < INT16_MIN || re > INT16_MAX) {
            return false;
        }
        a = static_cast<int16_t>(re);
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
void set(double& a, int16_t b) {
    a = static_cast<double>(b);
}
bool set(unsigned long& a, int16_t b) {
    if (b < 0) {
        return false;
    }
    a = static_cast<unsigned long>(b);
    return true;
}
bool set(uint8_t& a, int16_t b) {
    if (b < 0 || b > UINT8_MAX) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
void set(bool& a, int16_t b) {
    a = (b != 0);
}
void set(int32_t& a, uint8_t b) {
    a = static_cast<int32_t>(b);
}
void set(int64_t& a, unsigned long b) {
    a = static_cast<int64_t>(b);
}
void set(int64_t& a, uint8_t b) {
    a = static_cast<int64_t>(b);
}
bool set(uint8_t& a, int b) {
    if (b < 0 || b > UINT8_MAX) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
bool set(uint8_t& a, float b) {
    if (b < 0 || b > UINT8_MAX || static_cast<uint8_t>(b) != b) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
bool set(uint8_t& a, double b) {
    if (b < 0 || b > UINT8_MAX || static_cast<uint8_t>(b) != b) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
bool set(uint8_t& a, char b) {
    if (b < '0' || b > '9') {
        return false;
    }
    a = static_cast<uint8_t>(b - '0');
    return true;
}
bool set(uint8_t& a, wchar_t b) {
    if (b < L'0' || b > L'9') {
        return false;
    }
    a = static_cast<uint8_t>(b - L'0');
    return true;
}
bool set(uint8_t& a, string b) {
    try {
        size_t pos;
        unsigned long re = stoul(b, &pos);
        if (pos != b.length() || re > UINT8_MAX) {
            return false;
        }
        a = static_cast<uint8_t>(re);
        return true;
    }
    catch (const std::invalid_argument& e) {
        return false;
    }
    catch (const std::out_of_range& e) {
        return false;
    }
}
bool set(uint8_t& a, wstring b) {
    try {
        size_t pos;
        unsigned long re = stoul(b, &pos);
        if (pos != b.length() || re > UINT8_MAX) {
            return false;
        }
        a = static_cast<uint8_t>(re);
        return true;
    }
    catch (const std::invalid_argument&) {
        return false;
    }
    catch (const std::out_of_range&) {
        return false;
    }
}
bool set(uint8_t& a, long long int b) {
    if (b < 0 || b > UINT8_MAX) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
bool set(uint8_t& a, long int b) {
    if (b < 0 || b > UINT8_MAX) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
bool set(uint8_t& a, unsigned int b) {
    if (b > UINT8_MAX) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
bool set(uint8_t& a, unsigned short b) {
    if (b > UINT8_MAX) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
bool set(uint8_t& a, unsigned long b) {
    if (b > UINT8_MAX) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
bool set(uint8_t& a, unsigned long long b) {
    if (b > UINT8_MAX) {
        return false;
    }
    a = static_cast<uint8_t>(b);
    return true;
}
void set(uint8_t& a, uint8_t b) {
    a = b;
}
void set(float& a, uint8_t b) {
    a = static_cast<float>(b);
}
void set(double& a, uint8_t b) {
    a = static_cast<double>(b);
}
void set(short& a, uint8_t b) {
    a = static_cast<short>(b);
}
bool set(char& a, uint8_t b) {
    if (b > 9) {
        return false;
    }
    a = static_cast<char>(b + '0');
    return true;
}
bool set(wchar_t& a, uint8_t b) {
    if (b > 9) {
        return false;
    }
    a = static_cast<wchar_t>(b + L'0');
    return true;
}
void set(string& a, uint8_t b) {
    a = to_string(static_cast<unsigned int>(b));
}
void set(wstring& a, uint8_t b) {
    a = to_wstring(static_cast<unsigned int>(b));
}
void set(long int& a, uint8_t b) {
    a = static_cast<long int>(b);
}
void set(unsigned int& a, uint8_t b) {
    a = static_cast<unsigned int>(b);
}
void set(unsigned short& a, uint8_t b) {
    a = static_cast<unsigned short>(b);
}
void set(unsigned long& a, uint8_t b) {
    a = static_cast<unsigned long>(b);
}
void set(unsigned long long& a, uint8_t b) {
    a = static_cast<unsigned long long>(b);
}
void set(bool& a, uint8_t b) {
    a = (b != 0);
}
template<typename T, typename I>
auto turn(I a) {
    T re;
    set(re, a);
    return re;
}
#endif