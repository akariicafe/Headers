@class NSMutableSet, RBSProcessMonitor;

@interface _DKForegroundServicesMonitor : _DKMonitor {
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_previouslyForegroundServices;
}

+ (id)entitlements;

- (id /* block */)processUpdateHandler;
- (void)start;
- (void)stop;
- (void)processMonitor:(id)a0 didUpdateState:(id)a1 forProcess:(id)a2;
- (void).cxx_destruct;
- (void)addServicesForeground:(id)a0 andRemoveServices:(id)a1;
- (id)servicesOfInterestForWatchCommunication;

@end
