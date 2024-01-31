@class NSSet, FCBundleSubscription;

@interface _TtC10StocksCoreP33_6F15235305946077A82EB95D8E9A724719NewsUserProfileShim : NSObject <FCPurchaseProviderType, FCBundleSubscriptionProviderType> {
    void /* unknown type, empty encoding */ userProfile;
}

@property (nonatomic, readonly) NSSet *purchasedTagIDs;
@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForUseWithCompletion:(id /* block */)a0;

@end
