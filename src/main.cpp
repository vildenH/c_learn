#include <string>
#include <iostream>
#include <array>
// #include <glog/logging.h>
#include <malloc.h>
#include <map>
#include <vector>
#include "helper.h"
using namespace std;

// 本代码的基本用途：
// 学习 C++ c11常用的库函数，巩固一下c++的能力

class my_class
{
public:
    int a;
    int b;
    std::string tag;
};

void learn_string()
{
    std::boolalpha(std::cout);
    // 学习string用法
    std::string str;
    str = "012";
    str = str + "345";
    cout << str << endl;
    cout << str.at(0) << endl;
    cout << str[0] << endl;
    cout << str.front() << endl;
    cout << str.back() << endl;
    cout << str.data() << endl;

    const char *p = str.data();
    cout << *p << endl;

    cout << str.empty() << endl;
    std::string a;
    cout << a.empty() << endl;

    str.reserve(15);
    cout << str.capacity() << endl;
    str.shrink_to_fit();
    cout << str.capacity() << endl;

    cout << str.max_size() << endl;
    long long num = std::stoll(str);
    cout << num << endl;

    cout << std::hash<std::string>{}(str) << endl;
}

void learn_vector()
{
    // 初始化定义vector
    std::vector<int> v_int = {0, 1, 2, 3, 4, 5};
    // 各种遍历
    for (std::vector<int>::const_iterator i = v_int.begin(); i != v_int.end(); i++)
    {
        cout << *i << ' ';
    }
    cout << endl;
    v_int.push_back(6);
    for (std::vector<int>::const_iterator i = v_int.begin(); i != v_int.end(); i++)
    {
        cout << *i << ' ';
    }
    cout << endl;
    //反向遍历
    for (auto i = v_int.end() - 1; i >= v_int.begin(); i--)
    {

        cout << *i << ' ';
    }
    cout << endl;
    //反向遍历
    for (auto i = v_int.rbegin(); i != v_int.rend(); i++)
    {

        cout << *i << ' ';
    }
    cout << endl;
    //索引取参
    cout << v_int[2] << endl;
    cout << v_int.at(2) << endl;

    std::vector<my_class> vt;
    my_class c1;
    c1.a = 1;
    my_class c2;
    c2.a = 2;
    vt.push_back(c1);
    vt.push_back(c2);
    for (auto i = vt.begin(); i != vt.end(); i++)
    {
        cout << (*i).a << " ";
    }
    cout << endl;
}

void learn_custom_class()
{
    //基础类用法
    my_class *cls1 = new my_class();
    cls1->a = 1;
    cout << cls1->a << endl;
    delete cls1;
}
template <typename Map>
void print_map(Map &m)
{
    std::cout << '{';
    for (auto &p : m)
        std::cout << p.first << ':' << p.second << ' ';
    std::cout << "}\n";
}

void learn_map()
{
    std::map<std::string, int> map1;
    map1["something"] = 69;
    map1["anything"] = 199;
    map1["that thing"] = 50;
    std::cout << "map1 = ";
    print_map(map1);

    cout << map1["something"] << endl;
    cout << map1.at("something") << endl;
}

// void init_glog(char *argv[])
// {
//     // Initialize Google's logging library to file.
//     google::InitGoogleLogging(argv[0]);

//     FLAGS_log_dir = "./logs";               // Set save log file to directory
//     FLAGS_colorlogtostderr = true;          // Set log color
//     FLAGS_logbufsecs = 0;                   // Set log output speed(s), 0 means real-time
//     FLAGS_max_log_size = 1024;              // Set max log file size
//     FLAGS_stop_logging_if_full_disk = true; // If disk is full, stop logging
// }

int main(int argc, char *argv[])
{

    // init_glog(argv);
    // LOG(INFO) << "Hello,GLOG!";

    // learn_string();

    // learn_vector();
    add(1,2);
    learn_map();
}