#pragma once

#include <string>

struct TaskContent {
    std::string name;  // key
    std::string content;
    std::string date;
    TaskContent() {}

    TaskContent(std::string& _name, std::string& _content, std::string& _date): name(_name), content(_content), date(_date) {}

    bool LoseKey() {
        return name == "";
    }

    bool IsEmpty() {
        return name == "" && content == "" && date == "";
    }
};
