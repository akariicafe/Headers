@class NSString, MTPBSound;

@interface MTPBAlarmProperties : PBCodable <NSCopying> {
    struct { unsigned char bedtimeDismissedDate : 1; unsigned char bedtimeFiredDate : 1; unsigned char bedtimeSnoozeFireDate : 1; unsigned char dismissedDate : 1; unsigned char firedDate : 1; unsigned char keepOffUntilDate : 1; unsigned char lastModifiedDate : 1; unsigned char snoozeFireDate : 1; unsigned char bedtimeDismissedAction : 1; unsigned char bedtimeHour : 1; unsigned char bedtimeMinute : 1; unsigned char bedtimeReminderMinutes : 1; unsigned char daySetting : 1; unsigned char dismissedAction : 1; unsigned char hour : 1; unsigned char minute : 1; unsigned char onboardingVersion : 1; unsigned char playOptions : 1; unsigned char revision : 1; unsigned char sleepModeOptions : 1; unsigned char allowsSnooze : 1; unsigned char isEnabled : 1; unsigned char isSleepAlarm : 1; unsigned char sleepMode : 1; unsigned char sleepSchedule : 1; unsigned char sleepTracking : 1; unsigned char timeInBedTracking : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAlarmID;
@property (retain, nonatomic) NSString *alarmID;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) unsigned int hour;
@property (nonatomic) BOOL hasMinute;
@property (nonatomic) unsigned int minute;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hasAllowsSnooze;
@property (nonatomic) BOOL allowsSnooze;
@property (nonatomic) BOOL hasDaySetting;
@property (nonatomic) unsigned int daySetting;
@property (readonly, nonatomic) BOOL hasSound;
@property (retain, nonatomic) MTPBSound *sound;
@property (nonatomic) BOOL hasIsSleepAlarm;
@property (nonatomic) BOOL isSleepAlarm;
@property (nonatomic) BOOL hasBedtimeHour;
@property (nonatomic) unsigned int bedtimeHour;
@property (nonatomic) BOOL hasBedtimeMinute;
@property (nonatomic) unsigned int bedtimeMinute;
@property (nonatomic) BOOL hasBedtimeReminderMinutes;
@property (nonatomic) unsigned int bedtimeReminderMinutes;
@property (nonatomic) BOOL hasRevision;
@property (nonatomic) unsigned int revision;
@property (nonatomic) BOOL hasLastModifiedDate;
@property (nonatomic) double lastModifiedDate;
@property (nonatomic) BOOL hasSnoozeFireDate;
@property (nonatomic) double snoozeFireDate;
@property (nonatomic) BOOL hasBedtimeSnoozeFireDate;
@property (nonatomic) double bedtimeSnoozeFireDate;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL hasFiredDate;
@property (nonatomic) double firedDate;
@property (nonatomic) BOOL hasDismissedDate;
@property (nonatomic) double dismissedDate;
@property (nonatomic) BOOL hasPlayOptions;
@property (nonatomic) unsigned int playOptions;
@property (nonatomic) BOOL hasSleepMode;
@property (nonatomic) BOOL sleepMode;
@property (nonatomic) BOOL hasSleepTracking;
@property (nonatomic) BOOL sleepTracking;
@property (nonatomic) BOOL hasSleepSchedule;
@property (nonatomic) BOOL sleepSchedule;
@property (nonatomic) BOOL hasOnboardingVersion;
@property (nonatomic) unsigned int onboardingVersion;
@property (nonatomic) BOOL hasSleepModeOptions;
@property (nonatomic) unsigned int sleepModeOptions;
@property (nonatomic) BOOL hasTimeInBedTracking;
@property (nonatomic) BOOL timeInBedTracking;
@property (nonatomic) BOOL hasDismissedAction;
@property (nonatomic) unsigned int dismissedAction;
@property (nonatomic) BOOL hasBedtimeFiredDate;
@property (nonatomic) double bedtimeFiredDate;
@property (nonatomic) BOOL hasBedtimeDismissedDate;
@property (nonatomic) double bedtimeDismissedDate;
@property (nonatomic) BOOL hasBedtimeDismissedAction;
@property (nonatomic) unsigned int bedtimeDismissedAction;
@property (nonatomic) BOOL hasKeepOffUntilDate;
@property (nonatomic) double keepOffUntilDate;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
