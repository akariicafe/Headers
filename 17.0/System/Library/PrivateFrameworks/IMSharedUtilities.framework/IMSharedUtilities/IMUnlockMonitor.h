@interface IMUnlockMonitor : NSObject {
    void /* unknown type, empty encoding */ keybagChangeIOKitToken;
    void /* unknown type, empty encoding */ firstKeybagUnlockToken;
    void /* unknown type, empty encoding */ keybagChangeToken;
    void /* unknown type, empty encoding */ sbLockChangeToken;
    void /* unknown type, empty encoding */ initializedBeforeFirstUnlock;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ listeners;
}

+ (id)sharedInstance;

- (void)addListener:(id)a0;
- (BOOL)isUnderFirstDataProtectionLock;
- (void)removeListener:(id)a0;
- (id)init;
- (BOOL)isSystemLocked;
- (void).cxx_destruct;
- (BOOL)hasReceivedFirstUnlockNotification;

@end
