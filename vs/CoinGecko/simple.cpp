#include "simple.h"

gecko::web::response gecko::simpleFunctions::getPrice(
	REQUIRED std::string id, REQUIRED std::string vs_currencies, OPTIONAL bool includeMarketCap,
	OPTIONAL bool include24HrVol, OPTIONAL bool include24HrChange, OPTIONAL bool includeLastUpdatedAt) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings { 
				{"vs_currencies", vs_currencies},
				{"ids", id}
			}
		),
		NULL,
		gecko::web::__buildBoolParameters(
			Bools {
				{"include_market_cap", includeMarketCap},
				{"include_24hr_vol", include24HrVol},
				{"include_24hr_change", include24HrChange},
				{"include_last_updated_at", includeLastUpdatedAt}
			}
		),
		NULL
	);

	cpr::Response r = this->request("simple/price", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::simpleFunctions::getTokenPrice(
	REQUIRED std::string id, REQUIRED std::string contract_addresses, REQUIRED std::string vs_currencies,
	OPTIONAL bool includeMarketCap, OPTIONAL bool include24HrVol, OPTIONAL bool include24HrChange, OPTIONAL bool includeLastUpdatedAt) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"vs_currencies", vs_currencies},
				{"contract_addresses", contract_addresses}
			}
		),
		NULL,
		gecko::web::__buildBoolParameters(
			Bools {
				{"include_market_cap", includeMarketCap},
				{"include_24hr_vol", include24HrVol},
				{"include_24hr_change", include24HrChange},
				{"include_last_updated_at", includeLastUpdatedAt}
			}
		),
		NULL
	);

	cpr::Response r = this->request("simple/token_price/" + id, &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::simpleFunctions::getSupportedVsCurrencies() {
	cpr::Response r = this->request("simple/supported_vs_currencies", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}