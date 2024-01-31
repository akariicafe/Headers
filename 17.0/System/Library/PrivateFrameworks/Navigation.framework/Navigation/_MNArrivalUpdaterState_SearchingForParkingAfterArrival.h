@interface _MNArrivalUpdaterState_SearchingForParkingAfterArrival : _MNArrivalUpdaterState

- (long long)state;
- (BOOL)_checkForArrival;
- (void)onEnterState:(id)a0;
- (void)updateForLocation;

@end
