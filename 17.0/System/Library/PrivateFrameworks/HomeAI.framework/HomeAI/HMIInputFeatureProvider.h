@class NSString, NSSet;

@interface HMIInputFeatureProvider : NSObject <MLFeatureProvider>

@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) NSString *inputName;
@property (readonly, nonatomic) NSSet *featureNames;

- (void)dealloc;
- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 inputName:(id)a1;

@end
