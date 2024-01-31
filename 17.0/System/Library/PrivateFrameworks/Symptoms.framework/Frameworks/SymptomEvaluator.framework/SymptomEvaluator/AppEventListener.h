@class NSObject, RBSProcessMonitor;
@protocol AppStateEventListenerDelegate, OS_dispatch_queue;

@interface AppEventListener : NSObject

@property (weak, nonatomic) id<AppStateEventListenerDelegate> appStateDelegate;
@property (retain, nonatomic) RBSProcessMonitor *appStateMonitor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)cleanupAppStateMonitor;
- (void)_applicationStateMonitorInit;
- (void).cxx_destruct;

@end
