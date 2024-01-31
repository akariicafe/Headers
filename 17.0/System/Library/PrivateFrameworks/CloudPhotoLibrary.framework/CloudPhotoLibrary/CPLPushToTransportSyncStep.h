@interface CPLPushToTransportSyncStep : CPLSimpleTaskSyncStep

@property (readonly, nonatomic) BOOL highPriority;

- (id)newTask;
- (void)cancelAllTasks:(BOOL)a0;
- (id)initWithSyncManager:(id)a0 syncSession:(id)a1 highPriority:(BOOL)a2;

@end
