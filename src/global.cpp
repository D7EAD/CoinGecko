#include "global.h"

gecko::web::response gecko::globalFunctions::getGlobalCryptoData() {
	cpr::Response r = this->request("global", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::globalFunctions::getGlobalCryptoDefiData() {
	cpr::Response r = this->request("global/decentralized_finance_defi", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}
