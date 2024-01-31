@class NSString, HDMCProfileExtension;

@interface HDMCPostInstallUpdateManager : NSObject <HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler> {
    HDMCProfileExtension *_profileExtension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void).cxx_destruct;
- (void)performPostInstallUpdateTaskForManager:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfileExtension:(id)a0;
- (BOOL)_triggerInitialAnalysisWithError:(id *)a0;
- (BOOL)_updateDeviceScopedStorageWithError:(id *)a0;

@end
