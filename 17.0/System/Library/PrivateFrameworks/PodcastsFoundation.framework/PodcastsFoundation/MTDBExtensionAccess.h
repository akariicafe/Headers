@class NSHashTable;

@interface MTDBExtensionAccess : NSObject {
    NSHashTable *_observers;
    BOOL _hasAttemptedToFix;
}

+ (id)sharedInstance;

- (void)_handleChange;
- (void)_startObserving;
- (BOOL)isReady;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)attemptToFix;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_stopObserving;

@end
