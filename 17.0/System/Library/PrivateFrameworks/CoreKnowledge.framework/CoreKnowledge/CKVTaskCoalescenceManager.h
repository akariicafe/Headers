@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface CKVTaskCoalescenceManager : NSObject {
    NSString *_managerName;
    _Atomic unsigned int _eventIdCounter;
    NSMutableDictionary *_taskRegistry;
    unsigned int _transactionCounter;
    double _coalescenceInterval;
    double _coalescenceDelay;
    double _initalizedCoalescenceDelay;
    NSObject<OS_dispatch_queue> *_taskRegistryQueue;
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;
}

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;

- (void)_endTransaction;
- (id)init;
- (void)overrideCoalescenceDelay:(double)a0;
- (void)submitTaskWithId:(unsigned short)a0 taskBlock:(id /* block */)a1 coalesce:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_beginTransaction;
- (id)initWithManagerName:(id)a0 coalescenceInterval:(double)a1 coalescenceDelay:(double)a2 dispatchQoS:(unsigned int)a3;
- (BOOL)_didIncomingTask:(id)a0 arriveInCoalescingWindowWithLastTask:(id)a1;
- (void)removeOverrides;

@end
