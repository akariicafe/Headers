@class NSString;

@interface VGEarCaptureOptions : NSObject

@property (nonatomic) float earPresenceThreshold;
@property (nonatomic) float earOcclusionThreshold;
@property (nonatomic) float bboxVisibilityThreshold;
@property (nonatomic) float landmarkVisibilityThreshold;
@property (nonatomic) float percentileDetectionConfidence;
@property (nonatomic) unsigned int imageWidth;
@property (nonatomic) unsigned int imageHeight;
@property (nonatomic) unsigned long long yawCount;
@property (nonatomic) unsigned long long pitchCount;
@property (nonatomic) float yawLimit;
@property (nonatomic) float yawSensitivity;
@property (nonatomic) float pitchLimit;
@property (nonatomic) float pitchSensitivity;
@property (nonatomic) BOOL writeDebugData;
@property (retain, nonatomic) NSString *debugDataPath;
@property (nonatomic) BOOL useMotionBlurFilter;
@property (nonatomic) float motionBlurFilterThreshold;

+ (unsigned long long)defaultYawCount;
+ (float)defaultYawLimit;
+ (float)defaultAngleSensitivity;
+ (float)defaultBboxVisibilityThreshold;
+ (float)defaultEarOcclusionThreshold;
+ (float)defaultEarPresenceThreshold;
+ (unsigned int)defaultImageHeight;
+ (unsigned int)defaultImageWidth;
+ (float)defaultLandmarkVisibilityThreshold;
+ (float)defaultMotionBlurFilterThreshold;
+ (float)defaultPercentileDetectionConfidence;
+ (id)defaultPitchAngles;
+ (unsigned long long)defaultPitchCount;
+ (float)defaultPitchLimit;
+ (BOOL)defaultUseMotionBlurFilter;
+ (id)defaultYawAngles;
+ (id)getAnglesListWithCount:(unsigned int)a0 limit:(float)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
