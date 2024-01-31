@class NSString, PLPhotoLibraryBundleCriteriaTuple, PLBackgroundJobWorkerCoordinator, PLBackgroundJobStatusCenter, NSMutableArray;
@protocol PLBackgroundJobLibraryCoordinatorDelegate;

@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate> {
    PLBackgroundJobStatusCenter *_statusCenter;
    NSMutableArray *_pendingPhotoLibraryBundles;
    PLPhotoLibraryBundleCriteriaTuple *_currentPhotoLibraryBundle;
    PLBackgroundJobWorkerCoordinator *_workerCoordinator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<PLBackgroundJobLibraryCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleBundleComplete:(id)a0;
- (BOOL)shouldDeferActivity;
- (id)initWithWorkerCoordinator:(id)a0;
- (id)pendingJobsOnBundles:(id)a0;
- (void)startBackgroundJobsOnBundles:(id)a0 withCriteria:(id)a1;
- (void)_handleAllBundlesCompleted;
- (id)initWithStatusCenter:(id)a0;
- (void)stopBackgroundJobsOnAllBundles;
- (id)initWithWorkerCoordinator:(id)a0 statusCenter:(id)a1;
- (void)_submitNextQueuedBundle;
- (void).cxx_destruct;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)a0;

@end
