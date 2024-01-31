@class NSString, EDRemindMeNotificationController, EMQuery, EDMessagePersistence, EMObjectID, NSSet, EFLocked, EDPersistenceHookRegistry;
@protocol EMMessageListItemQueryResultsObserver;

@interface EDMessageRepositoryQueryHandler : NSObject <EFCancelable, EDMessageRepositoryQueryHandler> {
    struct atomic_flag { _Atomic BOOL _Value; } _didStart;
}

@property (retain, nonatomic) EFLocked *summaryLoadersMapTable;
@property (readonly, copy, nonatomic) EMQuery *query;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController;
@property (readonly, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserver;
@property (readonly, nonatomic) EMObjectID *observationIdentifier;
@property (readonly, copy, nonatomic) NSSet *mailboxes;
@property (readonly, nonatomic) long long dateSortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)messageReconciliationQueries;
- (void)dealloc;
- (BOOL)start;
- (void)tearDown;
- (id)threadReconciliationQueries;
- (void).cxx_destruct;
- (void)cancel;
- (void)test_tearDown;
- (void)requestSummaryForMessageObjectID:(id)a0;
- (id)_distinctObjectIDs:(id)a0 queryHandlerLog:(id)a1;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remindMeNotificationController:(id)a3 observer:(id)a4 observationIdentifier:(id)a5;
- (BOOL)keyPathsAffectSorting:(id)a0;

@end
