@interface EKTravelLookupManager : NSObject

+ (id)defaultManager;
+ (void)estimateGeolocationFromHistoricDevicePositionAtLocation:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (void)geocodeAddress:(id)a0 withCompletionBlock:(id /* block */)a1;

- (void)_travelTimeWithStartCoordinate:(id)a0 endCoordinate:(id)a1 arrivalDate:(id)a2 withRouteType:(id)a3 completionBlock:(id /* block */)a4;
- (void)_updateLocation:(id)a0 withMapItem:(id)a1 forRoute:(id)a2 withCompletionBlock:(id /* block */)a3;
- (void)findCoordinatesForLocation:(id)a0 completionBlock:(id /* block */)a1;
- (void)travelTimeFrom:(id)a0 to:(id)a1 arrivalDate:(id)a2 withRouteType:(id)a3 withCompletionBlock:(id /* block */)a4;
- (void)travelTimeFrom:(id)a0 to:(id)a1 arrivalDate:(id)a2 withRouteTypes:(id)a3 withCompletionBlock:(id /* block */)a4;

@end
