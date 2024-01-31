@class CPLEngineSyncTask;

@interface CPLSimpleTaskSyncStep : CPLSyncStep

@property (readonly, nonatomic) Class taskClass;
@property (readonly, nonatomic) CPLEngineSyncTask *currentTask;

- (BOOL)hasTasks;
- (void).cxx_destruct;
- (id)newTask;
- (void)cancelAllTasks:(BOOL)a0;
- (BOOL)containsTask:(id)a0;
- (id)descriptionForTasks;
- (BOOL)didFinishTask:(id)a0 withError:(id)a1 shouldStop:(BOOL *)a2;
- (id)initWithSyncManager:(id)a0 syncSession:(id)a1 taskClass:(Class)a2;
- (BOOL)launchNecessaryTasks;
- (void)moveTasksToBackground;

@end
