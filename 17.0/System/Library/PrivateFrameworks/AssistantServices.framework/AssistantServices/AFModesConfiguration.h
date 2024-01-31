@class NSString;

@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEyesFree;
@property (readonly, nonatomic) BOOL isUIFree;
@property (readonly, nonatomic) BOOL isForCarDND;
@property (readonly, nonatomic) BOOL isInAmbient;
@property (readonly, nonatomic) BOOL isMapsNavigationActive;
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest;
@property (readonly, nonatomic) BOOL isConnectedToCarPlay;
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction;
@property (readonly, nonatomic) BOOL isSiriAutoPrompt;
@property (readonly, nonatomic) BOOL isFlexibleFollowup;
@property (readonly, nonatomic) BOOL isMediaPlaying;
@property (readonly, nonatomic) BOOL userTypedInSiri;
@property (readonly, copy, nonatomic) NSString *modeOverrideValue;
@property (readonly, nonatomic) BOOL isDeviceScreenON;
@property (readonly, nonatomic) BOOL isInPocket;
@property (readonly, nonatomic) BOOL liftToWakeDetected;
@property (readonly, nonatomic) BOOL userInitiatedWakeDetected;
@property (readonly, nonatomic) long long deviceMotion;
@property (readonly, nonatomic) long long deviceRaised;
@property (readonly, nonatomic) long long faceDetected;
@property (readonly, nonatomic) long long touchScreenDetected;
@property (readonly, nonatomic) long long buttonPressDetected;
@property (readonly, nonatomic) long long flatDevicePosture;
@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) long long isInWorkout;
@property (readonly, nonatomic) long long isBacklightOn;
@property (readonly, nonatomic) long long isInWaterLock;
@property (readonly, nonatomic) long long isInSleepLock;
@property (readonly, nonatomic) long long isInTheaterMode;
@property (readonly, nonatomic) long long isOnWrist;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIsEyesFree:(BOOL)a0 isUIFree:(BOOL)a1 isForCarDND:(BOOL)a2 isInAmbient:(BOOL)a3 isMapsNavigationActive:(BOOL)a4 isVoiceTriggerRequest:(BOOL)a5 isConnectedToCarPlay:(BOOL)a6 isRequestMadeWithPhysicalDeviceInteraction:(BOOL)a7 isSiriAutoPrompt:(BOOL)a8 isFlexibleFollowup:(BOOL)a9 isMediaPlaying:(BOOL)a10 userTypedInSiri:(BOOL)a11 modeOverrideValue:(id)a12 isDeviceScreenON:(BOOL)a13 isInPocket:(BOOL)a14 liftToWakeDetected:(BOOL)a15 userInitiatedWakeDetected:(BOOL)a16 deviceMotion:(long long)a17 deviceRaised:(long long)a18 faceDetected:(long long)a19 touchScreenDetected:(long long)a20 buttonPressDetected:(long long)a21 flatDevicePosture:(long long)a22 deviceOrientation:(long long)a23 isInWorkout:(long long)a24 isBacklightOn:(long long)a25 isInWaterLock:(long long)a26 isInSleepLock:(long long)a27 isInTheaterMode:(long long)a28 isOnWrist:(long long)a29;

@end
