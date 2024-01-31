@interface MDNSNEDNSProxyWatcher : NSObject <NEDNSProxyManagerDelegate>

- (void)dnsProxyStatusDidChange:(id)a0;
- (void)configurationChanged:(id)a0;

@end
