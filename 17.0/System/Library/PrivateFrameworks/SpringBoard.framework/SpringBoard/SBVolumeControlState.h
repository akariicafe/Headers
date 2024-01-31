@class NSString;

@interface SBVolumeControlState : NSObject <NSCopying>

@property (copy, nonatomic) NSString *activeVolumeCategoryName;
@property (nonatomic, setter=setAudioPlayingSomewhere:) BOOL isAudioPlayingSomewhere;
@property (nonatomic, setter=setCallOrFaceTimeActive:) BOOL isCallOrFaceTimeActive;
@property (nonatomic, setter=setCurrentRouteHasVolumeControl:) BOOL currentRouteHasVolumeControl;
@property (nonatomic, setter=setFullyMuted:) BOOL isFullyMuted;
@property (nonatomic, setter=setRingerMuted:) BOOL isRingerMuted;
@property (nonatomic, setter=setLocked:) BOOL isLocked;
@property (nonatomic, setter=setHostingAppOnLockScreen:) BOOL isHostingAppOnLockScreen;
@property (nonatomic, setter=setShowingLockScreenMediaControls:) BOOL isShowingLockScreenMediaControls;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
