@class NSArray, NSMapTable, NSSet, NSString, NSObject;
@protocol EFScheduler, EDAccountsProvider, OS_dispatch_queue, EDMailboxProviderDelegate;

@interface EDMailboxProvider : NSObject <EMMailboxTypeResolver> {
    _Atomic int _deferringInvalidationCount;
    BOOL _needsToInvalidate;
}

@property (weak, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (retain) NSMapTable *legacyMailboxToMailboxMap;
@property (retain) NSMapTable *objectIDToLegacyMailboxMap;
@property (retain) NSArray *allMailboxCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mailboxCacheQueue;
@property (retain, nonatomic) id<EFScheduler> observerScheduler;
@property (weak, nonatomic) id<EDMailboxProviderDelegate> delegate;
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateCache;
- (id)legacyMailboxForObjectID:(id)a0;
- (void)_fetchMailboxesForAccount:(id)a0;
- (id)initWithAccountsProvider:(id)a0;
- (id)_transformMailbox:(id)a0 legacyMailboxToMailboxMap:(id)a1 objectIDToLegacyMailboxMap:(id)a2;
- (void).cxx_destruct;
- (void)test_tearDown;
- (void)_didChangeMailboxList:(id)a0;
- (void)_didFetchMailboxList:(id)a0;
- (void)_didReloadMailboxList:(id)a0;
- (void)_mailboxInvalidated:(id)a0;
- (void)_willFetchMailboxList:(id)a0;
- (void)_willReloadMailboxList:(id)a0;
- (id)mailboxObjectIDsForMailboxType:(long long)a0;
- (id)mailboxForObjectID:(id)a0;
- (long long)mailboxTypeForMailboxObjectID:(id)a0;
- (void)_populateCache;
- (void)_beginDeferringInvalidation;
- (void)_endDeferringInvalidation;
- (BOOL)_isDeferringInvalidation;
- (id)allMailboxes;
- (void)enumerateAccountsWithBlock:(id /* block */)a0;
- (void)fetchMailboxes;
- (void)invalidateMailboxes;
- (id)legacyMailboxesForObjectIDs:(id)a0;
- (id)mailboxFromLegacyMailbox:(id)a0;
- (id)mailboxesFromLegacyMailboxes:(id)a0;

@end
