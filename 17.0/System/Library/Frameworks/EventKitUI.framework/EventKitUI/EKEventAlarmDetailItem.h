@class NSArray, EKAlarmsViewModel, EKUIRecurrenceAlertController, NSMutableArray;

@interface EKEventAlarmDetailItem : EKEventDetailItem {
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    NSMutableArray *_alarmPopupMenus;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}

@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)reset;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (unsigned long long)numberOfSubitems;
- (BOOL)_alarmsAreCreatable;
- (BOOL)_alarmsAreEditable;
- (void)ttlLocationStatusChanged:(id)a0;
- (id)_createRealPopupMenuForIndex:(long long)a0 popupCell:(id)a1;
- (void)_updateAlarms;
- (void).cxx_destruct;
- (void)setEvent:(id)a0 store:(id)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;

@end
