#pragma once

namespace my_lib {
	inline int strlen(char* chars) {
		int count = 0;
		while (*(chars++) != '\0') count++;
		return count;
	}

	class String {
	private:
		char* _chars;
	public:
		String(char* chars) {
			_chars = new char[0];
		};
		~String() {
			delete[] _chars;
		};
	};
}