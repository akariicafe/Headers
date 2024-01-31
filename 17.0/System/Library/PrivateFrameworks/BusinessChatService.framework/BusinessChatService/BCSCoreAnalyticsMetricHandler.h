@class NSString;

@interface BCSCoreAnalyticsMetricHandler : NSObject <BCSMetricHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSubmittedMetric:(id)a0;

@end
