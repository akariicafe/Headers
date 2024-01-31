@class NSString, NSNumber, NSDate;

@interface FCSubscriptionEntitlement : NSObject

@property (readonly, nonatomic) NSString *servicesBundleAdamID;
@property (readonly, nonatomic) NSNumber *appAdamID;
@property (readonly, nonatomic) NSString *chargeCurrencyCode;
@property (readonly, nonatomic) NSNumber *inAppAdamID;
@property (readonly, nonatomic, getter=isNewsAppPurchase) BOOL newsAppPurchase;
@property (readonly, nonatomic) BOOL isTrialPeriod;
@property (readonly, nonatomic) BOOL isPurchaser;
@property (readonly, nonatomic) BOOL isAmplifyUser;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSNumber *initialPurchaseTimestamp;
@property (readonly, nonatomic) NSNumber *serviceBeginsTimestamp;
@property (readonly, nonatomic) NSString *vendorAdHocOfferID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithASDEntitlement:(id)a0;
- (id)initWithAppAdamID:(id)a0 inAppAdamID:(id)a1 chargeCurrencyCode:(id)a2 newsAppPurchase:(BOOL)a3 isTrialPeriod:(BOOL)a4 isPurchaser:(BOOL)a5 servicesBundleAdamID:(id)a6 isAmplifyUser:(BOOL)a7 startDate:(id)a8 expiryDate:(id)a9 initialPurchaseTimestamp:(id)a10 serviceBeginsTimestamp:(id)a11 vendorAdHocOfferID:(id)a12;

@end
