@class MLMultiArray, NSString, NSSet;

@interface HMIFaceQualityFilterModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly) NSString *inputName;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithInput:(id)a0 inputName:(id)a1;

@end
