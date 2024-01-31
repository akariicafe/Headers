@class NSOrderedSet, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, FCKeyedOperationQueueDelegate;

@interface FCKeyedOperationQueue : NSObject {
    id<FCKeyedOperationQueueDelegate> _delegate;
    NSMutableOrderedSet *_mutableKeyQueue;
    NSMutableSet *_keysForExecutingOperations;
    long long _maxConcurrentOperationCount;
    NSMutableDictionary *_cancelHandlersByKey;
    NSObject<OS_dispatch_group> *_operationExecutionGroup;
}

@property (readonly, weak, nonatomic) id<FCKeyedOperationQueueDelegate> delegate;
@property (copy, nonatomic) NSOrderedSet *keyQueue;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;

- (id)init;
- (id)initWithDelegate:(id)a0 maxConcurrentOperationCount:(long long)a1;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
