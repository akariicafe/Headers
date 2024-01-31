@class NSString, PETGoalConversionEventTracker;

@interface SBIconLaunchMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_trackerV1;
    PETGoalConversionEventTracker *_trackerV2;
    BOOL _isFolder;
    NSString *_iconLocationValue;
    unsigned long long _layoutLocation;
}

- (id)init;
- (void)_processAndReportTappedEventPayload:(id)a0;
- (void).cxx_destruct;
- (void)_processAndReportLaunchedEventPayload:(id)a0;

@end
