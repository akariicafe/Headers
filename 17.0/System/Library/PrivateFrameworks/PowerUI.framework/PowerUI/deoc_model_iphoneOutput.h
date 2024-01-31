@class NSDictionary, NSSet;

@interface deoc_model_iphoneOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long next_drain_is_significant;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithNext_drain_is_significant:(long long)a0 classProbability:(id)a1;

@end
