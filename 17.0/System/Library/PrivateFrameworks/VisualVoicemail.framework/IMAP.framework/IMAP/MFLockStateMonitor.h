@class NSObject, VFObservable;
@protocol OS_dispatch_queue, VFObserver;

@interface MFLockStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    VFObservable<VFObserver> *_observable;
    BOOL _isLocked;
}

@property (readonly, nonatomic) VFObservable *lockStateObservable;
@property (readonly, getter=isLocked) BOOL locked;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_receiveLockState:(BOOL)a0;

@end
