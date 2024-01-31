@class NSString, RTRoutineManager;

@interface MapsSuggestionsRealRoutineConnector : NSObject <MapsSuggestionsRoutineConnector> {
    RTRoutineManager *_routineManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)a0 withHandler:(id /* block */)a1;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)a0;
- (void)fetchLocationOfInterestWithIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchRoutineModeFromLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)startMonitoringVehicleEventsWithHandler:(id /* block */)a0;
- (id)init;
- (void)fetchLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchLocationOfInterestAtLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)stopMonitoringVehicleEvents;
- (void)fetchLocationsOfInterestOfType:(long long)a0 withHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchNextPLOIsFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 withHandler:(id /* block */)a3;
- (void)removeLocationOfInterestWithIdentifier:(id)a0 handler:(id /* block */)a1;

@end
