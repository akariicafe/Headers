@class VNTorsoprint;

@interface VNHumanObservation : VNDetectedObjectObservation <VNEntityIdentificationModelObservation>

@property (readonly, nonatomic) VNTorsoprint *torsoprint;
@property (readonly, nonatomic) BOOL upperBodyOnly;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)a0 error:(id *)a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 upperBodyOnly:(BOOL)a2 confidence:(float)a3;
- (void)setTorsoprint:(id)a0;
- (id)vn_cloneObject;

@end
