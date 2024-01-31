@class NSString, WiFiP2PXPCConnection;

@interface WiFiP2PTrafficRegistrationReservation : NSObject <WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    unsigned long long _enabledCount;
}

@property (readonly, nonatomic) NSString *service;
@property (nonatomic) BOOL showsUIAlertOnError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectInterface;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initForService:(id)a0;
- (void).cxx_destruct;
- (void)handleConnectionEstablishedWithProxy:(id)a0;
- (id)trafficRegistrationConfiguration;

@end
