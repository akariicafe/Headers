@class NSString;
@protocol CALNTimeToLeaveRefreshMonitorDelegate, CALNTimeToLeaveRefreshStorage;

@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor, CADModule>

@property (readonly, nonatomic) id<CALNTimeToLeaveRefreshStorage> storage;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isRegisteredForAlarms) BOOL registeredForAlarms;
@property (weak, nonatomic) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_refreshTimerAlarmNameForEventExternalURL:(id)a0;

- (void)receivedNotificationNamed:(id)a0;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)a0;
- (void)didRegisterForAlarms;
- (id)initWithStorage:(id)a0;
- (void)setUpRefreshTimerWithTriggerDate:(id)a0 eventExternalURL:(id)a1;
- (void)activate;
- (void)_refreshTimerFiredForEventExternalURL:(id)a0;
- (void)removeRefreshTimerForEventExternalURL:(id)a0;
- (void).cxx_destruct;
- (void)deactivate;

@end
