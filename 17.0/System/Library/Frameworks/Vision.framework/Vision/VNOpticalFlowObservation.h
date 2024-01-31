@class VNImageSignature, LKTOpticalFlow;

@interface VNOpticalFlowObservation : VNPixelBufferObservation

@property (retain, nonatomic) VNImageSignature *targetImageSignature;
@property (retain, nonatomic) LKTOpticalFlow *opticalFlow;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void).cxx_destruct;

@end
