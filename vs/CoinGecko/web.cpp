#include "web.h"

cpr::Response gecko::web::request(REQUIRED std::string endpointPath, OPTIONAL cpr::Parameters* parameters) {
	cpr::Response r;
	if (parameters != NULL) {
		r = cpr::Get(
			cpr::Url {
				this->endpoint + endpointPath
			},
			cpr::Parameters(*parameters)
		);
		return r;
	} else {
		r = cpr::Get(
			cpr::Url {
				this->endpoint + endpointPath
			}
		);
		return r;
	}
}

cpr::Parameters gecko::web::buildParameters(
	std::unique_ptr<gecko::web::Strings>  _strings,
	std::unique_ptr<gecko::web::cStrings> _cStrings,
	std::unique_ptr<gecko::web::Bools>    _bools,
	std::unique_ptr<gecko::web::Shorts>   _shorts) {

	cpr::Parameters p; cpr::CurlHolder ch;	
	if (_strings != NULL) {
		for (auto const& value : *_strings) {
			p.AddParameter( { value.first, value.second }, ch); // value.first: [key], value.second: [value]
		}
	}
	
	if (_cStrings != NULL) {
		for (auto const& value : *_cStrings) {
			if (value.second != NULL) {
				p.AddParameter({ value.first, value.second }, ch);
			}
		}
	}
	
	if (_bools != NULL) {
		for (auto const& value : *_bools) {
			value.second ? p.AddParameter({ value.first, "true" }, ch) : p.AddParameter({ value.first, "false" }, ch);
		}
	}
	
	if (_shorts != NULL) {
		for (auto const& value : *_shorts) {
			p.AddParameter({ value.first, std::to_string(value.second) }, ch);
		}
	}

	return p;
}

std::unique_ptr<gecko::web::Strings> gecko::web::__buildStringParameters(gecko::web::Strings _strings) {
	return std::make_unique<gecko::web::Strings>(_strings);
}

std::unique_ptr<gecko::web::cStrings> gecko::web::__buildCStringParameters(gecko::web::cStrings _cStrings) {
	return std::make_unique<gecko::web::cStrings>(_cStrings);
}

std::unique_ptr<gecko::web::Bools> gecko::web::__buildBoolParameters(gecko::web::Bools _bools) {
	return std::make_unique<gecko::web::Bools>(_bools);
}

std::unique_ptr<gecko::web::Shorts> gecko::web::__buildShortParameters(gecko::web::Shorts _shorts) {
	return std::make_unique<gecko::web::Shorts>(_shorts);
}

/*
std::initializer_list<cpr::Parameter>* gecko::web::parameters(std::initializer_list<cpr::Parameter> keyValue) {
	return &keyValue;
}*/