@class NSString;

@interface TCMPSConvolutionPadding : NSObject <MPSNNPadding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long paddingWidth;
@property (nonatomic) unsigned long long paddingHeight;
@property (nonatomic) unsigned long long strideWidth;
@property (nonatomic) unsigned long long strideHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 forKernel:(id)a2 suggestedDescriptor:(id)a3;
- (id)initWithCoder:(id)a0;
- (unsigned long long)paddingMethod;
- (id)initWithParams:(unsigned long long)a0 paddingHeight:(unsigned long long)a1 strideWidth:(unsigned long long)a2 strideHeight:(unsigned long long)a3;

@end
