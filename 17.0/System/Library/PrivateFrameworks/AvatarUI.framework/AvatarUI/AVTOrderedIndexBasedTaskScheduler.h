@class NSMutableDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVTOrderedIndexBasedTaskScheduler : NSObject <AVTIndexBasedTaskScheduler>

@property (readonly, nonatomic) NSMutableDictionary *scheduledTasks;
@property (readonly, nonatomic) NSMutableArray *scheduledTasksOrder;
@property (readonly, nonatomic) NSMutableDictionary *readyTasks;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexesForReadyTasksToRunGivenScheduledTasks:(id)a0 order:(id)a1 readyTasks:(id)a2 readyRowIndex:(id)a3;
+ (id)rowBaseIndexForIndex:(id)a0;

- (void)cancelTask:(id /* block */)a0;
- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllTasks;
- (void)performStateWork:(id /* block */)a0;
- (void)scheduleTask:(id /* block */)a0 forIndex:(unsigned long long)a1;
- (void)taskReady:(id /* block */)a0 forIndex:(unsigned long long)a1;

@end
