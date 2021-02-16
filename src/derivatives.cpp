#include "derivatives.h"

gecko::web::response gecko::derivativesFunctions::listDerivativeTickers(OPTIONAL std::string include_tickers) {
	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"include_tickers", include_tickers}
			}
		),
		NULL,
		NULL,
		NULL
	);

	cpr::Response r = this->request("derivatives", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}

gecko::web::response gecko::derivativesFunctions::getDerivativeMarketExchanges(OPTIONAL std::string order, OPTIONAL unsigned short per_page, OPTIONAL unsigned short page) {
	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"order", order}
			}
		),
		NULL,
		NULL,
		gecko::web::__buildShortParameters(
			Shorts {
				{"per_page", per_page},
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("derivatives/exchanges", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}

gecko::web::response gecko::derivativesFunctions::getDerivativeExchangesData(REQUIRED std::string id, OPTIONAL std::string include_tickers) {
	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"include_tickers", include_tickers}
			}
		),
		NULL,
		NULL,
		NULL
	);

	cpr::Response r = this->request("derivatives/exchanges/" + id, &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}

gecko::web::response gecko::derivativesFunctions::getDerivativeExchangesNameAndID() {
	cpr::Response r = this->request("derivatives/exchanges/list", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}