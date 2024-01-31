@class NSString, NSArray, NSDate, NSNumber;

@interface FCBundleSubscriptionLookUpEntry : NSObject

@property (nonatomic) unsigned long long purchaseValidationState;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *bundleChannelIDs;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *servicesBundlePurchaseID;
@property (copy, nonatomic) NSDate *dateOfExpiration;
@property (copy, nonatomic) NSNumber *initialPurchaseTimestamp;
@property (nonatomic) BOOL hasShownRenewalNotice;
@property (nonatomic) BOOL inTrialPeriod;
@property (nonatomic) BOOL isPurchaser;
@property (nonatomic) BOOL isAmplifyUser;
@property (nonatomic) BOOL isPaidBundleViaOfferActivated;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)bundleSubscription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntryID:(id)a0 bundleChannelIDs:(id)a1 bundleChannelIDsVersion:(id)a2 purchaseID:(id)a3 purchaseValidationState:(unsigned long long)a4 dateOfExpiration:(id)a5 hasShownRenewalNotice:(BOOL)a6 inTrialPeriod:(BOOL)a7 isPurchaser:(BOOL)a8 servicesBundlePurchaseID:(id)a9 isAmplifyUser:(BOOL)a10 isPaidBundleViaOfferActivated:(BOOL)a11 initialPurchaseTimestamp:(id)a12;
- (id)initWithEntryID:(id)a0 dictionaryRepresentation:(id)a1;

@end
