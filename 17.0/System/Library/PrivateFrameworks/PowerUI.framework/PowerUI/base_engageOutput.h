@class NSDictionary, NSSet;

@interface base_engageOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long engage;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithEngage:(long long)a0 classProbability:(id)a1;

@end
