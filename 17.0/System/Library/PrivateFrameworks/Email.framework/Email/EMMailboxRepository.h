@class NSString, NSSet, NSOrderedSet, NSMutableDictionary, NSObject, EMAccountRepository, EFPromise, NSMapTable;
@protocol OS_os_log, EFCancelable;

@interface EMMailboxRepository : EMRepository <EFLoggable, EMMailboxChangeObserver, EMMailboxTypeResolver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxesPromiseLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_mailboxesByObjectID;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) id<EFCancelable> registrationCancelable;
@property (readonly) NSOrderedSet *mailboxesIfAvailable;
@property (retain, nonatomic) EFPromise *mailboxesPromise;
@property (retain, nonatomic) NSMapTable *observerMap;
@property (readonly, nonatomic) EMAccountRepository *accountRepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;

+ (id)remoteInterface;

- (void)dealloc;
- (id)initInternal;
- (void).cxx_destruct;
- (void)mailboxListChanged:(id)a0;
- (void)performQuery:(id)a0 completionHandler:(id /* block */)a1;
- (id)mailboxObjectIDsForMailboxType:(long long)a0;
- (id)_filterIDsFromMailbox:(id)a0 withQuery:(id)a1;
- (id)_mailboxesFuture;
- (void)_prepareMailboxes:(id)a0;
- (void)_restartObservingMailboxChangesIfNecessary;
- (void)_startObservingMailboxChangesIfNecessary;
- (id)initWithRemoteConnection:(id)a0 accountRepository:(id)a1;
- (id)mailboxForObjectID:(id)a0;
- (id)mailboxIfAvailableForObjectID:(id)a0;
- (long long)mailboxTypeForMailboxObjectID:(id)a0;
- (id)mailboxesForObjectIDs:(id)a0;
- (id)mailboxesIfAvailableForObjectIDs:(id)a0;
- (id)performMailboxChangeAction:(id)a0;
- (id)performQuery:(id)a0 withObserver:(id)a1;
- (void)refreshMailboxList;
- (void)refreshQueryWithObserver:(id)a0;
- (id)remoteAllMailboxObjectIDs;
- (id)remoteMailboxObjectIDsForMailboxType:(long long)a0;
- (long long)remoteMailboxTypeForMailboxObjectID:(id)a0;

@end
