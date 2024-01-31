@class NSString, HKWorkoutRoute;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface>

@property (retain, nonatomic) HKWorkoutRoute *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remote_finishRouteWithWorkout:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (void)remote_insertRouteData:(id)a0 completion:(id /* block */)a1;
- (void)createSeriesSampleIfNeeded:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)queue_recoverBuilder;
- (id)seriesSample;
- (void)server_insertRouteData:(id)a0 completion:(id /* block */)a1;

@end
