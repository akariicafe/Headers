@class SnoozeAlarmHalIntent, SnoozeAlarmHalIntentResponse;

@interface SiriTimeAlarmInternal.SnoozeAlarmIntentHandler : NSObject <SnoozeAlarmHalIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSnoozeAlarmHal:(id)a0 completion:(id /* block */)a1;
- (void)handleSnoozeAlarmHal:(SnoozeAlarmHalIntent *)a0 completion:(void (^)(SnoozeAlarmHalIntentResponse *))a1;

@end
