#include <iostream>
#include <string>

int main() {
    std::string src = "#include <iostream>\n#include <string>\n\nint main() {\n    std::string src = \"@\";\n    for (char c : src) {\n        if (c == 64) {\n            for (char d : src) {\n                switch (d) {\n                    case '\\n': std::cout << \"\\\\n\"; break;\n                    case '\"': std::cout << \"\\\\\\\"\"; break;\n                    case '\\\\': std::cout << \"\\\\\\\\\"; break;\n                    default: std::cout << d; break;\n                }\n            }\n        } else {\n            std::cout << c;\n        }\n    }\n}";
    for (char c : src) {
        if (c == 64) {
            for (char d : src) {
                switch (d) {
                    case '\n': std::cout << "\\n"; break;
                    case '"': std::cout << "\\\""; break;
                    case '\\': std::cout << "\\\\"; break;
                    default: std::cout << d; break;
                }
            }
        } else {
            std::cout << c;
        }
    }
}