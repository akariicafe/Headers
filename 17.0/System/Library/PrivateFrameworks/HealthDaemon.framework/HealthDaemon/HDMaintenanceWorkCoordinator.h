@class NSString, HDAssertionManager, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver, HDMaintenanceOperationDelegate, HDDiagnosticObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_maintenanceWorkQueue;
    BOOL _suspended;
    NSMutableArray *_pendingOperations;
    NSMutableSet *_activeOperations;
    NSObject<OS_dispatch_source> *_timeoutSource;
    HDAssertionManager *_assertionManager;
}

@property (readonly) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAllOperations;
- (void)operationDidFinish:(id)a0;
- (BOOL)startNextOperationWithNameImmediately:(id)a0;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)init;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)takeMaintenanceSuspensionAssertionForOwner:(id)a0;
- (void).cxx_destruct;
- (void)enqueueMaintenanceOperation:(id)a0;
- (void)startOperationImmediately:(id)a0;

@end
