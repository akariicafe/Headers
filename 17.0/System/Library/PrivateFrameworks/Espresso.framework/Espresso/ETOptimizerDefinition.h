@class NSDictionary;

@interface ETOptimizerDefinition : NSObject

@property (readonly) long long type;
@property (readonly, nonatomic) NSDictionary *optimizationParameters;

- (void).cxx_destruct;
- (id)initWithOptimizationAlgorithm:(long long)a0 parameters:(id)a1 error:(id *)a2;

@end
