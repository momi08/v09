#pragma once
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string>


namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& v, int size);
	void remove_element(std::vector<int>& v, int index);
	void input_element(std::vector<std::string>& v, int index, std::string s);
	int list_nth_element(std::list<int>& l, int index);
	void list_sort_desc(std::list<int>& l);
	unsigned unique_numbers(std::istream& is);

	class word_frequency {

		std::map<std::string, unsigned> m;
		void insert(const std::string& s);

	public:

		word_frequency(std::istream& is);
		unsigned count()const;
		unsigned frequency(std::string s)const;

	};
}
