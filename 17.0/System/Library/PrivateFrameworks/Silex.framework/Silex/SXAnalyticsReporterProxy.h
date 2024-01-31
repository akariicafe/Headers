@class NSString;
@protocol SXAnalyticsReporting;

@interface SXAnalyticsReporterProxy : NSObject <SXAnalyticsReporting>

@property (readonly, weak, nonatomic) id<SXAnalyticsReporting> analyticsReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reportEvent:(id)a0;
- (id)initWithAnalyticsReporter:(id)a0;

@end
