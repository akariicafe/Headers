@class NRDevice, HKWatchAppAvailability;
@protocol HKRPWatchInstallAppsProviding;

@interface HKRPWatchAppInstaller : NSObject {
    NRDevice *_device;
    HKWatchAppAvailability *_watchAppAvailability;
    id<HKRPWatchInstallAppsProviding> _installAppsProviding;
}

- (id)init;
- (void).cxx_destruct;
- (void)checkIfAppCanBeInstalledWithCompletion:(id /* block */)a0;
- (id)initWithDevice:(id)a0 watchAppAvailability:(id)a1 installAppsProviding:(id)a2;
- (void)installAppWithCompletion:(id /* block */)a0;

@end
