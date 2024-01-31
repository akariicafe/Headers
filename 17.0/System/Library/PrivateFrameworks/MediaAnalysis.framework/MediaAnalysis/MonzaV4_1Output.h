@class MLMultiArray, NSSet;

@interface MonzaV4_1Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *angle;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithAngle:(id)a0;

@end
