@class NSObject, BKSApplicationStateMonitor, VFObservable;
@protocol OS_dispatch_queue, VFObserver;

@interface MFAppStateMonitor : NSObject {
    unsigned int _appState;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    VFObservable<VFObserver> *_observable;
}

@property (readonly, nonatomic) VFObservable *appStateObservable;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateApplicationState:(id)a0 observer:(id)a1;

@end
