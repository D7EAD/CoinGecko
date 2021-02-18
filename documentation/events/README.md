<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/events">'events'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'events' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/events
  // Status: functional - untested
  class eventsFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'events' functions.</p>

<h4><code>events/getEvents</code></h4>

```c
  // Action: fetches events
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getEvents()
  //    getEvents("CN", "Meetup")
  // Notes: parameters from and to_date are in format yyyy-mm-dd
  gecko::web::response getEvents(
    OPTIONAL std::string country_code = "US",
    OPTIONAL std::string type = "Conference",
    OPTIONAL unsigned short page = 1,
    OPTIONAL bool upcoming_events_only = false,
    OPTIONAL const char* from_date = NULL,
    OPTIONAL const char* to_date = NULL
  );
```

<h4><code>events/getEventCountries</code></h4>

```c
  // Action: fetches list of event countries
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getEventCountries()
  // Notes: none
  gecko::web::response getEventCountries();
```

<h4><code>events/getEventTypes</code></h4>

```c
  // Action: fetches list of event types
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getEventTypes()
  // Notes: none
  gecko::web::response getEventTypes();
```
