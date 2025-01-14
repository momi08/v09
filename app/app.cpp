#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int size) 
	{
		for (int i = 0; i < size; ++i) {
			v.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& v, int index) 
	{
		v.erase(v.begin() + index);
	}

	void input_element(std::vector<std::string>& v, int index, std::string s)
	{
		v.insert(v.begin() + index, s);
	}
	
	int list_nth_element(std::list<int>& l, int index)
	{
		auto it = l.begin();
		for (int i = 0; i < index; ++i) {
			++it;
		}
		return *it;
	}

	void list_sort_desc(std::list<int>& l)
	{
		l.sort(std::greater<int>());
	}

	unsigned unique_numbers(std::istream& is) 
	{
		std::set<int> s{};
		int num;
		while (is >> num) {
			s.insert(num);
		}
		return s.size();
	}

	word_frequency::word_frequency(std::istream& is) 
	{
		std::string word;
		while (is >> word) {
			word[0] = tolower(word[0]);
			insert(word);
		}
	}

	void word_frequency::insert(const std::string& s)
	{
		++m[s];
	}

	unsigned word_frequency::count() const
	{
		return m.size();
	}

	unsigned word_frequency::frequency(std::string s) const
	{
		auto it = m.find(s);
		return it != m.end() ? it->second : 0;
	}





}