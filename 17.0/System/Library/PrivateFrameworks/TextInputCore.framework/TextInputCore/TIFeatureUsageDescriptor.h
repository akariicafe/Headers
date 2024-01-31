@class NSString;

@interface TIFeatureUsageDescriptor : TINumericValueDescriptor

@property (readonly, nonatomic) NSString *discoveryCounter;
@property (readonly, nonatomic) long long discoveryThreshold;
@property (readonly, nonatomic) NSString *configString;

+ (id)featureUsageDescriptorWithMetricName:(id)a0 discoveryCounter:(id)a1 discoveryThreshold:(long long)a2 configString:(id)a3 calculationExpression:(id)a4 calculationPrecondition:(id)a5 calculationDefaultValue:(id)a6 calculationDependencies:(id)a7 bucketThresholds:(id)a8;

- (void).cxx_destruct;
- (id)initWithMetricName:(id)a0 discoveryCounter:(id)a1 discoveryThreshold:(long long)a2 configString:(id)a3 calculationExpression:(id)a4 calculationPrecondition:(id)a5 calculationDefaultValue:(id)a6 calculationDependencies:(id)a7 bucketThresholds:(id)a8;

@end
