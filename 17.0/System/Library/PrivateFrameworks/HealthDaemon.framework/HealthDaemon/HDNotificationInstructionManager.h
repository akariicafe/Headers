@class NSString, HDProfile, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface HDNotificationInstructionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDProfileReadyObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_hasInstructionsToInvalidate;
    BOOL _queue_hasEnqueuedMaintenanceWork;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_observersByClientIdentifier;
}

@property (copy) id /* block */ unitTest_didEvaluateIfMaintenanceWorkIsNeeded;
@property (readonly, copy, nonatomic) NSString *maintenanceOperationName;
@property (copy, nonatomic) NSDate *unitTest_nowDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)profileDidBecomeReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)invalidateNotificationInstructionsWithMessageIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)enumerateValidNotificationInstructionsForClientIdentifier:(id)a0 action:(long long)a1 error:(id *)a2 enumerationBlock:(id /* block */)a3;
- (id)initWithProfile:(id)a0 unitTest_nowDate:(id)a1 unitTest_didEvaluateIfMaintenanceWorkIsNeeded:(id /* block */)a2;
- (void)insertOrReplaceNotificationInstruction:(id)a0 completion:(id /* block */)a1;
- (BOOL)obliterateNotificationInstructionsError:(id *)a0;
- (void)registerObserver:(id)a0 forClientIdentifier:(id)a1 queue:(id)a2;
- (void)unregisterObserver:(id)a0 forClientIdentifier:(id)a1;

@end
