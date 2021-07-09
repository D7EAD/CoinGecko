#include "exchange_rates.h"

gecko::web::response gecko::exchange_ratesFunctions::getExchangeRates() {
	cpr::Response r = this->request("exchange_rates", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}
