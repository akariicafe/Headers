@class NSObject;
@protocol OS_dispatch_group;

@interface REExpectation : NSObject {
    NSObject<OS_dispatch_group> *_group;
    _Atomic int _count;
}

@property (readonly, nonatomic) long long outstandingOperations;

- (id)init;
- (void).cxx_destruct;
- (void)endOperation;
- (void)beginOperation;
- (void)notifyOperationsCompleteOnQueue:(id)a0 block:(id /* block */)a1;
- (void)notifyOperationsCompleteOrPerformUsingQueue:(id)a0 block:(id /* block */)a1;

@end
