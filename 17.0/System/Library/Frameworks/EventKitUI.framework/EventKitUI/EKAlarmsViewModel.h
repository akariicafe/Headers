@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject {
    BOOL _canHaveLeaveNowAlarm;
    BOOL _hasLeaveNowAlarm;
    unsigned long long _locationStatus;
}

@property (retain, nonatomic) EKCalendarItem *calendarItem;
@property (retain, nonatomic) NSMutableArray *uiAlarms;
@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) BOOL canHaveLeaveNowAlarm;
@property (readonly, nonatomic) BOOL hasLeaveNowAlarm;
@property (readonly, nonatomic) unsigned long long locationStatus;

+ (id)labelTextForIndex:(unsigned long long)a0;
+ (void)unsubscribeFromDarwinNotifications;
+ (void)subscribeToDarwinNotifications;
+ (id)_noneAlertTitle;

- (void)setNeedsUpdate;
- (void)reloadTTLLocationAuthorization:(id)a0;
- (id)init;
- (void)updateIfNeeded;
- (void)dealloc;
- (id)placeholderMenuForAlarmAtIndex:(unsigned long long)a0;
- (id)menuForAlarmAtIndex:(unsigned long long)a0 actionHandler:(id /* block */)a1;
- (id)presetAlarmsIntervals;
- (BOOL)showDefaultAlarm:(id)a0;
- (BOOL)isAlarmEffectivelyDisabled:(id)a0;
- (void)_updateLeaveNowFlags;
- (void)_updateAlarms;
- (id)_menuForAlarmAtIndex:(unsigned long long)a0 placeholder:(BOOL)a1 actionHandler:(id /* block */)a2;
- (BOOL)locationStatusMakesTTLAlarmDisabled;
- (void).cxx_destruct;
- (id)_errorTitleForDisabledTTLAlarm;
- (void)updatedUIAlarmFromUIAlarm:(id)a0 toUIAlarm:(id)a1 atIndex:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initWithCalendarItem:(id)a0;
- (BOOL)_hasUIAlarmChangedFromUIAlarm:(id)a0 toUIAlarm:(id)a1;

@end
