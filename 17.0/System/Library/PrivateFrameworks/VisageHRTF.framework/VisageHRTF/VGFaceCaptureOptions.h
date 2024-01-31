@class NSArray, NSString;

@interface VGFaceCaptureOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requiredYawPoses;
@property (nonatomic) unsigned long long requiredPitchPoses;
@property (retain, nonatomic) NSArray *requiredExpressions;
@property (nonatomic) float yawLimit;
@property (nonatomic) float yawSensitivity;
@property (nonatomic) float pitchLimit;
@property (nonatomic) float pitchSensitivity;
@property (nonatomic) float eyesForwardYawSensitivity;
@property (nonatomic) float eyesForwardPitchSensitivity;
@property (nonatomic) float eyesOpenSensitivity;
@property (nonatomic) float neutralExpressionLowerBound;
@property (nonatomic) float neutralExpressionUpperBound;
@property (nonatomic) float leftMarginHeadRatio;
@property (nonatomic) float rightMarginHeadRatio;
@property (nonatomic) float topMarginHeadRatio;
@property (nonatomic) float bottomMarginHeadRatio;
@property (nonatomic) BOOL writeDebugData;
@property (retain, nonatomic) NSString *debugDataPath;
@property (nonatomic) BOOL ensureEyesForwardOnFrontPose;
@property (nonatomic) BOOL ensureEyesOpenOnFrontPose;
@property (nonatomic) BOOL ensureEyesOpenOnAllPoses;
@property (nonatomic) BOOL ensureAlmostNeutralExpressionOnAllPoses;
@property (nonatomic) BOOL useFaceTrackingDictionary;
@property (retain, nonatomic) NSString *cameraImageColorSpaceName;

+ (float)defaultYawLimit;
+ (float)defaultAngleSensitivity;
+ (float)defaultEyesOpenSensitivity;
+ (float)defaultNeutralExpressionLowerBound;
+ (float)defaultNeutralExpressionUpperBound;
+ (float)defaultPitchLimit;
+ (unsigned long long)defaultRequiredPitchPoses;
+ (unsigned long long)defaultRequiredYawPoses;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSuiteName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDefaultsWithSuiteName:(id)a0;

@end
