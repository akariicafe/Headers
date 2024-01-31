@class TCMPSInstanceNormalizationDescriptor, TCMPSUpsamplingDescriptor, TCMPSConvolutionDescriptor;

@interface TCMPSDecodingDescriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv;
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst;
@property (retain, nonatomic) TCMPSUpsamplingDescriptor *upsample;

- (id)init;
- (void).cxx_destruct;

@end
