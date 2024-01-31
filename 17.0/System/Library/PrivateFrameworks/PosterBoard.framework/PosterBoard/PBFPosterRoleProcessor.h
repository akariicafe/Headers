@class NSHashTable, NSString, NSArray, NSOrderedSet, BSAtomicFlag, NSDictionary, NSObject, _PBFPosterRoleProcessorTransaction;
@protocol OS_os_log, PBFPosterExtensionDataStorage;

@interface PBFPosterRoleProcessor : NSObject <BSInvalidatable> {
    BSAtomicFlag *_invalidationFlag;
    NSOrderedSet *_roleOrderedSet;
    NSDictionary *_roleToRoleCoordinator;
    NSHashTable *_observers;
    _PBFPosterRoleProcessorTransaction *_activeTransaction;
}

@property NSObject<OS_os_log> *log;
@property (copy) NSString *logIdentifier;
@property (readonly) id<PBFPosterExtensionDataStorage> dataStorage;
@property (readonly) NSArray *roleCoordinators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)_executeChange:(id)a0 roleCoordinator:(id)a1 changeHandler:(id)a2 recursiveDepth:(unsigned long long)a3 transaction:(id)a4 error:(out id *)a5;
- (BOOL)_executeTransaction:(id)a0 block:(id /* block */)a1 error:(out id *)a2;
- (void)_fireDidBeginTransaction:(id)a0;
- (void)_fireDidCommitTransaction:(id)a0;
- (void)_fireDidEvaluateEvent:(id)a0 transaction:(id)a1;
- (void)_fireDidExecuteChange:(id)a0 transaction:(id)a1;
- (void)_fireDidFinalizeTransaction:(id)a0;
- (void)_fireTransactionFinished:(id)a0 result:(id)a1 error:(id)a2;
- (void)_fireWasInvalidated:(id)a0;
- (void)_fireWillBeginTransaction:(id)a0;
- (void)_fireWillCommitTransaction:(id)a0;
- (void)_fireWillEvaluateEvent:(id)a0 transaction:(id)a1;
- (void)_fireWillExecuteChange:(id)a0 transaction:(id)a1;
- (void)_fireWillFinalizeTransaction:(id)a0;
- (BOOL)_processEvent:(id)a0 changeHandler:(id)a1 recursiveDepth:(unsigned long long)a2 transaction:(id)a3 error:(out id *)a4;
- (id)initWithDataStorage:(id)a0 roleCoordinators:(id)a1;
- (void)noteTransactionWasInvalidated:(id)a0;
- (id)processChanges:(id)a0 context:(id)a1 reason:(id)a2 userInfo:(id)a3 error:(id *)a4;
- (id)processEvents:(id)a0 context:(id)a1 reason:(id)a2 userInfo:(id)a3 error:(out id *)a4;

@end
