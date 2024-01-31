@class HKWorkoutRoute, NSString, NSUUID, NSDateInterval;

@interface HKWorkoutRouteQuery : HKQuery <HKWorkoutRouteQueryClientInterface> {
    HKWorkoutRoute *_series;
    NSUUID *_workoutUUID;
    NSDateInterval *_dateInterval;
}

@property (readonly, nonatomic) id /* block */ dataHandler;
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
- (void)client_deliverWorkoutRouteLocations:(id)a0 isFinal:(BOOL)a1 query:(id)a2;
- (id)initWithActiveWorkoutUUID:(id)a0 dataHandler:(id /* block */)a1;
- (id)initWithRoute:(id)a0 dataHandler:(id /* block */)a1;
- (id)initWithRoute:(id)a0 dateInterval:(id)a1 dataHandler:(id /* block */)a2;
- (id)initWithRoute:(id)a0 workoutUUID:(id)a1 dateInterval:(id)a2 dataHandler:(id /* block */)a3;

@end
