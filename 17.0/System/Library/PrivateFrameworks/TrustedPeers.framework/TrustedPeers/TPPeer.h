@class TPPeerPermanentInfo, NSString, NSSet, TPPeerStableInfo, TPPeerDynamicInfo;

@interface TPPeer : NSObject

@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) TPPeerPermanentInfo *permanentInfo;
@property (readonly, nonatomic) TPPeerStableInfo *stableInfo;
@property (readonly, nonatomic) TPPeerDynamicInfo *dynamicInfo;
@property (readonly, nonatomic) NSSet *trustedPeerIDs;

- (id)initWithPermanentInfo:(id)a0 stableInfo:(id)a1 dynamicInfo:(id)a2;
- (id)peerWithUpdatedStableInfo:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithPermanentInfo:(id)a0;
- (void).cxx_destruct;
- (id)peerWithUpdatedDynamicInfo:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
