#pragma once
#include <iostream>
#include <INI.hpp>
#include <INI_Defaults.hpp>

class Config {
	INI* _config{ nullptr };

public:
	Config(INI& config_inst) : _config{ &config_inst } {}

	std::string get(std::string&& header, std::string&& key)
	{

	}

	friend std::ostream& operator<<(std::ostream& os, const Config& c)
	{
		
		return os;
	}
};