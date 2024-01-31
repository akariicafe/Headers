@class NSString, NSNumber, NSOrderedSet;

@interface FCBundleSubscription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundlePurchaseID;
@property (copy, nonatomic) NSString *servicesBundlePurchaseID;
@property (nonatomic) unsigned long long unprotectedSubscriptionState;
@property (nonatomic) BOOL isPurchaser;
@property (nonatomic) BOOL isAmplifyUser;
@property (nonatomic) BOOL isPaidBundleViaOfferActivated;
@property (copy, nonatomic) NSNumber *initialPurchaseTimestamp;
@property (copy, nonatomic) NSOrderedSet *bundleChannelIDs;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL isServicesBundleUser;
@property (readonly, nonatomic) unsigned long long subscriptionState;

+ (id)subscriptionWithSubscriptionState:(unsigned long long)a0 bundleChannelIDs:(id)a1;

- (unsigned long long)hash;
- (BOOL)containsItem:(id)a0;
- (id)initWithBundlePurchaseID:(id)a0 bundleChannelIDs:(id)a1 bundleChannelIDsVersion:(id)a2 subscriptionState:(unsigned long long)a3 isPurchaser:(BOOL)a4 servicesBundlePurchaseID:(id)a5 isAmplifyUser:(BOOL)a6 initialPurchaseTimestamp:(id)a7 isPaidBundleViaOfferActivated:(BOOL)a8;
- (void)encodeWithCoder:(id)a0;
- (BOOL)containsHeadline:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)containsTagID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundlePurchaseID:(id)a0 bundleChannelIDs:(id)a1 bundleChannelIDsVersion:(id)a2 inTrialPeriod:(BOOL)a3 isPurchaser:(BOOL)a4 servicesBundlePurchaseID:(id)a5 isAmplifyUser:(BOOL)a6 initialPurchaseTimestamp:(id)a7 isPaidBundleViaOfferActivated:(BOOL)a8;

@end
