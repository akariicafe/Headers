@class UNUserNotificationCenter, NSBundle, NSString, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, OS_os_log, _CDLocalContext;

@interface PowerUIChargeAwarenessNotifier : NSObject <UNUserNotificationCenterDelegatePrivate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) UNUserNotificationCenter *unCenter;
@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) int registrationToken;
@property (nonatomic) BOOL haveShownWireless;
@property (nonatomic) BOOL haveShownMCL;
@property (nonatomic) double firstInitDate;
@property (nonatomic) BOOL allowNotificationsOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)contentForType:(int)a0;
+ (id)requestForContent:(int)a0;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)cancelNotificationRequestWithIdentifier:(id)a0;
- (void)userNotificationCenter:(id)a0 didOpenApplicationForResponse:(id)a1;
- (void).cxx_destruct;
- (void)displayNotificationForMCL:(BOOL)a0 forWireless:(BOOL)a1;
- (void)forceDisplayMCLNotification:(id /* block */)a0;
- (void)forceDisplayWirelessChargingNotification:(id /* block */)a0;
- (void)postNotificationsIfNecessary;
- (void)readFirstInitDate;
- (BOOL)readHaveShownMCL;
- (BOOL)readHaveShownWireless;
- (void)recordHaveShownMCL;
- (void)recordHaveShownWireless;

@end
