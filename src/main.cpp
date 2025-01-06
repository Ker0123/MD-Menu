#include <iostream>
#include <fstream>
#include <filesystem>

#include "menu.h"
#include "markdown.h"
#include "terminal.h"

using namespace std;

void classes_test()
{
    cout << "[classes_test] running..." << endl;
    Menu menu;
    Markdown markdown;
    Terminal terminal;
    cout << "[classes_test] done." << endl;
    return;
}

int main()
{
    cout << "=============================================" << endl;
    cout << "Last build: " << __DATE__ << " " << __TIME__ << endl;
    cout << "current version: v0.0.1 -> v? " << endl;
    cout << "v0.0.1:\t" << "初始化了项目, 构思好了要哪些类. " << endl;
    cout << "----* START *--------------------------------" << endl;

    classes_test();

    cout << "----* END *----------------------------------" << endl;

    return 0;
}
