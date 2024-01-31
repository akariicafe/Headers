@class NSMutableSet, RBSProcessMonitor;

@interface CAProcessMonitor : NSObject {
    id /* block */ _callback;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processIdentifiers;
}

- (void)updateConfiguration;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)a0;
- (void)addMonitoringProcess:(int)a0 isRunning:(BOOL *)a1 isSuspended:(BOOL *)a2;
- (void)removeMonitoringProcess:(int)a0;

@end
