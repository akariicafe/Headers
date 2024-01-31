@class MLMultiArray, NSSet;

@interface backtapInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *model_input;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithModel_input:(id)a0;

@end
