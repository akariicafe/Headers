@class NEVPNConnectivityManager, PSUIVPNStateSnapshot, NSObject;
@protocol OS_dispatch_queue, PSUIVPNSpecifierGeneratorDelegate;

@interface PSUIVPNSpecifierGenerator : NSObject <NEVPNConnectivityManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (retain, nonatomic) PSUIVPNStateSnapshot *_currentSnapshot;
@property (retain, nonatomic) NEVPNConnectivityManager *_vpnConnectivityManager;
@property (weak, nonatomic) id<PSUIVPNSpecifierGeneratorDelegate> delegate;

- (void)reloadVPNStateWithCompletion:(id /* block */)a0;
- (void)_setVPNStatus:(id)a0 specifier:(id)a1;
- (id)initWithLoadingQueue:(id)a0;
- (id)_vpnStatus:(id)a0;
- (id)specifier;
- (void)connectivityManagerDidChange:(id)a0;
- (void)lazyLoadBundle:(id)a0;
- (id)vpnSpecifierForVisibilityStyleLink;
- (id)_vpnStatusString:(id)a0;
- (void).cxx_destruct;
- (id)vpnSpecifierForVisibilityStyleToggle;
- (void)_reloadVPNStateWithCompletion:(id /* block */)a0;

@end
