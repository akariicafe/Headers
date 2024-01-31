@class NSString, NSDictionary, AMSBuyParams, NSArray, NSNumber, NSURL;

@interface AMSMarketingItemAction : NSObject

@property (retain, nonatomic) NSDictionary *rawValues;
@property (readonly, nonatomic) AMSBuyParams *buyParams;
@property (readonly, nonatomic) NSString *callToActionLabel;
@property (readonly, nonatomic) NSString *disclaimerText;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) BOOL isFamily;
@property (readonly, nonatomic) BOOL isRecommended;
@property (readonly, nonatomic) NSString *offerID;
@property (readonly, nonatomic) NSNumber *price;
@property (readonly, nonatomic) NSString *priceForDisplay;
@property (readonly, nonatomic) NSNumber *priceDiff;
@property (readonly, nonatomic) NSString *priceDiffForDisplay;
@property (readonly, nonatomic) NSString *valuePropDetail;
@property (readonly, nonatomic) NSString *valuePropInfo;
@property (readonly, nonatomic) NSArray *serviceComponents;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSURL *url;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)priceFormatted;
- (id)_serviceNames;
- (id)inAppID;
- (id)freeTrialPeriod;
- (id)introOfferPrice;
- (id)_serviceComponentsFromMap:(id)a0 withNames:(id)a1;
- (id)_servicesData;
- (id)dismissLabel;
- (id)introOfferPeriod;
- (id)introOfferPriceForDisplay;
- (BOOL)isYearly;
- (id)priceString;
- (id)recurringSubscriptionPeriod;

@end
