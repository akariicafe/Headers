@class NSString, NSNumber, FCIntroductoryOffer;

@interface FCPurchaseLookupResult : NSObject {
    NSString *_purchaseID;
    NSString *_offerName;
    NSString *_subscriptionPeriodInISO_8601;
    NSString *_subscriptionPriceFormatted;
    NSNumber *_price;
    NSNumber *_appAdamID;
    FCIntroductoryOffer *_introOffer;
}

- (void).cxx_destruct;

@end
