@class EFObservable;
@protocol EFObserver;

@interface MFLockStateMonitor : NSObject {
    EFObservable<EFObserver> *_observable;
    int _token;
    _Atomic BOOL _isLocked;
}

@property (class, readonly, nonatomic) MFLockStateMonitor *sharedInstance;

@property (readonly, nonatomic) EFObservable *lockStateObservable;
@property (readonly, getter=isLocked) BOOL locked;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_receiveLockState:(BOOL)a0;

@end
