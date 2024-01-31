@class NSString, HKTaskServerProxyProvider;

@interface HKWorkoutClusterStore : NSObject <_HKXPCExportable, HKWorkoutClusterStoreClient> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id /* block */)_coordinatesHandlerWithCallback:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_workoutFilterForPredicate:(id)a0;
- (void)createWorkoutCluster:(id)a0 completion:(id /* block */)a1;
- (void)deleteWorkoutClusterWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchRouteCoordinatesForWorkoutUUID:(id)a0 dateInterval:(id)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fetchRouteCoordinatesForWorkoutUUID:(id)a0 startDate:(id)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fetchWorkoutClusterContainingWorkoutUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchWorkoutClustersContainingWorkoutUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchWorkoutClustersWithCompletion:(id /* block */)a0;
- (void)fetchWorkoutCountWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)fetchWorkoutRouteSnapshotForClusterUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchWorkoutUUIDsForClusterUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchWorkoutsWithPredicate:(id)a0 anchor:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)fetchWorkoutsWithPredicate:(id)a0 limit:(unsigned long long)a1 sortDescriptors:(id)a2 completion:(id /* block */)a3;
- (void)generateRaceRouteClustersWithLimit:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateWorkoutClusterWithUUID:(id)a0 newRelevance:(id)a1 newLastWorkoutUUID:(id)a2 newBestWorkoutUUID:(id)a3 newWorkoutAssociations:(id)a4 workoutAssociationsToRemove:(id)a5 completion:(id /* block */)a6;
- (void)updateWorkoutRouteLabel:(id)a0 forClusterUUID:(id)a1 completion:(id /* block */)a2;
- (void)updateWorkoutRouteSnapshot:(id)a0 forClusterUUID:(id)a1 completion:(id /* block */)a2;

@end
