#include "status_updates.h"

gecko::web::response gecko::status_updatesFunctions::getStatusUpdates(OPTIONAL const char* category, OPTIONAL const char* project_type, OPTIONAL unsigned short per_page, OPTIONAL unsigned short page) {
	cpr::Parameters p = gecko::web::buildParameters(
		NULL,
		gecko::web::__buildCStringParameters(
			cStrings {
				{"category", category},
				{"project_type", project_type}
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

	cpr::Response r = this->request("status_updates", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}