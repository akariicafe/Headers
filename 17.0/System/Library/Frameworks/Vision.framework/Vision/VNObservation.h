@class NSUUID, NSPointerArray, VNRequestSpecifier;

@interface VNObservation : NSObject <VNEntityIdentificationModelObservation, VNCoreMLTransformerSceneprintsProviding, VNCoreMLTransformerDetectionprintProviding, VNObjectCloning, VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=setUUID:) NSUUID *uuid;
@property (nonatomic) float confidence;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) NSPointerArray *requestImageBuffers;
@property (retain, nonatomic) NSPointerArray *requestImageBuffersCacheKeys;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) unsigned long long requestRevision;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)defaultOriginatingRequestSpecifierForRevision:(unsigned long long)a0;

- (id)debugQuickLookObject;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)VNCoreMLTransformerDetectionprintAndReturnError:(id *)a0;
- (id)VNCoreMLTransformerSceneprintsAndReturnError:(id *)a0;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)a0 error:(id *)a1;
- (id)getDataDetectorResults:(id *)a0;
- (id)getDataDetectorResultsForString:(id)a0 error:(id *)a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0;
- (id)initWithRequestRevision:(unsigned long long)a0;
- (id)observationWithOriginatingRequestSpecifier:(id)a0;
- (id)vn_cloneObject;

@end
