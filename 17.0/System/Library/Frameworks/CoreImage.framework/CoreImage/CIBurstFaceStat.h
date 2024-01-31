@class NSMutableArray;

@interface CIBurstFaceStat : NSObject <NSCopying>

@property BOOL leftEyeOpen;
@property BOOL rightEyeOpen;
@property BOOL smiling;
@property float leftEyeBlinkScore;
@property float rightEyeBlinkScore;
@property float smileScore;
@property BOOL hasLeftEye;
@property BOOL hasRightEye;
@property BOOL foundByFaceCore;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFaceRect;
@property int faceId;
@property int framesSinceLast;
@property float focusScore;
@property float faceScore;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftEyeRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightEyeRect;
@property int FCRLeftEyeFeaturesOffset;
@property int FCRRightEyeFeaturesOffset;
@property int FCRSmileFeaturesOffset;
@property int FCRBlinkFeaturesSize;
@property int FCRSmileFeaturesSize;
@property NSMutableArray *FCRSmileAndBlinkFeatures;
@property int hwFaceId;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hwFaceRect;
@property float normalizedFocusScore;
@property float normalizedSigma;
@property BOOL hasRollAngle;
@property BOOL hasYawAngle;
@property float rollAngle;
@property float yawAngle;
@property double timestamp;
@property BOOL isSyncedWithImage;
@property BOOL smallFace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFaceStat:(id)a0;

@end
