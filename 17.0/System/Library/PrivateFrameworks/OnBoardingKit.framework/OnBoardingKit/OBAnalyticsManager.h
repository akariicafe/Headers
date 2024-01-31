@class NSMutableArray;

@interface OBAnalyticsManager : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property BOOL shouldStashMetrics;

+ (id)sharedManager;

- (id)init;
- (void)commit;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (void)addEvent:(id)a0 withPayload:(id)a1;
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)a0;
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)a0;
- (void)logPresentationOfPrivacyUnifiedAbout;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)a0;

@end
