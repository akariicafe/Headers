@class NSString;

@interface _MLCGPUConvolutionTransposePadding : NSObject <MPSNNPadding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long topAmount;
@property (readonly, nonatomic) unsigned long long bottomAmount;
@property (readonly, nonatomic) unsigned long long leftAmount;
@property (readonly, nonatomic) unsigned long long rightAmount;
@property (readonly, nonatomic) unsigned long long outputPaddingX;
@property (readonly, nonatomic) unsigned long long outputPaddingY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convolutionTransposeZeroPaddingWithTopAmount:(unsigned long long)a0 bottomAmount:(unsigned long long)a1 leftAmount:(unsigned long long)a2 rightAmount:(unsigned long long)a3 outputPaddingX:(unsigned long long)a4 outputPaddingY:(unsigned long long)a5;

- (void)encodeWithCoder:(id)a0;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;
- (id)initWithCoder:(id)a0;
- (unsigned long long)paddingMethod;
- (id)initWithTopAmount:(unsigned long long)a0 bottomAmount:(unsigned long long)a1 leftAmount:(unsigned long long)a2 rightAmount:(unsigned long long)a3 outputPaddingX:(unsigned long long)a4 outputPaddingY:(unsigned long long)a5;

@end
