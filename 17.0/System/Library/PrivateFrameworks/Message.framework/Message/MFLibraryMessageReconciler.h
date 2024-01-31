@class EDMessagePersistence, MFMailMessageLibraryQueryTransformer, EDPersistenceHookRegistry, EDPersistenceDatabase;
@protocol MFAccountsProvider;

@interface MFLibraryMessageReconciler : NSObject {
    EDPersistenceHookRegistry *_hookRegistry;
    EDPersistenceDatabase *_database;
    EDMessagePersistence *_messagePersistence;
    id<MFAccountsProvider> _accountsProvider;
    MFMailMessageLibraryQueryTransformer *_transformer;
}

@property (readonly, nonatomic) unsigned long long numberOfUnreconciledMessages;

+ (unsigned long long)numberOfUnreconciledMessagesWithLibrary:(id)a0;

- (id)initWithLibrary:(id)a0 accountsProvider:(id)a1;
- (id)reconcileWithMessageReconciliationQueries:(id)a0 window:(id)a1;
- (void).cxx_destruct;
- (id)reconcileInboxMessagesWithWindow:(id)a0;
- (id)reconcileWithThreadReconciliationQueries:(id)a0 window:(id)a1;
- (void)reconcileAllObjectsWithWindow:(id)a0;

@end
