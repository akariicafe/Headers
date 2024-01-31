@class NSString, MFLibraryMessageReconciler, EDPersistenceHookRegistry, MFLibraryThreadReconciler;
@protocol MFAccountsProvider, EFScheduler, EDReconciliationQueryProvider;

@interface MFLibraryReconciler : NSObject <EDProtectedDataReconciliationHookResponder, EDDatabaseChangeHookResponder> {
    EDPersistenceHookRegistry *_hookRegistry;
    id<EFScheduler> _reconciliationCleanupScheduler;
    id<EDReconciliationQueryProvider> _queryProvider;
    id<MFAccountsProvider> _accountsProvider;
    MFLibraryMessageReconciler *_messageReconciler;
    MFLibraryThreadReconciler *_threadReconciler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLibrary:(id)a0 queryProvider:(id)a1 accountsProvider:(id)a2;
- (void).cxx_destruct;
- (void)persistenceDidReconcileProtectedData;

@end
