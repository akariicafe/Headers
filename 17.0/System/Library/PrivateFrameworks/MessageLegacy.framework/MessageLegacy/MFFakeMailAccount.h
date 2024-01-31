@class NSRecursiveLock, NSURL, MFIMAPConnection, DeliveryAccount;

@interface MFFakeMailAccount : MailAccount {
    NSURL *_URL;
    MFIMAPConnection *_cachedConnection;
    NSRecursiveLock *_flagChangesLock;
}

@property (retain, nonatomic) DeliveryAccount *deliveryAccount;
@property (nonatomic, getter=isManaged) BOOL managed;

- (int)cachePolicy;
- (id)initWithURL:(id)a0;
- (id)init;
- (id)uniqueId;
- (id)URLString;
- (id)hostname;
- (id)username;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isActive;
- (id)displayName;
- (void)setCachedConnection:(id)a0;
- (id)_URLScheme;
- (id)_mailboxPathPrefix;
- (id)_nameForMailboxUid:(id)a0;
- (BOOL)_shouldConfigureMailboxCache;
- (void)didFinishActionForChokePoint:(id)a0 coalescePoint:(id)a1 withResult:(id)a2;
- (unsigned int)minID;
- (id)powerAssertionIdentifierWithPrefix:(id)a0;
- (BOOL)shouldFetchAgainWithError:(id)a0 foregroundRequest:(BOOL)a1;
- (BOOL)supportsFastRemoteBodySearch;
- (BOOL)supportsRemoteAppend;
- (BOOL)willPerformActionForChokePoint:(id)a0 coalescePoint:(id)a1 result:(id *)a2;
- (id)flagChangesLock;
- (id)connectionForStore:(id)a0 delegate:(id)a1 options:(int)a2;
- (id)flagChangesForMailboxPath:(id)a0 UID:(unsigned int)a1 connectTime:(double)a2;
- (id)initWithURL:(id)a0 rootMailboxUid:(id)a1;
- (void)setUnreadCount:(unsigned int)a0 forMailbox:(id)a1;

@end
