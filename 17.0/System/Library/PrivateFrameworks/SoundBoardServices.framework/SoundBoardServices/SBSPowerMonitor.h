@class NSXPCConnection;
@protocol SBSPowerMonitorImplementer;

@interface SBSPowerMonitor : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSPowerMonitorImplementer> _sbProxy;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)getPowerEstimateForInterval:(float)a0 reply:(id /* block */)a1;

@end
