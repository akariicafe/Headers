@class NSObject, NSArray, ENAccountIdentity, NSMutableArray;
@protocol OS_dispatch_queue, ENGroupContextDataSource;

@interface ENGroupContext : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) ENAccountIdentity *accountIdentity;
@property (retain, nonatomic) NSMutableArray *middlewares;
@property (retain, nonatomic) id<ENGroupContextDataSource> dataSource;
@property (readonly, nonatomic) NSArray *allMiddlewares;

+ (id)_errorWithNotFoundItems:(id)a0;
+ (id)_missingItemsInNotFoundError:(id)a0 remainingErrors:(id *)a1;

- (void).cxx_destruct;
- (void)_didCacheGroup:(id)a0 completion:(id /* block */)a1;
- (void)_didCreateGroup:(id)a0 completion:(id /* block */)a1;
- (void)_didReceiveDecryptionFailureForGroup:(id)a0 completion:(id /* block */)a1;
- (void)_didUpdateGroup:(id)a0 withNewGroup:(id)a1 completion:(id /* block */)a2;
- (void)_fetchGroupWithGroupID:(id)a0 skipCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)_groupFromPublicDataRepresentation:(id)a0 completion:(id /* block */)a1;
- (void)_publicDataRepresentationForGroup:(id)a0 completion:(id /* block */)a1;
- (void)appendMiddleware:(id)a0;
- (void)cacheIncomingGroup:(id)a0 completion:(id /* block */)a1;
- (void)fetchGroupWithGroupID:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccountIdentity:(id)a0 dataSource:(id)a1 queue:(id)a2;
- (void)_noteRegistrationIdentityUpdate;
- (id)_middlwareConformingToProtocol:(id)a0;
- (void)_cacheGroup:(id)a0 completion:(id /* block */)a1;
- (void)_didReceiveRegistrationIdentityUpdateWithCompletion:(id /* block */)a0;
- (void)_dropLocalCache:(id /* block */)a0;
- (void)_dropLocalCacheForGroupID:(id)a0 compeltion:(id /* block */)a1;
- (void)_fetchAllLocalKnownGroups:(id /* block */)a0;
- (void)_noteDecryptionFailureForGroup:(id)a0 completion:(id /* block */)a1;
- (void)_participantsForCypher:(id)a0 completion:(id /* block */)a1;
- (void)_qCacheGroup:(id)a0 toMiddlewares:(id)a1 completion:(id /* block */)a2;
- (id)_qCacheMiddlewares;
- (id)_qCacheMiddlewaresContainedInCost:(long long)a0;
- (void)_qDidCacheGroup:(id)a0;
- (void)_qDidCreateGroup:(id)a0;
- (void)_qDidReceiveDecryptionFailureForGroup:(id)a0;
- (void)_qDidReceiveRegistrationIdentityUpdate;
- (void)_qDidUpdateGroup:(id)a0 withGroup:(id)a1;
- (void)_qFetchCachedGroupWithGroupID:(id)a0 completion:(id /* block */)a1;
- (void)_qFetchDataSourceGroupWithGroupID:(id)a0 completion:(id /* block */)a1;
- (id)_qObserverMiddlewares;
- (void)_qUpsertGroupWithParticipants:(id)a0 previousGroup:(id)a1 sharedApplicationData:(id)a2 completion:(id /* block */)a3;
- (void)_validateCachedGroup:(id)a0 isParentOfGroup:(id)a1 completion:(id /* block */)a2;
- (void)createGroupWithParticipants:(id)a0 sharedApplicationData:(id)a1 completion:(id /* block */)a2;
- (void)fetchLatestGroupWithStableID:(id)a0 completion:(id /* block */)a1;
- (void)removeMiddleware:(id)a0;
- (void)updateGroup:(id)a0 withParticipants:(id)a1 sharedApplicationData:(id)a2 completion:(id /* block */)a3;

@end
