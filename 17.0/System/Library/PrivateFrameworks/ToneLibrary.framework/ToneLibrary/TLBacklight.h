@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface TLBacklight : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    BOOL _isObservingBacklight;
    long long _backlightStatus;
}

@property (class, readonly) TLBacklight *sharedBacklight;

@property (readonly) long long backlightStatus;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (void)_assertNotRunningOnAccessQueue;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_assertRunningOnAccessQueue;
- (void)_notifyObservers:(id)a0 ofUpdatedBacklightStatus:(long long)a1;
- (void)_setBacklightStatus:(long long)a0;
- (void)_setObservingBacklight:(BOOL)a0;

@end
