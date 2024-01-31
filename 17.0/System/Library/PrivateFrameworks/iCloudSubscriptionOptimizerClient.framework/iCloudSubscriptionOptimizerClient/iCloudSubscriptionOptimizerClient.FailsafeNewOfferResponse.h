@class NSString;

@interface iCloudSubscriptionOptimizerClient.FailsafeNewOfferResponse : ISONewOfferResponse

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)error;
- (BOOL)shouldDisplayOfferNow;
- (id)toContext;

@end
