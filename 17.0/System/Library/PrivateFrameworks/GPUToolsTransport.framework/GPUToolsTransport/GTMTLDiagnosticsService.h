@class GTObservableService, NSObject;
@protocol OS_os_log;

@interface GTMTLDiagnosticsService : NSObject <GTMTLDiagnosticsService, GTMTLDiagnosticsServiceObserver> {
    NSObject<OS_os_log> *_log;
    GTObservableService *_observers;
}

- (id)init;
- (unsigned long long)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)deregisterObserversForConnection:(id)a0 path:(id)a1;
- (void)notifyCommandBufferIssue:(id)a0;
- (void)notifyDiagnosticsIssue:(id)a0;
- (void)raiseRuntimeIssue:(id)a0;

@end
