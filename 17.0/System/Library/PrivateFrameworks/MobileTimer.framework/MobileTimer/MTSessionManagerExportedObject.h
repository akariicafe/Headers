@class MTSessionManager, NSNotificationCenter, NSString;

@interface MTSessionManagerExportedObject : NSObject <MTSessionClient>

@property (readonly, weak, nonatomic) MTSessionManager *sessionManager;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionManager:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_didReceiveSessionServerReadyNotification:(id)a0;
- (void)alarmSessionEndedForId:(id)a0;
- (void)timerSessionEndedForId:(id)a0;

@end
