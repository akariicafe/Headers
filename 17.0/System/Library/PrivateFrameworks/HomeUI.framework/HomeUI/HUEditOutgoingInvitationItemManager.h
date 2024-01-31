@class HMOutgoingHomeInvitation, NSString, HFStaticItem, HMHome;

@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager>

@property (retain, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFStaticItem *inviteAgainItem;
@property (retain, nonatomic) HFStaticItem *removeItem;
@property (readonly, nonatomic) HMOutgoingHomeInvitation *outgoingInvitation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_removeTitleForInvitationState:(long long)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1 home:(id)a2;

@end
