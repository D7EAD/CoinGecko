#include "events.h"

gecko::web::response gecko::eventsFunctions::getEvents(
    OPTIONAL std::string country_code, OPTIONAL std::string type,
    OPTIONAL unsigned short page, OPTIONAL bool upcoming_events_only,
    OPTIONAL const char* from_date, OPTIONAL const char* to_date) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"country_code", country_code},
				{"type", type}
			}
		),
		gecko::web::__buildCStringParameters(
			cStrings {
				{"from_date", from_date},
				{"to_date", to_date}
			}
		),
		gecko::web::__buildBoolParameters(
			Bools {
				{"upcoming_events_only", upcoming_events_only}
			}
		),
		gecko::web::__buildShortParameters(
			Shorts {
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("events", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::eventsFunctions::getEventCountries() {
	cpr::Response r = this->request("events/countries", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::eventsFunctions::getEventTypes() {
	cpr::Response r = this->request("events/types", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}