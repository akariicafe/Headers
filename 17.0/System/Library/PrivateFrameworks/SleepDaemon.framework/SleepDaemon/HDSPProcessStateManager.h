@class NSMutableSet, RBSProcessMonitor;
@protocol HDSPProcessStateManagerDelegate;

@interface HDSPProcessStateManager : NSObject {
    RBSProcessMonitor *_processStateMonitor;
    NSMutableSet *_processIdentifiers;
    id /* block */ _processStateProvider;
}

@property (weak, nonatomic) id<HDSPProcessStateManagerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (BOOL)isProcessSuspended:(int)a0;
- (id)initWithProcessStateProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startMonitoringProcessState:(int)a0;
- (void)_updateConfiguration;
- (void)stopMonitoringProcessState:(int)a0;
- (void)_process:(id)a0 didUpdateFromState:(id)a1 toState:(id)a2;

@end
