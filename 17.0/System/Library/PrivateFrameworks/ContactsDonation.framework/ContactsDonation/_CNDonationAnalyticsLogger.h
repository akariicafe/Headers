@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willStartAnalysis;
- (id)init;
- (void)analysisServiceCriteria:(id)a0;
- (void)analysisServiceCheckingIn;
- (void)didSkipDuplicateAnalysis:(id)a0;
- (void)didReportAnalytics;
- (void).cxx_destruct;
- (void)noAnalyzerAvailable;
- (void)willReportAnalytics;
- (void)didPerformAnalysis;

@end
