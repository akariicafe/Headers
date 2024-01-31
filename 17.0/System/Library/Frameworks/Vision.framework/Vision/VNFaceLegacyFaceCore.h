@class NSDictionary;

@interface VNFaceLegacyFaceCore : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long profile;
@property (readonly, nonatomic) double faceSize;
@property (readonly, nonatomic) double faceAngle;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } faceCenter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceBoundingBox;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } leftEye;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } rightEye;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } mouth;
@property (readonly, nonatomic) long long trackID;
@property (readonly, nonatomic) unsigned long long trackDuration;
@property (readonly, nonatomic) NSDictionary *features;
@property (readonly, nonatomic) unsigned long long requestRevision;

+ (void)_setFaceExpressionFeatureScoreIfDetected:(id)a0 features:(id)a1 detectionKey:(id)a2 scoreKey:(id)a3 featureKey:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFace:(id)a0;

@end
