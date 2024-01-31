@class EDCachingMailboxPredictor, EDMessagePersistence, NSString, EDPersistenceHookRegistry, NSObject, EDMailboxPersistence;
@protocol OS_os_log, EMUserProfileProvider, EDMailboxPredictionQueryAdapter, OS_dispatch_queue;

@interface EDMailboxPredictionController : NSObject <EDMessageChangeHookResponder, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EDMailboxPredictionQueryAdapter> queryAdapter;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) EDCachingMailboxPredictor *cachingPredictor;
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_accountsForMessages:(id)a0;
- (id)_createPredictor;
- (void)_invalidateCacheForAddedMessage:(id)a0;
- (void)_predictMailboxForMovingMessages:(id)a0 cancelationToken:(id)a1 completionHandler:(id /* block */)a2;
- (id)_processPredictionForMessages:(id)a0;
- (id)initWithMessagePersistence:(id)a0 mailboxPersistence:(id)a1 hookRegistry:(id)a2 userProfileProvider:(id)a3;
- (void)persistenceWillAddNewMessage:(id)a0 fromExistingMessage:(BOOL)a1;
- (id)predictMailboxForMovingObjectIDs:(id)a0 completionHandler:(id /* block */)a1;

@end
