@class HKObserverBridgeHandle;

@interface _HKWatchAppInstallationManagerObserverBridge : NSObject <HKWatchAppInstallationManagerObserver>

@property (readonly, nonatomic) HKObserverBridgeHandle *handle;

- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (void)watchAppInstallationManagerDidObserveChange:(id)a0;

@end
