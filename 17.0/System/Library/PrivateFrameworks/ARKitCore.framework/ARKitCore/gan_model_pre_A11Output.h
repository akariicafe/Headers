@class MLMultiArray, NSSet;

@interface gan_model_pre_A11Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *output;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithOutput:(id)a0;

@end
