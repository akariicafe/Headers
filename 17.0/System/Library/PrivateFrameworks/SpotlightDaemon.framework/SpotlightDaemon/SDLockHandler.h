@class NSObject;
@protocol SDLockHandlerDelegate, OS_dispatch_queue;

@interface SDLockHandler : NSObject {
    id<SDLockHandlerDelegate> _delegate;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _notifyTokenKeybagLockStateNotifyToken;
    int _notifyTokenSBHomescreenUnlocked;
    int _notifyTokenSBLockState;
    _Atomic BOOL _didStart;
    _Atomic BOOL _didFirstUnlockSinceBoot;
    _Atomic BOOL _didMigrationComplete;
    _Atomic BOOL _didFirstUnlockInHomeScreen;
    _Atomic BOOL _didFirstUnlockInSpringBoard;
}

+ (id)sharedLockHandler;
+ (void)setLockHandlerWithDelegate:(id)a0 options:(unsigned long long)a1;

- (void)start;
- (BOOL)unlocked;
- (BOOL)unlockedSinceBoot;
- (void).cxx_destruct;
- (void)handleFirstUnlock;
- (BOOL)migrationComplete;
- (id)initWithDelegate:(id)a0 options:(unsigned long long)a1;
- (void)checkMigrationComplete;
- (BOOL)firstUnlockedInSB;
- (void)forceMigrationComplete;
- (void)handleFirstUnlockHomeScreen;
- (void)handleFirstUnlockInSpringBoard;
- (void)handleMigrationComplete;

@end
