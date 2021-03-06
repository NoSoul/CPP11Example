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
#g++ -o a -std=c++11 -Wall -W -Werror external_template.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror template_parm.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror inheritance_constructor.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror move_semantics.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror reference.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror perfect_forwarding.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror explicit_operator.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror initializer_list.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror template_alias.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror enum_class.cpp && ./a
#g++ -o a -std=c++11 -Wall -W -Werror auto_ptr.cpp && ./a
g++ -o a -std=c++11 -Wall -W -Werror default_delete.cpp && ./a
