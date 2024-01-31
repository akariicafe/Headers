@class NSString, SUDownload, SUManagerClient;

@interface STUpdateMonitorSUS : STUpdateMonitor <SUManagerClientDelegate> {
    SUManagerClient *_suManager;
    SUDownload *_currentUpdate;
    long long _currentUpdateSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sync;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (void)startMonitor;
- (void)_setUpdate:(id)a0;
- (void)checkForSystemUpdates;
- (void)client:(id)a0 downloadDidFail:(id)a1 withError:(id)a2;
- (void)client:(id)a0 downloadDidFinish:(id)a1;
- (void)client:(id)a0 downloadDidStart:(id)a1;
- (void)client:(id)a0 downloadProgressDidChange:(id)a1;
- (void)client:(id)a0 downloadWasInvalidatedForNewUpdatesAvailable:(id)a1;
- (id)currentUpdateName;
- (long long)currentUpdateSize;
- (void)stopMonitor;

@end
