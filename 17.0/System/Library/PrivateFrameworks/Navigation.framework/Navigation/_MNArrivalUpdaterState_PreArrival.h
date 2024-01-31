@interface _MNArrivalUpdaterState_PreArrival : _MNArrivalUpdaterState

- (long long)state;
- (void)onEnterState:(id)a0;
- (double)parkingDetectionExcludeRadius;
- (void)updateForLocation;

@end
