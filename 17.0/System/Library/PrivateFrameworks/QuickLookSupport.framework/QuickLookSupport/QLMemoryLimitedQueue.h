@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface QLMemoryLimitedQueue : NSObject {
    unsigned long long _maxSize;
    unsigned long long _currentSize;
    int _currentTaskCount;
    int _maxTaskCount;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_tasks;
}

@property (readonly) int currentTaskCount;
@property (readonly) unsigned long long currentSize;

- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (void)executeTask:(id)a0;
- (void)dequeueIfPossible;
- (id)initWithMaximumMemoryConsumption:(unsigned long long)a0 maximumConcurrentTasks:(int)a1;

@end
