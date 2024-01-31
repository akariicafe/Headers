@class NSDictionary, NSMutableDictionary, WBSDispatchSourceTimer;

@interface WBSWebExtensionAlarmMetadata : NSObject {
    NSMutableDictionary *_dictionary;
    double _initialTimerScheduleSeconds;
    BOOL _repeats;
}

@property (retain, nonatomic) WBSDispatchSourceTimer *timer;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) BOOL isValid;

- (void).cxx_destruct;
- (void)_scheduleWithHandler:(id /* block */)a0;
- (id)initWithName:(id)a0 scheduledTime:(id)a1 periodInMinutes:(id)a2 initialTimerScheduleSeconds:(double)a3;

@end
