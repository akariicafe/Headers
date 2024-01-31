@class MLMultiArray, NSSet;

@interface CRFormDetectorModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *array;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithMLMultiArray:(id)a0;

@end
