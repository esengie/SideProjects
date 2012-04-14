#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <stdexcept>
#include <algorithm>

std::map<std::string, std::vector<std::vector<std::string> > >    read_grammar(std::istream&);

std::vector<std::string> gen_sentence(const std::map<std::string, std::vector<std::vector<std::string> > > &);
