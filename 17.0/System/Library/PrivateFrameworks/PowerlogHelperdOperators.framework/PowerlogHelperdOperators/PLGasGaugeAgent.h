@class PLIOKitOperatorComposition;

@interface PLGasGaugeAgent : PLAgent

@property (retain, nonatomic) PLIOKitOperatorComposition *ggComposition;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionGasGaugePower;

- (id)init;
- (void)dealloc;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventPointMetricMonitorInstantKeys;

@end
