@class MLMultiArray, NSSet;

@interface CMWorkoutClassifierCNNInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *X__0;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithX__0:(id)a0;

@end
