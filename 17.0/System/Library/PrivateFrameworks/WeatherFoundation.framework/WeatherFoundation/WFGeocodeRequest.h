@class NSString, MKLocalSearchCompletion, WFLocation;

@interface WFGeocodeRequest : WFTask

@property (retain) NSString *searchString;
@property (retain) MKLocalSearchCompletion *autocompleteSearchResult;
@property struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain) WFLocation *geocodedResult;
@property (readonly) id /* block */ resultHandler;
@property (readonly) NSString *searchTerm;

- (void)handleResponse:(id)a0;
- (void)cleanup;
- (id)description;
- (void).cxx_destruct;
- (void)handleCancellation;
- (void)startWithService:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (id)initWithSearchCompletion:(id)a0 resultHandler:(id /* block */)a1;
- (id)initWithSearchString:(id)a0 resultHandler:(id /* block */)a1;

@end
