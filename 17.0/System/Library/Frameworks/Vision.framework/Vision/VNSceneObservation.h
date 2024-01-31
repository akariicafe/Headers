@class NSArray, NSString;

@interface VNSceneObservation : VNFeaturePrintObservation

@property (readonly, nonatomic) NSArray *sceneprints;
@property (readonly, copy, nonatomic) NSString *sceneprintVersion;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)sceneprintCurrentVersion;
+ (id)observationWithSceneprints:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)elementType;
- (id)initWithCoder:(id)a0;
- (unsigned long long)elementCount;
- (id)VNCoreMLTransformerSceneprintsAndReturnError:(id *)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 sceneprints:(id)a1;
- (id)initWithRequestRevision:(unsigned long long)a0 sceneprints:(id)a1;
- (id)vn_cloneObject;

@end
