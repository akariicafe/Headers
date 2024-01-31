@class FCPurchaseController, NSSet, NSString, FCPrivateChannelMembershipController;

@interface FCPurchaseProvider : NSObject <FCPurchaseProviderType> {
    FCPurchaseController *_purchaseController;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
