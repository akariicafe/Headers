@class _DASScheduler, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BGSystemTaskScheduler : NSObject

@property (class, readonly) BGSystemTaskScheduler *sharedScheduler;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSMutableDictionary *registrations;
@property (retain, nonatomic) NSMutableDictionary *runningTasksMap;
@property (retain, nonatomic) NSMutableDictionary *pendingTasksMap;
@property (retain, nonatomic) _DASScheduler *scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (BOOL)registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)submitTaskRequest:(id)a0 error:(id *)a1;
- (id)taskRequestForIdentifier:(id)a0;
- (BOOL)cancelTaskRequestWithIdentifier:(id)a0 error:(id *)a1;
- (void)cleanupTaskObject:(id)a0;
- (void)getTaskStatusForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)installEventStreamHandler;
- (void)processEvent:(id)a0 forRegistration:(id)a1;
- (void)runTaskWithRegistration:(id)a0;
- (void)suspendTaskWithRegistration:(id)a0;
- (BOOL)updateTaskRequest:(id)a0 error:(id *)a1;

@end
