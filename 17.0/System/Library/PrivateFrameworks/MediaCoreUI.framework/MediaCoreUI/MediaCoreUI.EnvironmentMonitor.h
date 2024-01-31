@interface MediaCoreUI.EnvironmentMonitor : NSObject <ICEnvironmentMonitorObserver> {
    void /* unknown type, empty encoding */ _isNetworkConstrained;
    void /* unknown type, empty encoding */ _thermalLevel;
}

- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)environmentMonitorDidChangeThermalLevel:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
