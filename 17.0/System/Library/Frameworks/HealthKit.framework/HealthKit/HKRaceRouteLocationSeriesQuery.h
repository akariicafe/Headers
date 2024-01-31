@class NSString, NSUUID, NSMutableArray;

@interface HKRaceRouteLocationSeriesQuery : HKQuery <HKRaceRouteLocationSeriesQueryClientInterface> {
    NSUUID *_clusterUUID;
    NSUUID *_workoutUUID;
    unsigned long long _workoutSelection;
    double _timestampAnchor;
    unsigned long long _limit;
    id /* block */ _dataHandler;
    NSMutableArray *_results;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)a0;
- (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)queue_populateConfiguration:(id)a0;
- (void)client_deliverRaceRouteLocations:(id)a0 isFinal:(BOOL)a1 query:(id)a2;
- (id)initWithClusterUUID:(id)a0 workoutSelection:(unsigned long long)a1 timestampAnchor:(double)a2 limit:(unsigned long long)a3 dataHandler:(id /* block */)a4;
- (id)initWithWorkoutUUID:(id)a0 timestampAnchor:(double)a1 limit:(unsigned long long)a2 dataHandler:(id /* block */)a3;

@end
