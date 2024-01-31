@class HMFTimer, NSArray, HMDHomeManager, NSHashTable, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDUserManagementOperationManager : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_operations;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMFTimer *saveTimer;
@property (readonly, nonatomic) NSHashTable *observedAccessories;
@property (readonly, nonatomic) NSArray *operations;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedManager;
+ (void)setSharedManager:(id)a0;

- (void)addOperation:(id)a0;
- (void)cancelAllOperations;
- (void)timerDidFire:(id)a0;
- (id)init;
- (void)dealloc;
- (id)shortDescription;
- (id)initWithOperations:(id)a0;
- (void).cxx_destruct;
- (void)removeOperation:(id)a0;
- (void)_handleAccessoryIsReachable:(id)a0;
- (void)__deregisterIfNeededForReachablityChangeNotificationsForAccessory:(id)a0;
- (void)__executeOperation:(id)a0;
- (void)__registerIfNeededForReachablityChangeNotifications;
- (void)__registerIfNeededForReachablityChangeNotificationsForAccessory:(id)a0;
- (void)__removeOperationAndProcessDependantOperations:(id)a0;
- (void)__save;
- (void)_cleanPriorOperations:(id)a0;
- (id)_filteredOperationsForAccessory:(id)a0;
- (id)_filteredOperationsWithDependency:(id)a0;
- (void)_handleAddedOperation:(id)a0;
- (void)_handleRemovedOperation:(id)a0;
- (void)_reallySave;
- (void)operationCancelled:(id)a0;
- (void)operationStoppedBackingOff:(id)a0;
- (void)removeOperationWithIdentifier:(id)a0;

@end
