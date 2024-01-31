@interface NTKSimulatedLocationManager : NTKLocationManager

- (id)currentLocation;
- (id)init;
- (void)stopLocationUpdatesForToken:(id)a0;
- (id)companionLocation;
- (id)startLocationUpdatesWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)startLocationUpdatesWithIdentifier:(id)a0 wantsGroundElevation:(BOOL)a1 handler:(id /* block */)a2;
- (id)previousLocation;

@end
