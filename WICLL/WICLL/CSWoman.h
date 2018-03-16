#pragma once
#include "stdafx.h"
#include "string"

class CSWoman
{
	private:
		const std::string name_;
		const unsigned birthYear_;
		const std::string fact_;

	public:
		CSWoman(const char* const name, const unsigned birthYear, const char* const fact);
		std::string get_name() const;
		unsigned get_birth_year() const;
		std::string get_fact() const;
};