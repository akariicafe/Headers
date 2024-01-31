@class NSString, NSArray;

@interface FCPaidBundleViaOfferConfig : NSObject

@property (nonatomic) long long iconBadgeQuiescenceInterval;
@property (nonatomic) long long iconBadgeMaxNumberOfPresentations;
@property (nonatomic) long long localNotificationQuiescenceInterval;
@property (nonatomic) long long localNotificationMaxNumberOfPresentations;
@property (copy, nonatomic) NSString *localNotificationTitle;
@property (copy, nonatomic) NSString *localNotificationSubtitle;
@property (copy, nonatomic) NSString *localNotificationBody;
@property (copy, nonatomic) NSString *localNotificationURL;
@property (nonatomic) long long localNotificationDelay;
@property (nonatomic) long long upsellQuiescenceInterval;
@property (nonatomic) long long upsellMaxNumberOfPresentations;
@property (retain, nonatomic) NSArray *vendorAdHocOfferIds;
@property (readonly, nonatomic) long long upsellBestOfferRefreshQuiescenceInterval;
@property (readonly, nonatomic) BOOL paywallsEnabled;
@property (readonly, nonatomic) BOOL subscriptionsDeeplinkEnabled;
@property (readonly, nonatomic) BOOL mastheadBannerEnabled;
@property (readonly, nonatomic) BOOL iconBadgeEnabled;
@property (readonly, nonatomic) BOOL iconBadgeMercuryEnabled;
@property (readonly, nonatomic) BOOL localNotificationEnabled;
@property (readonly, nonatomic) BOOL upsellEnabled;
@property (readonly, nonatomic) BOOL appLaunchUpsellEnabled;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
