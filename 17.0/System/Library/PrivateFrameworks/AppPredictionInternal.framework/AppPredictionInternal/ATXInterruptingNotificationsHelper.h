@class BMAppInFocus, NSMutableDictionary, ATXInterruptingAppSessionEvent, NSMutableArray;

@interface ATXInterruptingNotificationsHelper : NSObject {
    BMAppInFocus *_curenStartEvent;
    BMAppInFocus *_curenEndEvent;
    BMAppInFocus *_previousStartEvent;
    BMAppInFocus *_previousEndEvent;
    BMAppInFocus *_potentialInterruptedEndEvent;
    ATXInterruptingAppSessionEvent *_interruptingAppSessionEvent;
    NSMutableDictionary *_recentNotifications;
    NSMutableArray *_potentialInterruptingAppLaunchEvents;
    NSMutableArray *_interruptingAppSessions;
}

- (id)init;
- (void).cxx_destruct;
- (void)checkAppLaunchEndEvent:(id)a0;
- (void)checkAppLaunchStartEvent:(id)a0;
- (BOOL)checkIfStartEventWasTheInterruptedEvent:(id)a0;
- (void)checkNotificationEvent:(id)a0;
- (BOOL)doesCurrentAppLaunchInterruptPreviousAppLaunch:(id)a0;
- (id)interruptingAppsessions;
- (void)recordInterruptingAppSession;

@end
