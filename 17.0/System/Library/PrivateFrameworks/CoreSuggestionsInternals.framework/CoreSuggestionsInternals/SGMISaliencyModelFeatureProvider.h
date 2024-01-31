@class MLMultiArray, NSSet;

@interface SGMISaliencyModelFeatureProvider : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *data;
@property (retain, nonatomic) NSSet *featureNames;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;

@end
