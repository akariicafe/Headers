@class NSString, _KSTextReplacementServer;

@interface _KSTRClient : NSObject <_KSTextReplacementServiceProtocol> {
    _KSTextReplacementServer *_owner;
}

@property (nonatomic) long long generation;
@property (readonly, nonatomic) BOOL hasReadAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestSyncWithReply:(id /* block */)a0;
- (void)removeAllEntries;
- (id)initWithOwner:(id)a0 forConnection:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOwner:(id)a0;
- (void)queryTextReplacementEntriesWithReply:(id /* block */)a0;
- (void)cancelPendingUpdatesWithReply:(id /* block */)a0;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withReply:(id /* block */)a2;
- (void)queryTextReplacementsWithPredicate:(id)a0 reply:(id /* block */)a1;

@end
