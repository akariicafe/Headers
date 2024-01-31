@class NSString, NSUUID, NSURL, NSDate, AFClockAlarm;

@interface _AFClockAlarmMutation : NSObject <AFClockAlarmMutating> {
    AFClockAlarm *_base;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    BOOL _isFiring;
    NSString *_title;
    unsigned long long _type;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _repeatOptions;
    BOOL _isEnabled;
    BOOL _isSnoozed;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAlarmID : 1; unsigned char hasAlarmURL : 1; unsigned char hasIsFiring : 1; unsigned char hasTitle : 1; unsigned char hasType : 1; unsigned char hasHour : 1; unsigned char hasMinute : 1; unsigned char hasRepeatOptions : 1; unsigned char hasIsEnabled : 1; unsigned char hasIsSnoozed : 1; unsigned char hasFiredDate : 1; unsigned char hasDismissedDate : 1; unsigned char hasLastModifiedDate : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setType:(unsigned long long)a0;
- (void)setHour:(unsigned long long)a0;
- (void)setMinute:(unsigned long long)a0;
- (id)initWithBase:(id)a0;
- (void)setDismissedDate:(id)a0;
- (void)setIsEnabled:(BOOL)a0;
- (unsigned long long)getType;
- (BOOL)isDirty;
- (BOOL)getIsFiring;
- (void)setLastModifiedDate:(id)a0;
- (id)getTitle;
- (void).cxx_destruct;
- (void)setFiredDate:(id)a0;
- (id)getLastModifiedDate;
- (void)setIsFiring:(BOOL)a0;
- (id)getDismissedDate;
- (void)setTitle:(id)a0;
- (id)getFiredDate;
- (void)setAlarmID:(id)a0;
- (unsigned long long)getHour;
- (id)getAlarmID;
- (id)getAlarmURL;
- (BOOL)getIsEnabled;
- (BOOL)getIsSnoozed;
- (unsigned long long)getMinute;
- (unsigned long long)getRepeatOptions;
- (void)setAlarmURL:(id)a0;
- (void)setIsSnoozed:(BOOL)a0;
- (void)setRepeatOptions:(unsigned long long)a0;

@end
