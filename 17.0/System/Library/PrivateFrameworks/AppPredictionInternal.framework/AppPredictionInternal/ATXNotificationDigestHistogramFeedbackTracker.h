@class _ATXAppLaunchCategoricalHistogram, NSString;

@interface ATXNotificationDigestHistogramFeedbackTracker : NSObject <ATXNotificationDigestFeedbackProtocol>

@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *digestFeedbackHistogram;
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *alltimeMarqueeAppearanceHistogram;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (double)alltimeMarqueeAppearancesForBundleId:(id)a0;
- (double)basicNotificationsSentForBundleId:(id)a0;
- (void)decayFeedbackByFactor:(double)a0;
- (id)feedbackDictionaryForBundleId:(id)a0;
- (id)initWithDigestFeedbackHistogram:(id)a0 alltimeMarqueeAppearanceHistogram:(id)a1;
- (void)logBasicNotificationsSentForBundleId:(id)a0 numNotifications:(unsigned long long)a1;
- (void)logMarqueeAppearanceForBundleId:(id)a0;
- (void)logMarqueeEngagementForBundleId:(id)a0;
- (void)logNonMarqueeAppearanceForBundleId:(id)a0;
- (void)logNonMarqueeEngagementForBundleId:(id)a0;
- (void)logTimeSensitiveNotificationsSentForBundleId:(id)a0 numNotifications:(unsigned long long)a1;
- (double)marqueeAppearancesForBundleId:(id)a0;
- (double)marqueeEngagementsForBundleId:(id)a0;
- (double)nonMarqueeAppearancesForBundleId:(id)a0;
- (double)nonMarqueeEngagementsForBundleId:(id)a0;
- (double)timeSensitiveNotificationsSentForBundleId:(id)a0;

@end
