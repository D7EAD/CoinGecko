#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'events' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/events
	// Status: functional - untested
	class eventsFunctions : private web {
		public:
			// Action: fetches events
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getEvents()
			//    getEvents("CN", "Meetup")
			// Notes: parameters from and to_date are in format yyyy-mm-dd
			DllExport gecko::web::response getEvents(
				OPTIONAL std::string country_code = "US",
				OPTIONAL std::string type = "Conference",
				OPTIONAL unsigned short page = 1,
				OPTIONAL bool upcoming_events_only = false,
				OPTIONAL const char* from_date = NULL,
				OPTIONAL const char* to_date = NULL
			);

			// Action: fetches list of event countries
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getEventCountries()
			// Notes: none
			DllExport gecko::web::response getEventCountries();

			// Action: fetches list of event types
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getEventTypes()
			// Notes: none
			DllExport gecko::web::response getEventTypes();
	};
}