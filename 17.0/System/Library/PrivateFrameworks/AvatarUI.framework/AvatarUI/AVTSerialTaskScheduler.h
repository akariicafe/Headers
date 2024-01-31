@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVTSerialTaskScheduler : NSObject <AVTTaskScheduler>

@property (readonly, nonatomic) NSMutableArray *priorityTasks;
@property (readonly, nonatomic) NSMutableArray *backlogTasks;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly, nonatomic) long long order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fifoScheduler;
+ (id)fifoSchedulerWithEnvironment:(id)a0;
+ (id)lifoScheduler;
+ (id)lifoSchedulerWithEnvironment:(id)a0;
+ (id /* block */)nextTaskToRunForPriorityTasks:(id)a0 backlogTasks:(id)a1 order:(long long)a2;

- (void)cancelTask:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scheduleTask:(id /* block */)a0;
- (void)cancelAllTasks;
- (void)didCompleteTask:(id /* block */)a0;
- (id)initWithEnvironment:(id)a0 order:(long long)a1;
- (void)lowerTaskPriority:(id /* block */)a0;
- (void)performStateWork:(id /* block */)a0;
- (void)startTask:(id /* block */)a0;

@end
