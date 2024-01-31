@class NSMutableArray;

@interface NetworkExtensionStateRelay : NSObject {
    NSMutableArray *_vpnConnSessions;
    NSMutableArray *_contentFilterSessions;
    NSMutableArray *_dnsProxySessions;
}

@property (nonatomic) BOOL vpnConnected;
@property (nonatomic) BOOL contentFilterConnected;
@property (nonatomic) BOOL dnsProxyConnected;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)_createSessionForNEConfiguration:(id)a0 queue:(id)a1;
- (void)_removeNESessionWatchers;
- (void)_setUpNEConfigurationChangedWatcher:(id)a0;
- (BOOL)_setupNetworkExtensionSessionMonitors:(id)a0;

@end
