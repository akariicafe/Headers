@class NSString;

@interface IDSAWDLogger : NSObject <CUTMetricLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void)logMetric:(id)a0;

@end
