@class NSSet;

@interface CRTextDetectorModelV3Input : NSObject <MLFeatureProvider>

@property (nonatomic) struct __CVBuffer { } *img_input;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithImg_input:(struct __CVBuffer { } *)a0;

@end
