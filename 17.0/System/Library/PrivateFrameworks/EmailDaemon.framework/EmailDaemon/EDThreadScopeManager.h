@class NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log, EFScheduler, EDThreadScopeManagerDataSource;

@interface EDThreadScopeManager : NSObject <EFLoggable> {
    NSMutableDictionary *_threadScopes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _threadScopesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, weak, nonatomic) id<EDThreadScopeManagerDataSource> dataSource;
@property (readonly, nonatomic) id<EFScheduler> evictionScheduler;
@property (readonly, copy, nonatomic) NSArray *threadScopes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mailboxTypesToPrecompute;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)threadScopesByDatabaseID;
- (void)_initializeThreadScopesIfNeeded;
- (id)_threadScopeInfoForThreadScope:(id)a0;
- (void)_evictAtLeast:(unsigned long long)a0 upTo:(unsigned long long)a1 fromThreadScopesWithDatabaseIDs:(id)a2;
- (double)_evictionScoreForCount:(unsigned long long)a0 timeInterval:(double)a1;
- (id)_mailboxFromPrecomputedMailboxScope:(id)a0 mailboxProvider:(id)a1 mailboxPredicate:(id *)a2;
- (id)_mailboxScopeFromPredicate:(id)a0;
- (unsigned long long)_numberOfThreadScopesToEvictFrom:(id)a0 upTo:(unsigned long long *)a1;
- (id)_precomputedMailboxScopeForFilterPredicate:(id)a0 mailboxProvider:(id)a1 foundPredicates:(unsigned long long *)a2;
- (BOOL)_shouldPrecomputeMailboxType:(id)a0;
- (BOOL)_shouldPrecomputeMailboxWithObjectID:(id)a0;
- (id)_threadScopesWithLastViewedOlderThanLimit;
- (void)addThreadScope:(id)a0 withDatabaseID:(long long)a1 needsUpdate:(BOOL)a2 lastViewedDate:(id)a3;
- (long long)databaseIDForThreadScope:(id)a0;
- (BOOL)isThreadScopePrecomputed:(id)a0 mailboxProvider:(id)a1 shouldMigrate:(BOOL *)a2;
- (id)precomputedMailboxScopeForThreadScope:(id)a0 mailboxProvider:(id)a1 foundPredicates:(unsigned long long *)a2;
- (void)removeAllThreadScopes;
- (void)removeThreadScope:(id)a0;
- (void)removeThreadScopesForMailboxScope:(id)a0;
- (void)setLastViewedDate:(id)a0 forThreadScope:(id)a1;
- (void)setNeedsUpdate:(BOOL)a0 forThreadScope:(id)a1;
- (id)threadScopeFromPrecomputedMailboxScope:(id)a0 predicates:(unsigned long long)a1 mailboxProvider:(id)a2;

@end
