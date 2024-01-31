@class NSString, NSDictionary;

@interface VUIActionBundleOffer : VUIAction

@property (retain, nonatomic) NSString *offerURLString;
@property (retain, nonatomic) NSString *offerDomain;
@property (retain, nonatomic) NSString *notificationTitle;
@property (retain, nonatomic) NSString *notificationBundleTitle;
@property (retain, nonatomic) NSString *notificationBody;
@property (nonatomic) BOOL isMultiOfferDynamicVC;
@property (retain, nonatomic) NSString *secondaryOfferNotificationTitle;
@property (retain, nonatomic) NSString *secondaryOfferNotificationBody;
@property (retain, nonatomic) NSDictionary *offerMetrics;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
