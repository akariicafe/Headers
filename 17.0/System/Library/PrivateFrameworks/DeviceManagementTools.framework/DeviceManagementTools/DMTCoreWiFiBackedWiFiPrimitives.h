@class CWFInterface, NSTimer, NSString;

@interface DMTCoreWiFiBackedWiFiPrimitives : NSObject <DMTWiFiPrimitives>

@property (readonly, nonatomic) CWFInterface *wiFiInterface;
@property (copy, nonatomic) id /* block */ joinNetworkCompletion;
@property (retain, nonatomic) NSTimer *joinNetworkTimeout;
@property (getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) BOOL wifiInterfacesAvailable;
@property (readonly, copy, nonatomic) NSString *wifiNetworkName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)scanForNetworksWithCredentials:(id)a0;
- (void)cancelJoiningWiFi;
- (void)didJoinNetworkWithError:(id)a0;
- (void)disassociateWiFiNetworkWithCompletion:(id /* block */)a0;
- (void)foundNetworks:(id)a0 forCredential:(id)a1 error:(id)a2;
- (void)joinNetworkWithCredential:(id)a0 scanRecord:(id)a1;
- (void)joinWiFiNetworkWithCredential:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)networkJoinTimeOutDidFire:(id)a0;

@end
