#include "finance.h"

gecko::web::response gecko::financeFunctions::listFinancePlatforms(OPTIONAL unsigned short per_page, OPTIONAL unsigned short page) {
	cpr::Parameters p = gecko::web::buildParameters(
		NULL,
		NULL,
		NULL,
		gecko::web::__buildShortParameters(
			Shorts {
				{"per_page", per_page},
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("finance_platforms", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}

gecko::web::response gecko::financeFunctions::listFinanceProducts(OPTIONAL const char* start_at, OPTIONAL const char* end_at, OPTIONAL unsigned short per_page, OPTIONAL unsigned short page) {
	cpr::Parameters p = gecko::web::buildParameters(
		NULL,
		gecko::web::__buildCStringParameters(
			cStrings {
				{"start_at", start_at},
				{"end_at", end_at}
			}
		),
		NULL,
		gecko::web::__buildShortParameters(
			Shorts {
				{"per_page", per_page},
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("finance_products", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}