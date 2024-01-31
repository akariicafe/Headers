@interface AWDAgent : NSObject

+ (id)defaultInstance;

- (void)postMetric:(id)a0 withIdentifier:(unsigned int)a1;
- (BOOL)shouldSendMetric:(unsigned int)a0;
- (id)init;
- (void)bulkPostMetrics:(id)a0 withIdentifier:(unsigned int)a1;
- (void)dealloc;
- (void)_postMetricForSignificantEvent:(int)a0 orEventName:(id)a1 errorContext:(int)a2 error:(id)a3 status:(int)a4;
- (void)postMetricForSignificantEvent:(int)a0 errorContext:(int)a1 error:(id)a2 status:(int)a3;
- (void)postMetricForSignificantEventWithName:(id)a0 errorContext:(int)a1 error:(id)a2 status:(int)a3;
- (void)_handleQuery:(unsigned int)a0;
- (BOOL)overridePostMetricConfig;

@end
