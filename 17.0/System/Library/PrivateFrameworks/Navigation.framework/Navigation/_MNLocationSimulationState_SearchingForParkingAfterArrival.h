@interface _MNLocationSimulationState_SearchingForParkingAfterArrival : _MNLocationSimulationState_SearchingForParkingBeforeArrival

- (long long)type;
- (void)_handleReachedParkingLocation;
- (double)_scoreForRoad:(id)a0 coordinate:(struct { double x0; double x1; })a1;

@end
