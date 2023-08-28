#pragma once
#include <string>

// A basic feature with a name and a description.
class Feature {
public:
	virtual ~Feature() = default;

	virtual std::string name() = 0;
	virtual std::string desc() = 0;
};