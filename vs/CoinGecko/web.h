#pragma once // thank God for pragma once

#define _SILENCE_CXX17_C_HEADER_DEPRECATION_WARNING

#include <iostream>
#include <map>
#include <memory>
#include <cpr/cpr.h>

// reminds you of MS' __in and __in_opt, huh? ;)
#define OPTIONAL
#define REQUIRED
#define DllExport   __declspec( dllexport )

namespace gecko {
	// Purpose: class interface used internally(privately) by *functions class methods to send requests to the CoinGecko endpoint.
	class web {
		public:
			// class that is returned to the user by *functions class methods so they don't have to deal with the whole CPR object -- unless they want
			struct response {
				std::string text;
				std::string response_code;
				std::string url;
				cpr::Response cURL_Object;
			};

			// function for sending GET request to API at 'this->endpoint+endpointPath' with optional parameters.
			cpr::Response request (
				REQUIRED std::string endpointPath,
				OPTIONAL cpr::Parameters* parameters
			);

			// build types
			typedef std::vector<std::pair<const std::string, std::string>>    Strings;
			typedef std::vector<std::pair<const std::string, const char*>>    cStrings;
			typedef std::vector<std::pair<const std::string, bool>>           Bools;
			typedef std::vector<std::pair<const std::string, unsigned short>> Shorts;

			// function for dynamically building (and returning) a cpr::Parameter object to pass to this->request, rather than repeating the code in each *functions class method.
			cpr::Parameters buildParameters(
				std::unique_ptr<Strings>  _strings,
				std::unique_ptr<cStrings> _cStrings,
				std::unique_ptr<Bools>    _bools,
				std::unique_ptr<Shorts>   _shorts
			);

			// functions for passing raw vector<pair> initializer lists to this->buildParameters' smart pointer parameters.
			std::unique_ptr<Strings>  __buildStringParameters(Strings _strings);
			std::unique_ptr<cStrings> __buildCStringParameters(cStrings _cStrings);
			std::unique_ptr<Bools>    __buildBoolParameters(Bools _bools);
			std::unique_ptr<Shorts>   __buildShortParameters(Shorts _shorts);

		private:
			// API endpoint used in this->request
			std::string endpoint = "https://api.coingecko.com/api/v3/";
	};
}