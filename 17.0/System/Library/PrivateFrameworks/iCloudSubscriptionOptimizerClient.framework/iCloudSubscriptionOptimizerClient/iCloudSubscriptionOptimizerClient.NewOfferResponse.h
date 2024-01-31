@class NSString;

@interface iCloudSubscriptionOptimizerClient.NewOfferResponse : ISONewOfferResponse {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ serverError;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)error;
- (BOOL)shouldDisplayOfferNow;
- (id)toContext;

@end
