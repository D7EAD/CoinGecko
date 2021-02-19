#include "contract.h"

gecko::web::response gecko::contractFunctions::getCoinInfoFromContract(REQUIRED std::string id, REQUIRED std::string contract_address) {
	cpr::Response r = this->request("coins/" + id + "/contract/" + contract_address, NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}

gecko::web::response gecko::contractFunctions::getContractMarketHistory(
	REQUIRED std::string id, REQUIRED std::string contract_address,
	REQUIRED std::string vs_currency, REQUIRED std::string days) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"vs_currency", vs_currency},
				{"days", days}
			}
		),
		NULL,
		NULL,
		NULL
	);

	cpr::Response r = this->request("coins/" + id + "/contract/" + contract_address + "/market_chart", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}

gecko::web::response gecko::contractFunctions::getContractMarketHistoryWithinRange(
	REQUIRED std::string id, REQUIRED std::string contract_address,
	REQUIRED std::string vs_currency, REQUIRED std::string to, REQUIRED std::string from) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"vs_currency", vs_currency},
				{"to", to},
				{"from", from}
			}
		),
		NULL,
		NULL,
		NULL
	);

	cpr::Response r = this->request("coins/" + id + "/contract/" + contract_address + "/market_chart/range", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}
