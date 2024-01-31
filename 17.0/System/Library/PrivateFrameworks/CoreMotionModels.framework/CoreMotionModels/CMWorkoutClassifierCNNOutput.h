@class MLMultiArray, NSSet;

@interface CMWorkoutClassifierCNNOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *softmax__0;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithSoftmax__0:(id)a0;

@end
