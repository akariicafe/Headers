@interface ICQuickNoteSessionSettings : NSObject

@property (class, nonatomic) long long showOnLockScreen;
@property (class, nonatomic) long long sessionDuration;

+ (void)initialize;
+ (void)disableNotesOnLockScreenIfNecessary;
+ (BOOL)hasAccountSupportingLockScreen;
+ (long long)showOnLockScreenSettingValue;
+ (void)updateNotesOnLockScreenWhenAccountSupportingLockScreenAdded;

@end
