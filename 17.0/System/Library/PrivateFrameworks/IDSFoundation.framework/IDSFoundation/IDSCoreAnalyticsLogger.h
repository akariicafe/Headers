@class NSString;

@interface IDSCoreAnalyticsLogger : NSObject <CUTMetricLogger>

@property (readonly, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLogger;

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (void)logMetric:(id)a0;

@end
