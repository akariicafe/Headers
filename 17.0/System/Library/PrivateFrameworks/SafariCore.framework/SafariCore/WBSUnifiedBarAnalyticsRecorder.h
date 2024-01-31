@protocol WBSUnifiedBarAnalyticsRecorderDelegate;

@interface WBSUnifiedBarAnalyticsRecorder : NSObject

@property (weak, nonatomic) id<WBSUnifiedBarAnalyticsRecorderDelegate> delegate;

- (void).cxx_destruct;
- (void)schedulePeriodicReport;
- (void)_reportAnalytics;

@end
