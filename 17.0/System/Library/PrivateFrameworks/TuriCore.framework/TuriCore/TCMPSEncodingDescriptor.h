@class TCMPSInstanceNormalizationDescriptor, TCMPSConvolutionDescriptor;

@interface TCMPSEncodingDescriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv;
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst;

- (id)init;
- (void).cxx_destruct;

@end
