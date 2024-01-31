@class ATXNotificationDigestRankingConstants;
@protocol ATXNotificationDigestFeedbackProtocol;

@interface ATXNotificationDigestRanker : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> _digestFeedback;
    ATXNotificationDigestRankingConstants *_c;
}

- (id)init;
- (void).cxx_destruct;
- (id)appsForNotificationGroups:(id)a0;
- (id)chooseAppsForMarquee:(id)a0;
- (id)createDigestForNotificationStacks:(id)a0 outError:(id *)a1;
- (id)initWithDigestFeedback:(id)a0;
- (id)sampleAppsForMarquee:(id)a0 numToSample:(unsigned long long)a1 hasAutomaticMarqueeBeenUsedFlag:(BOOL *)a2;

@end
