@class NAFuture, NSHashTable, NSURL, NSString;

@interface HFHomeAppInstallStateArbiter : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (class, readonly, nonatomic) HFHomeAppInstallStateArbiter *sharedInstance;

@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NAFuture *homeAppInstalledFuture;
@property (readonly, copy, nonatomic) NSURL *homeAppBundleURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidInstall:(id)a0;
- (id)init;
- (void)_applications:(id)a0 didInstall:(BOOL)a1;
- (void)removeObserver:(id)a0;
- (BOOL)_fastPath_isHomeAppInstalled;
- (void)applicationsWillUninstall:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
