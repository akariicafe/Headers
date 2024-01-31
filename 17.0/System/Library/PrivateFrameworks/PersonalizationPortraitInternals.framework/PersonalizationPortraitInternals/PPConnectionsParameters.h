@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (double)linguisticTriggerExpirySeconds;
- (long long)appSwitcherPredictionExpiry;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (double)foundInAppsSourceExpirySeconds;
- (long long)locationAppPredictionOverallLaunchFactor;
- (long long)expirySeconds;
- (double)userActivityExpirySeconds;
- (unsigned long long)userActivityBatchSize;
- (double)foundInAppsSourceLookBackSeconds;
- (double)namedEntitySourceExpirySeconds;
- (id)donationAllowedApps;
- (unsigned long long)quickTypePredictionLimit;
- (id)donationAllowedWebsites;
- (long long)locationAppPredictionInstallHalflife;
- (void).cxx_destruct;
- (double)pasteboardItemExpirySeconds;
- (id)donationBlockedApps;
- (double)userActivityCandidateScore;
- (long long)locationAppPredictionInstallMaxScore;
- (id)locationPredictionBlockedApps;
- (id)donationBlockedWebsites;
- (double)calendarEventLocationExpirySeconds;
- (double)locationAppLastUseTimeoutSeconds;
- (BOOL)shouldUseAllowedApps;
- (BOOL)shouldUseAllowedWebsite;
- (double)namedEntitySourceLookBackSeconds;

@end
