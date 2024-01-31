@class CMContinuityCaptureStreamFormat, NSUUID, NSDictionary, NSString;

@interface CMContinuityCaptureConfiguration : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSDictionary *_centerStageRectOfInterest;
    NSString *_centerStageRectOfInterestStr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long entity;
@property (retain, nonatomic) NSUUID *sessionID;
@property unsigned long long generationID;
@property BOOL portraitEffectEnabled;
@property BOOL centerStageEnabled;
@property (copy) NSDictionary *centerStageRectOfInterest;
@property long long centerStageFramingMode;
@property long long forcefulCenterStageEnablementType;
@property (readonly, getter=isCenterStageForcefullyEnabled) BOOL centerStageForcefullyEnabled;
@property BOOL faceDetectionEnabled;
@property BOOL humanBodyDetectionEnabled;
@property BOOL humanFullBodyDetectionEnabled;
@property BOOL studioLightingEnabled;
@property float portraitEffectAperture;
@property float studioLightingIntensity;
@property BOOL reactionEffectsEnabled;
@property BOOL reactionEffectGesturesEnabled;
@property BOOL suppressVideoEffects;
@property (retain) CMContinuityCaptureStreamFormat *format;
@property unsigned int maxFrameRate;
@property unsigned int minFrameRate;
@property double videoZoomFactor;
@property BOOL asyncStillCaptureEnabled;
@property (retain) NSDictionary *asyncStillCaptureConfigs;
@property (readonly) int maxPhotoQualityPrioritization;
@property (nonatomic) long long deskViewCameraMode;
@property (nonatomic) unsigned int audioDeviceMode;
@property (nonatomic) double panningAngleX;
@property (nonatomic) double panningAngleY;
@property (nonatomic) BOOL centerStageFieldOfViewRestrictedToWide;
@property (nonatomic) long long manualFramingDeviceType;

+ (id)stringForManualFramingDeviceType:(long long)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
