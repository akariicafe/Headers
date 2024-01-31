@class NSString, NSDate;

@interface PCScheduleSystemWakeOperation : NSOperation {
    BOOL _scheduleOrCancel;
    BOOL _userVisible;
    NSDate *_wakeDate;
    double _acceptableDelay;
    NSString *_serviceIdentifier;
    void *_unqiueIdentifier;
}

- (void)main;
- (id)initForScheduledWake:(BOOL)a0 wakeDate:(id)a1 acceptableDelay:(double)a2 userVisible:(BOOL)a3 serviceIdentifier:(id)a4 uniqueIdentifier:(void *)a5;
- (void).cxx_destruct;

@end
