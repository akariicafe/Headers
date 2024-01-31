@class NSHashTable;

@interface ATXSigtermListener : NSObject {
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)_notifyObserversOfSigterm;
- (void).cxx_destruct;

@end
