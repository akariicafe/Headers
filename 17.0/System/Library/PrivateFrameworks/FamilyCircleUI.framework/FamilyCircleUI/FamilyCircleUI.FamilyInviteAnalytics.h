@class _TtC14FamilyCircleUI21FamilyInviteAnalytics;

@interface FamilyCircleUI.FamilyInviteAnalytics : NSObject

@property (class, nonatomic, readonly) _TtC14FamilyCircleUI21FamilyInviteAnalytics *shared;

- (id)init;
- (void).cxx_destruct;
- (void)sendFamilyInviteInteractionEventWithAction:(id)a0 inviteState:(id)a1 isReceiver:(BOOL)a2;
- (void)sendFamilyInviteStatusUpdateEventWithUpdateStatus:(id)a0 success:(BOOL)a1;
- (void)sendFamilySuggestionsEventWithFamilySuggestionsCount:(long long)a0 hasBoostedContacts:(BOOL)a1;
- (void)sendOtherContactInvitedEventWithInviteTransport:(id)a0 inviteCompletionStatus:(long long)a1;
- (void)sendSuggestedContactInvitedEventWithInviteCompletionStatus:(long long)a0;
- (void)sendTapInviteOnSuggestedContactEvent;
- (void)sendTapInviteOthersEvent;

@end
