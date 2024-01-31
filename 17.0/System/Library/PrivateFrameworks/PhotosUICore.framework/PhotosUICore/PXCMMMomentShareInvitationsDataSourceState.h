@class NSDictionary, PHFetchResult;

@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <NSCopying>

@property (readonly, nonatomic) PHFetchResult *momentShares;
@property (readonly, nonatomic) NSDictionary *invitationsByMomentShareObjectID;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMomentShares:(id)a0 invitationsByMomentShareObjectID:(id)a1;
- (id)stateUpdatedWithChange:(id)a0 changeDetails:(id *)a1;

@end
