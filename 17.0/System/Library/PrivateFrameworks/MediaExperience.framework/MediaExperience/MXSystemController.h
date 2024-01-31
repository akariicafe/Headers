@class NSString, NSDictionary;

@interface MXSystemController : NSObject

@property (retain) NSString *displayID;
@property (retain) NSDictionary *notificationsSubscribedTo;
@property (retain) NSString *remoteDeviceID;
@property (nonatomic) BOOL appWantsVolumeChanges;
@property (nonatomic) BOOL canBeNowPlayingApp;
@property (nonatomic) int clientPID;
@property (nonatomic) BOOL hasEntitlementForPIDInheritance;
@property (nonatomic) BOOL hasEntitlementToEnableWombat;
@property (nonatomic) BOOL hasEntitlementToSetSilentMode;
@property (nonatomic) BOOL hasEntitlementForSilentModeNotifications;
@property (nonatomic) int pidToInheritAppStateFrom;
@property (nonatomic) BOOL hasEntitlementToInitiateRecordingTemporarily;
@property (readonly, nonatomic) BOOL phoneCallExists;
@property (readonly, nonatomic) BOOL isSomeoneRecording;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlaying;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsActiveOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someLongFormVideoClientIsPlayingOverAirPlayVideo;
@property (readonly, nonatomic) BOOL someSharePlayCapableCallSessionIsActive;

+ (void)mxSystemControllerListAddInstance:(id)a0 isSidekick:(BOOL)a1;
+ (void)initialize;
+ (int)getPIDToInheritAppStateFromForPID:(int)a0;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2 remoteDeviceID:(id)a3;
+ (int)getPIDForAnyAppThatWantsVolumeChanges;
+ (BOOL)isNonSerializedSetProperty:(id)a0;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2;
+ (void)mxSystemControllerListEndIteration;
+ (void)mxSystemControllerListBeginIteration;
+ (BOOL)getCanBeNowPlayingAppForPID:(int)a0;
+ (void)dumpInfoOfMXSystemControllers;
+ (void)updateMXSystemControllerList;
+ (BOOL)isNonSerializedCopyProperty:(id)a0;

- (int)_performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 outVolume:(float *)a7 outSequenceNumber:(long long *)a8 outMuted:(BOOL *)a9 outCategoryCopy:(id *)a10 outModeCopy:(id *)a11;
- (int)performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 rampUpDuration:(float)a7 rampDownDuration:(float)a8 outVolume:(float *)a9 outSequenceNumber:(long long *)a10 outMuted:(BOOL *)a11 outCategoryCopy:(id *)a12 outModeCopy:(id *)a13;
- (int)performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 rampUpwardDuration:(id)a7 rampDownwardDuration:(id)a8 outVolume:(float *)a9 outSequenceNumber:(long long *)a10 outMuted:(BOOL *)a11 outCategoryCopy:(id *)a12 outModeCopy:(id *)a13;
- (id)initWithPID:(int)a0;
- (void)dealloc;
- (int)toggleInputMute;
- (int)getInputMute:(struct { unsigned int x0[8]; })a0 outMuteValue:(BOOL *)a1;
- (int)copyAttributeForKeyInternal:(id)a0 withValueOut:(void *)a1;
- (int)setAttributeForKeyInternal:(id)a0 andValue:(const void *)a1;
- (int)performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 outVolume:(float *)a7 outSequenceNumber:(long long *)a8 outMuted:(BOOL *)a9 outCategoryCopy:(id *)a10 outModeCopy:(id *)a11;
- (int)setAttributeForKey:(id)a0 andValue:(const void *)a1;
- (int)setSilentMode:(BOOL)a0 untilTime:(id)a1 reason:(id)a2 clientType:(unsigned int)a3;
- (void)volumeCategoryAndMode:(id)a0 mode:(id)a1 outCategoryCopy:(id *)a2 outModeCopy:(id *)a3;
- (int)copyAttributeForKey:(id)a0 withValueOut:(void *)a1;
- (int)performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 rampUpDuration:(float)a7 rampDownDuration:(float)a8 outVolume:(float *)a9 outSequenceNumber:(long long *)a10 outMuted:(BOOL *)a11 outCategoryCopy:(id *)a12 outModeCopy:(id *)a13 retainFullMute:(BOOL)a14;
- (int)_performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 rampUpDuration:(float)a7 rampDownDuration:(float)a8 outVolume:(float *)a9 outSequenceNumber:(long long *)a10 outMuted:(BOOL *)a11 outCategoryCopy:(id *)a12 outModeCopy:(id *)a13 retainFullMute:(BOOL)a14;
- (int)_performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 rampUpDuration:(float)a7 rampDownDuration:(float)a8 outVolume:(float *)a9 outSequenceNumber:(long long *)a10 outMuted:(BOOL *)a11 outCategoryCopy:(id *)a12 outModeCopy:(id *)a13;
- (id)initWithPID:(int)a0 remoteDeviceID:(id)a1;
- (id)info;
- (int)setInputMute:(struct { unsigned int x0[8]; })a0 muteValue:(BOOL)a1;
- (int)applyPIDToInheritAppStateFrom:(const void *)a0;
- (int)_performVolumeOperation:(unsigned int)a0 volume:(float)a1 category:(id)a2 mode:(id)a3 routeName:(id)a4 routeDeviceIdentifier:(id)a5 routeSubtype:(id)a6 rampUpwardDuration:(id)a7 rampDownwardDuration:(id)a8 outVolume:(float *)a9 outSequenceNumber:(long long *)a10 outMuted:(BOOL *)a11 outCategoryCopy:(id *)a12 outModeCopy:(id *)a13;
- (void)applyCanBeNowPlayingApp:(const void *)a0;

@end
