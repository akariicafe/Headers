@class TRIClient, TRIServerContext, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface TRITaskQueue : NSObject <TRITaskQueuing, TRITaskQueueStateProviding> {
    _PASLock *_lock;
    TRIServerContext *_serverContext;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSObject<OS_dispatch_group> *_opGroup;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    TRIClient *_client;
}

- (BOOL)cancelTask:(id)a0;
- (BOOL)cancelTasksWithTag:(id)a0;
- (BOOL)cancelTasksWithTag:(id)a0 excludingTasks:(id)a1;
- (id)init;
- (BOOL)_cancelTask:(id)a0 guardedData:(id)a1;
- (id)_createOperationWithTask:(id)a0 withId:(id)a1 dependencies:(id)a2 taskMap:(id)a3 xpcActivities:(id)a4;
- (void)registerFinalizeBlock:(id /* block */)a0;
- (void)_scheduleFutureActivitiesWithGuardedData:(id)a0;
- (struct { unsigned char x0; })addTask:(id)a0 options:(id)a1;
- (unsigned long long)count;
- (void)_registerTaskQueueActivityForDate:(id)a0;
- (void)_finalizeTask:(id)a0 withId:(id)a1 runResult:(id)a2;
- (BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)a0 block:(id /* block */)a1;
- (id)initWithServerContext:(id)a0 operationQueue:(id)a1 operationGroup:(id)a2 asyncQueue:(id)a3;
- (id)activeActivityGrantingCapability:(unsigned long long)a0;
- (struct { unsigned char x0; })_addTask:(id)a0 options:(id)a1 guardedData:(id)a2 taskIdOut:(id *)a3 accumulatedNewTaskRecords:(id)a4;
- (id)_earliestStartDateFromTaskList:(id)a0;
- (BOOL)_cancelDependenciesAndTaskWithId:(id)a0 guardedData:(id)a1;
- (struct { unsigned char x0; })_addTask:(id)a0 options:(id)a1 guardedData:(id)a2 taskId:(id *)a3 tryRunningEligibleTasksImmediately:(BOOL)a4;
- (struct { unsigned char x0; })_addTask:(id)a0 options:(id)a1 taskId:(id *)a2 tryRunningEligibleTasksImmediately:(BOOL)a3;
- (BOOL)_isTaskWithId:(id)a0 inTaskGroup:(id)a1 runnableGivenCapabilities:(unsigned long long)a2 atDate:(id)a3 cachedRunnability:(id)a4 visitedPath:(id)a5 topoSortedRunnable:(id)a6 allowOnlyRootTasksRunnable:(BOOL)a7;
- (void)_startRunnableTasksIfNecessaryWithGuardedData:(id)a0;
- (void)_registerRetryActivityForDate:(id)a0;
- (BOOL)_cancelTaskWithId:(id)a0 guardedData:(id)a1 persistCancel:(BOOL)a2;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_startImmediateTasksIfNotAlreadyQueued:(id)a0 guardedData:(id)a1 didStartNewWork:(BOOL *)a2;
- (BOOL)_removeTaskWithId:(id)a0 guardedData:(id)a1 persistRemove:(BOOL)a2;
- (BOOL)ifNotPresentAddTask:(id)a0;
- (id)_runTask:(id)a0;
- (struct { unsigned char x0; })addTask:(id)a0 options:(id)a1 taskId:(id *)a2;
- (void)_partitionTaskGroup:(id)a0 byRunnabilityGivenCapabilities:(unsigned long long)a1 runnableAtDate:(id)a2 topoSortedCurrentlyRunnable:(id *)a3 blocked:(id *)a4 allowOnlyRootTasksRunnable:(BOOL)a5;
- (void)resumeWithXPCActivityDescriptor:(id)a0 executeWhenSuspended:(id /* block */)a1;
- (id)_addTask:(id)a0 withDependencies:(id)a1 guardedData:(id)a2;
- (BOOL)finishXPCActivitiesWithGuardedData:(id)a0;
- (void)_evaluateRunConditionsWithGuardedData:(id)a0 shouldContinueWork:(BOOL *)a1;
- (BOOL)updateActivity:(id)a0 withStartDate:(id)a1;
- (void)waitForAsyncQueue;
- (void)registerFinalizeBlockToRetryWithBlock:(id /* block */)a0;
- (id)activeActivityDescriptorGrantingCapability:(unsigned long long)a0;

@end
