@class MLMultiArray, NSSet;

@interface backtapOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *model_output;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithModel_output:(id)a0;

@end
