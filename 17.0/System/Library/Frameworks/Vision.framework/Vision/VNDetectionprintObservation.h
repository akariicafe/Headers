@class VNDetectionprint;

@interface VNDetectionprintObservation : VNObservation

@property (readonly, copy) VNDetectionprint *detectionprint;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)VNCoreMLTransformerDetectionprintAndReturnError:(id *)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 detectionprint:(id)a1;
- (id)vn_cloneObject;

@end
