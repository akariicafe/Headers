@interface HKPairedDeviceAppInstallationManager : HKWatchAppInstallationManager {
    id _pairedDeviceRegistry;
}

- (void)startObserving;
- (void)stopObserving;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_watchAppInstallStateDidChange:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 forPairedDeviceRegistry:(id)a1;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end
