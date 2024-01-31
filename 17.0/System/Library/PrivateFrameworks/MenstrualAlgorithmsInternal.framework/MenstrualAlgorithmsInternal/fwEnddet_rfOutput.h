@class NSDictionary, NSSet;

@interface fwEnddet_rfOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long classLabel;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithClassLabel:(long long)a0 classProbability:(id)a1;

@end
