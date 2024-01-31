@interface GEOKeyBagNotification : NSObject {
    int _currentState;
    int _notifyTokenBeforeFirstUnlock;
    int _notifyTokenAfterFirstUnlock;
}

@property (class, readonly, nonatomic) GEOKeyBagNotification *sharedObject;

@property (readonly, nonatomic) int state;

+ (BOOL)canAccessFilesWithProtection:(unsigned long long)a0;

- (void)runAfterFirstUnlock:(id)a0 block:(id /* block */)a1;
- (id)init;
- (void)dealloc;
- (void)_statusChangedBeforeFirstUnlock;
- (void)updateState;
- (BOOL)addDataDidBecomeAvailableAfterFirstUnlockObserver:(id)a0;
- (void)_statusChangedAfterFirstUnlock;
- (BOOL)canAccessFilesWithProtection:(unsigned long long)a0;

@end
