@class NSArray, CTXPCServiceSubscriptionInfo;

@interface IMCTXPCServiceSubscriptionInfo : NSObject

@property (retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) NSArray *phoneNumbersOfActiveSubscriptions;

- (BOOL)__im_hasMultipleSubscriptions;
- (id)subscriptions;
- (id)__im_preferredSubscriptionContext;
- (long long)__imSlotIDSForPhoneNumber:(id)a0;
- (id)__im_subscriptionContextForForSimID:(id)a0 phoneNumber:(id)a1;
- (id)initWithSubscriptionInfo:(id)a0;
- (id)__im_subscriptionsWithMMSSupport;
- (BOOL)__im_containsPhoneNumber:(id)a0;
- (id)__im_subscriptionContextForSenderIdentity:(id)a0;
- (id)__im_preferredDataSubscriptionContext;
- (id)__im_phoneNumberForSlotID:(long long)a0;
- (id)allSubscriptions;
- (id)__im_subscriptionContextForForSlotID:(long long)a0;
- (id)_senderIdentityManager;
- (id)subscriptionFilterPredicate;
- (id)__im_switchSubscriptionContextFromSubscriptionContext:(id)a0;
- (id)description;
- (id)__im_subscriptionContextForPhoneNumberOrDefault:(id)a0;
- (id)__im_contactPreferredSubscriptionContextForChatHandleIDs:(id)a0;
- (id)__im_subscriptionContextOrDefaultForForSimID:(id)a0 phoneNumber:(id)a1;
- (id)__im_subscriptionContextForForSimID:(id)a0;
- (BOOL)__im_onlyHasActiveSlots;
- (id)__im_switchSubscriptionContextFromPhoneNumber:(id)a0 simID:(id)a1;
- (void).cxx_destruct;
- (id)__im_phoneNumberForSlotIDOrDefault:(long long)a0;
- (id)__im_subscriptionContextForPhoneNumber:(id)a0;
- (id)preferredOrDefaultSubscriptionContext;
- (id)__im_subscriptionContextOrDefaultForForSlotID:(long long)a0;
- (id)__im_labelForPhoneNumber:(id)a0 simID:(id)a1;
- (id)__imSIMIDForSubscriptionSlot:(long long)a0;

@end
