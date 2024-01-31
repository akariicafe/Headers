@interface _MNLocationSimulationState_ReturnToDestination : _MNLocationSimulationState_SearchingForParkingBeforeArrival

- (long long)type;
- (void)_findParkingLocation:(id /* block */)a0;
- (void)_handleReachedParkingLocation;

@end
