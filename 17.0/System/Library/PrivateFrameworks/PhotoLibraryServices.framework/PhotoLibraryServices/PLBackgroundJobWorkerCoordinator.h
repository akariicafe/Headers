@class NSArray, PLBackgroundJobWorkerCriteriaTuple, NSMutableDictionary, PLBackgroundJobStatusCenter, NSMutableArray;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject {
    PLBackgroundJobStatusCenter *_statusCenter;
    short _workerMode;
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerCriteriaTuple *_currentWorker;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _shouldDeferActivity;
    NSMutableDictionary *_cachedCriteriaForPendingWorkers;
}

@property (weak, nonatomic) id<PLBackgroundJobWorkerCoordinatorDelegate> delegate;

- (void)submitBundleForProcessing:(id)a0 withCriteria:(id)a1;
- (id)pendingJobsForBundle:(id)a0;
- (id)initWithWorkerClassesAsStrings:(id)a0 workerMode:(short)a1 statusCenter:(id)a2;
- (BOOL)shouldDeferActivity;
- (id)initWithWorkerClassesAsStrings:(id)a0;
- (id)initWithWorkerCoordinatorWorkerMode:(short)a0 statusCenter:(id)a1;
- (id)_workersForBundle:(id)a0;
- (void)_handleAllWorkersCompleted;
- (void).cxx_destruct;
- (void)_processNextWorkerInLibraryBundle:(id)a0;
- (void)stopAllBackgorundJobs;

@end
