@class NSString;

@interface MapsSuggestionsRealNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)composedWaypointForMapItem:(id)a0 completion:(id /* block */)a1;
- (id)initFromResourceDepot:(id)a0;
- (BOOL)placeForMuid:(id)a0 completion:(id /* block */)a1;
- (BOOL)forwardGeocodePostalAddress:(id)a0 completion:(id /* block */)a1;
- (BOOL)routeForWaypoints:(id)a0 currentLocation:(id)a1 routeAttributes:(id)a2 feedback:(id)a3 completion:(id /* block */)a4;
- (BOOL)composedWaypointForAddressString:(id)a0 completion:(id /* block */)a1;
- (BOOL)placeRefinementForAddress:(id)a0 completion:(id /* block */)a1;
- (BOOL)forwardGeocodeAddressString:(id)a0 completion:(id /* block */)a1;
- (BOOL)searchString:(id)a0 maxResults:(unsigned int)a1 completion:(id /* block */)a2;
- (BOOL)composedWaypointForLocation:(id)a0 completion:(id /* block */)a1;
- (BOOL)reverseGeocodeCoordinate:(struct { double x0; double x1; })a0 shiftIfNeeded:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canonicalLocalSearchPostalAddress:(id)a0 completion:(id /* block */)a1;
- (BOOL)placeRefinementForCoordinate:(struct { double x0; double x1; })a0 address:(id)a1 completion:(id /* block */)a2;
- (BOOL)searchPOIWithName:(id)a0 ofPOICategory:(id)a1 withinVenue:(id)a2 maxResults:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)ETAFromWaypoint:(id)a0 toWaypoint:(id)a1 transportType:(int)a2 automobileOptions:(id)a3 completion:(id /* block */)a4;
- (BOOL)composedWaypointForCurrentLocation:(id)a0 completion:(id /* block */)a1;
- (BOOL)searchWithAirportCode:(id)a0 terminal:(id)a1 gate:(id)a2 completion:(id /* block */)a3;
- (BOOL)reverseGeocodeCoordinate:(struct { double x0; double x1; })a0 completion:(id /* block */)a1;
- (BOOL)resolveMapItemHandleData:(id)a0 completion:(id /* block */)a1;
- (BOOL)composedWaypointForLocation:(id)a0 mapItem:(id)a1 completion:(id /* block */)a2;

@end
