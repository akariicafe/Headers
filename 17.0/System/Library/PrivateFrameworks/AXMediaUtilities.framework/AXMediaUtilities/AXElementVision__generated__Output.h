@class MLMultiArray, NSSet;

@interface AXElementVision__generated__Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *confidence;
@property (retain, nonatomic) MLMultiArray *coordinates;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithConfidence:(id)a0 coordinates:(id)a1;

@end
