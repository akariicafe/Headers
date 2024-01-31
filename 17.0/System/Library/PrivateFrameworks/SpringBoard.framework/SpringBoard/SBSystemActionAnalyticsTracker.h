@class NSString, NSDate, SBSystemActionSuppressionStatus;

@interface SBSystemActionAnalyticsTracker : NSObject {
    SBSystemActionSuppressionStatus *_suppressionStatus;
    NSString *_lastQueriedActionIdentifier;
    NSDate *_lastQueryTimestamp;
}

- (void).cxx_destruct;

@end
