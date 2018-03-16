#include "stdafx.h"
#include "CSWoman.h"
#include "iostream"

CSWoman::CSWoman(const char * const name, const unsigned birthYear, const char * const fact) : 
		name_(name), birthYear_(birthYear), fact_(fact)
{
}

std::string CSWoman::get_name() const
{
	return name_;
}

unsigned CSWoman::get_birth_year() const
{
	return birthYear_;
}

std::string CSWoman::get_fact() const
{
	return fact_;
}
