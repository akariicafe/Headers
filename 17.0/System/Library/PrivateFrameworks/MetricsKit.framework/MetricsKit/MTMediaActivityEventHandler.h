@protocol MTMediaActivityEventHandlerDelegate;

@interface MTMediaActivityEventHandler : MTEventHandler

@property (weak, nonatomic) id<MTMediaActivityEventHandlerDelegate> delegate;

- (id)knownFields;
- (void)didCreateMetricsData:(id)a0;
- (id)eventVersion:(id)a0;
- (id)metricsDataForStartActionWithPosition:(unsigned long long)a0 overallPosition:(unsigned long long)a1 type:(id)a2 reason:(id)a3 eventData:(id)a4;
- (id)metricsDataForStopActionWithPosition:(unsigned long long)a0 overallPosition:(unsigned long long)a1 type:(id)a2 reason:(id)a3 startMetricsData:(id)a4 eventData:(id)a5;

@end
