#include "companies.h"

gecko::web::response gecko::companiesFunctions::getCompaniesData(REQUIRED std::string id) {
	cpr::Response r = this->request("companies/public_treasury/" + id, NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}