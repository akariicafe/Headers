@class NSNotificationCenter, _EKAlarmEngine, NSString;

@interface CALNEKAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor, CADModule>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) _EKAlarmEngine *alarmEngine;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivedNotificationNamed:(id)a0;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)a0;
- (void)didRegisterForAlarms;
- (id)initWithAlarmEngine:(id)a0 notificationCenter:(id)a1;
- (void)activate;
- (void).cxx_destruct;
- (void)removeAlarmsFiredObserver:(id)a0;
- (void)addAlarmsFiredObserver:(id)a0 selector:(SEL)a1;
- (void)deactivate;

@end
