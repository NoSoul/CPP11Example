# !/bin/sh
if [ $# -ne 1 ]; then
    echo "Usage: $0 c/b"
    exit 1;
fi
if [ $1 = "c" ]; then
    rm -f a
    exit 0;
fi
if [ $1 != "b" ]; then
    echo "Usage: $0 c/b"
    exit 1;
fi
#g++ -o a -std=c++11 -Wall -W -Werror static_assert.cpp
#g++ -o a -std=c++11 -Wall -W -Werror final_override.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror template_fun_default_parm.cpp && ./a
g++ -o a -std=c++11 -Wall -W -Werror external_template.cpp && ./a
