@interface BYTelephonyStateNotifier : NSObject

@property (nonatomic) int simUnlockNotificationToken;

+ (unsigned long long)retrieveSIMUnlockStateFromToken:(int)a0;

- (unsigned long long)currentSIMUnlockState;
- (void)_endObservingState;
- (void)dealloc;
- (id)initForNotifying;
- (id)initWithNotificationQueue:(id)a0 notificationBlock:(id /* block */)a1;
- (void)_beginObservingWithNotificationQueue:(id)a0 notificationBlock:(id /* block */)a1;
- (void)notifySIMUnlockStateChangedTo:(unsigned long long)a0;

@end
