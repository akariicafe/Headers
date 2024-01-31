@class NSString, NSURL, NSNumber;

@interface UNNotificationSound : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) UNNotificationSound *defaultSystemSound;
@property (class, readonly, copy, nonatomic) UNNotificationSound *defaultSound;
@property (class, readonly, copy, nonatomic) UNNotificationSound *defaultRingtoneSound;
@property (class, readonly, copy, nonatomic) UNNotificationSound *defaultCriticalSound;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long alertType;
@property (readonly, copy, nonatomic) NSString *alertTopic;
@property (readonly, copy, nonatomic) NSString *audioCategory;
@property (readonly, copy, nonatomic) NSNumber *audioVolume;
@property (readonly, nonatomic, getter=isCritical) BOOL critical;
@property (readonly, nonatomic) double maximumDuration;
@property (readonly, nonatomic) BOOL shouldIgnoreAccessibilityDisabledVibrationSetting;
@property (readonly, nonatomic) BOOL shouldIgnoreRingerSwitch;
@property (readonly, nonatomic) BOOL shouldRepeat;
@property (readonly, copy, nonatomic) NSString *toneFileName;
@property (readonly, copy, nonatomic) NSURL *toneFileURL;
@property (readonly, copy, nonatomic) NSString *toneIdentifier;
@property (readonly, nonatomic) unsigned long long toneMediaLibraryItemIdentifier;
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier;
@property (readonly, copy, nonatomic) NSURL *vibrationPatternFileURL;

+ (id)soundWithAlertType:(long long)a0;
+ (id)_soundWithAlertType:(long long)a0 audioVolume:(id)a1 critical:(BOOL)a2 toneFileName:(id)a3;
+ (id)criticalSoundNamed:(id)a0;
+ (id)criticalSoundNamed:(id)a0 withAudioVolume:(float)a1;
+ (id)defaultCriticalSoundWithAudioVolume:(float)a0;
+ (id)ringtoneSoundNamed:(id)a0;
+ (id)soundNamed:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAlertType:(long long)a0 alertTopic:(id)a1 audioCategory:(id)a2 audioVolume:(id)a3 critical:(BOOL)a4 maximumDuration:(double)a5 shouldIgnoreAccessibilityDisabledVibrationSetting:(BOOL)a6 shouldIgnoreRingerSwitch:(BOOL)a7 shouldRepeat:(BOOL)a8 toneFileName:(id)a9 toneFileURL:(id)a10 toneIdentifier:(id)a11 toneMediaLibraryItemIdentifier:(unsigned long long)a12 vibrationIdentifier:(id)a13 vibrationPatternFileURL:(id)a14;

@end
