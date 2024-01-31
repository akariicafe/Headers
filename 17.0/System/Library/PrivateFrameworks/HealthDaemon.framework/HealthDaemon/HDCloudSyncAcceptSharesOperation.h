@class NSArray, NSDictionary, CKShareParticipant;

@interface HDCloudSyncAcceptSharesOperation : HDCloudSyncOperation

@property (readonly, copy, nonatomic) NSArray *shareURLs;
@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURLs;
@property (readonly, copy, nonatomic) NSArray *acceptedShares;
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 shareURLs:(id)a2 invitationTokensByShareURL:(id)a3;

@end
