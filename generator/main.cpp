#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "generator.h"




int main()
{
    std::fstream stream("ttt.txt");
    // generate the sentence
    std::vector<std::string> sentence = gen_sentence(read_grammar(stream));

    // write the first word, if any
    std::vector<std::string>::const_iterator it = sentence.begin();
    if (!sentence.empty())
    {
        std::cout << *it;
        ++it;
    }

    // write the rest of the words, each preceded by a space
    while (it != sentence.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << std::endl;
    return 0;
}

