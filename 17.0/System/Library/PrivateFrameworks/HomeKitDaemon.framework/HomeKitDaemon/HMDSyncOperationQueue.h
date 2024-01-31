@class HMFExponentialBackoffTimer, NSArray, NSString, HMDSyncOperationManager, NSMutableArray;

@interface HMDSyncOperationQueue : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_stagedOperations;
    NSMutableArray *_waitingOperations;
}

@property (weak, nonatomic) HMDSyncOperationManager *manager;
@property (readonly, copy) NSArray *stagedOperations;
@property (readonly, copy) NSArray *waitingOperations;
@property (nonatomic) double initialDelay;
@property (nonatomic) double initialBackoff;
@property (nonatomic) BOOL hasExponentialBackoff;
@property (retain, nonatomic) HMFExponentialBackoffTimer *backoffTimer;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long countTotal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)allOperations;
- (id)nextOperation;
- (void).cxx_destruct;
- (void)stageOperation:(id)a0;
- (void)_addOperation:(id)a0;
- (void)_addStagedOperation:(id)a0;
- (void)_addWaitingOperation:(id)a0;
- (void)_createBackoffTimer;
- (void)_removeStagedOperation:(id)a0;
- (void)_removeWaitingOperation:(id)a0;
- (void)addOperation:(id)a0 withDelay:(double)a1;
- (void)dropAllOperations;
- (void)dropOperation:(id)a0;
- (id)initName:(id)a0 syncManager:(id)a1 initialDelay:(double)a2 initialBackoff:(double)a3 hasBackoff:(BOOL)a4;
- (BOOL)isInMaximumTimeInterval;
- (id)operationsToCancel;
- (BOOL)processFiredTimer:(id)a0;
- (void)resetBackoffTimer;

@end
