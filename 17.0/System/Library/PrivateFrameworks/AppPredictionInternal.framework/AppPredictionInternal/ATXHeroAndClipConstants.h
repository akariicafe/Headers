@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (double)appClipsPerAppClipEngagementThreshold;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (long long)appClipsLaunchErrorCode;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (id)appClipsNotificationCategoryIdentifier;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (double)heroAppPredictionExpirationInterval;
- (double)appClipsHighConfidenceScoreThreshold;
- (double)heroAppEngagementThreshold;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (double)appClipsPerAppClipMinRejects;
- (int)heroAppIndexNotSet;
- (double)heroAppTileMaxErrorDistance;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (id)appClipsNotificationId;
- (id)appClipsErrorDomain;
- (double)heroAppMinimumRejects;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (double)heroAppWorstCaseLocationAccuracy;
- (id)defaultHeroPOICategory;
- (void).cxx_destruct;
- (double)appClipsMediumConfidenceScoreThreshold;
- (id)heroAppPredictionsKey;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (double)heroAppMinRefreshInterval;
- (unsigned long long)appShadowLogSamplesPerDay;
- (double)appClipsOverallMinRejects;
- (long long)appClipsDecodeErrorCode;
- (double)appClipsOverallEngagementThreshold;
- (id)appClipsNotificationLockscreenIdentifier;
- (id)appClipsModelVersion;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;

@end
