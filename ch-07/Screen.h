#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>

class Screen {
	friend class Window_mgr;
	public:
		// 
		using pos = std::string::size_type;
		// constructors
		Screen() = default;
		Screen(pos ht, pos wd):
			   height(ht), width(wd), contents(ht*wd, ' ') {}
		Screen(pos ht, pos wd, char c):
			   height(ht), width(wd), contents(ht*wd, c) {}
		// member functions
		inline Screen &set(char);
		inline Screen &set(pos, pos, char);
		char get() const { return contents[cursor]; }
		inline char get(pos ht, pos wd) const;
		inline Screen &move(pos r, pos c);
		Screen &display(std::ostream &os)
				{ do_display(os); return *this; }
		const Screen &display(std::ostream &os) const
				{ do_display(os); return *this; }
		pos size() const;
	private:
		//
		pos cursor = 0;
		pos height = 0, width = 0;
		std::string contents;
		mutable size_t access_ctr;
		void do_display(std::ostream &os) const
				{ os << contents; }
};

inline Screen & Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline Screen & Screen::set(pos r, pos cl, char c) {
	contents[r*width + cl] = c;
	return *this;
}

inline Screen & Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

inline char Screen::get(pos r, pos c) const {
	pos row = r * width;
	return contents[row + c];
}

#endif
