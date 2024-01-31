@class NSArray, NSString;

@interface VNSmartCamObservation : VNObservation

@property (copy, nonatomic) NSArray *smartCamprints;
@property (readonly, copy, nonatomic) NSString *smartCamprintVersion;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)observationWithSmartCamprints:(id)a0;
+ (id)smartCamprintCurrentVersion;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 smartCamprints:(id)a1;
- (id)initWithRequestRevision:(unsigned long long)a0 smartCamprints:(id)a1;
- (id)vn_cloneObject;

@end
