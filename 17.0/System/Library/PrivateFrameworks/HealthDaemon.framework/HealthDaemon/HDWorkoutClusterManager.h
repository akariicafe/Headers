@class HDProfile, HDAssertion;

@interface HDWorkoutClusterManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDAssertion *_accessibilityAssertion;
}

@property (weak, nonatomic) HDProfile *profile;

- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (id)accessibilityAssertion;
- (void).cxx_destruct;
- (id)allWorkoutClustersWithError:(id *)a0;
- (id)allWorkoutUUIDsForClusterUUID:(id)a0 error:(id *)a1;
- (BOOL)createWorkoutCluster:(id)a0 error:(id *)a1;
- (BOOL)deleteWorkoutClusterWithUUID:(id)a0 error:(id *)a1;
- (BOOL)enumerateRouteLocationsForWorkoutUUID:(id)a0 startDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3 handler:(id /* block */)a4;
- (BOOL)performUsingAccessibilityAssertionWithError:(id *)a0 block:(id /* block */)a1;
- (void)takeAccessibilityAssertionIfNeeded;
- (BOOL)updateWorkoutClusterWithUUID:(id)a0 newRelevance:(id)a1 newLastWorkoutUUID:(id)a2 newBestWorkoutUUID:(id)a3 newWorkoutAssociations:(id)a4 workoutAssociationsToRemove:(id)a5 error:(id *)a6;
- (BOOL)updateWorkoutClusterWithUUID:(id)a0 newRouteLabel:(id)a1 error:(id *)a2;
- (BOOL)updateWorkoutClusterWithUUID:(id)a0 newRouteSnapshot:(id)a1 error:(id *)a2;
- (id)workoutClusterContainingWorkoutUUID:(id)a0 error:(id *)a1;
- (id)workoutClustersContainingWorkoutUUIDs:(id)a0 error:(id *)a1;
- (id)workoutCountWithFilter:(id)a0 error:(id *)a1;
- (id)workoutRouteSnapshotForClusterUUID:(id)a0 error:(id *)a1;
- (id)workoutsWithFilter:(id)a0 anchor:(id)a1 limit:(unsigned long long)a2 newAnchor:(id *)a3 error:(id *)a4;
- (id)workoutsWithFilter:(id)a0 limit:(unsigned long long)a1 sortDescriptors:(id)a2 error:(id *)a3;

@end
