@class NSString, NSArray, VGFaceCaptureOptions;

@interface VGFaceEnrollmentOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VGFaceCaptureOptions *captureOptions;
@property (nonatomic) BOOL useFaceTrackingDictionary;
@property (retain, nonatomic) NSString *cameraImageColorSpaceName;
@property (nonatomic) unsigned long long requiredYawPoses;
@property (nonatomic) unsigned long long requiredPitchPoses;
@property (retain, nonatomic) NSArray *requiredExpressions;
@property (nonatomic) unsigned long long identityFittingOp;
@property (nonatomic) float yawLimit;
@property (nonatomic) float yawSensitivity;
@property (nonatomic) float pitchLimit;
@property (nonatomic) float pitchSensitivity;
@property (nonatomic) BOOL generatePIFu;
@property (nonatomic) BOOL generateBaconPanel;
@property (nonatomic) BOOL applyBaconLighting;
@property (nonatomic) float eyesForwardYawSensitivity;
@property (nonatomic) float eyesForwardPitchSensitivity;
@property (nonatomic) float eyesOpenSensitivity;
@property (nonatomic) float neutralExpressionLowerBound;
@property (nonatomic) float neutralExpressionUpperBound;
@property (nonatomic) float leftMarginHeadRatio;
@property (nonatomic) float rightMarginHeadRatio;
@property (nonatomic) float topMarginHeadRatio;
@property (nonatomic) float bottomMarginHeadRatio;
@property (nonatomic) BOOL ensureEyesForwardOnFrontPose;
@property (nonatomic) BOOL ensureEyesOpenOnFrontPose;
@property (nonatomic) BOOL ensureEyesOpenOnAllPoses;
@property (nonatomic) BOOL ensureAlmostNeutralExpressionOnAllPoses;
@property (nonatomic) BOOL deterministicMode;
@property (retain, nonatomic) NSString *saveDirectory;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setDefaultsWithSuiteName:(id)a0;

@end
