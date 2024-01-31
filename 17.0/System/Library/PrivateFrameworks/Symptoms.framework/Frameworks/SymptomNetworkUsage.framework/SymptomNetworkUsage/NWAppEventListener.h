@class RBSProcessMonitor, NSObject;
@protocol OS_dispatch_queue, NWAppStateEventListenerDelegate;

@interface NWAppEventListener : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RBSProcessMonitor *appStateMonitor;
@property (weak, nonatomic) id<NWAppStateEventListenerDelegate> appStateDelegate;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)cleanupAppStateMonitor;
- (void)_applicationStateMonitorInit;
- (void).cxx_destruct;

@end
