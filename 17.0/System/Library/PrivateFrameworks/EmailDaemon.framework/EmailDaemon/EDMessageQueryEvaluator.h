@class EMQuery, EDMessagePersistence, EMMailboxScope, NSString, NSObject, NSCache;
@protocol OS_os_log;

@interface EDMessageQueryEvaluator : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMQuery *messageQuery;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (retain, nonatomic) NSCache *spotlightPredicateCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transformMessages:(id)a0;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1;
- (void).cxx_destruct;
- (id)transformAndFilterMessages:(id)a0;
- (id)transformMessages:(id)a0 includeDeleted:(BOOL)a1;
- (id)transformAndFilterMessages:(id)a0 includeDeleted:(BOOL)a1;
- (id)filterMessages:(id)a0 unmatchedMessages:(id *)a1;

@end
