@class NSString;

@interface SBSoundDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isRingerMuted) BOOL ringerMuted;
@property (retain, nonatomic) NSString *calendarAlarmPath;
@property (readonly, nonatomic) BOOL vibrateWhenRinging;
@property (readonly, nonatomic) BOOL vibrateWhenSilent;
@property (readonly, nonatomic) BOOL playSoundOnDeviceWake;

@end
