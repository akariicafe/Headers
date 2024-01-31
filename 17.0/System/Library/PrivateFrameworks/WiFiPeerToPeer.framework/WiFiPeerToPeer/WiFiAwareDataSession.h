@class NSData, NSString, WiFiAwareDiscoveryResult, WiFiAwareInternetSharingConfiguration, WiFiMACAddress, NSNumber, WiFiAwarePublishDatapathServiceSpecificInfo, WiFiP2PXPCConnection;
@protocol WiFiAwareDataSessionDelegate;

@interface WiFiAwareDataSession : NSObject <WiFiAwareDatapathXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    NSNumber *_datapathID;
    WiFiMACAddress *_initiatorDataAddress;
    long long _internetSharingPolicy;
}

@property (readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;
@property (readonly, nonatomic) NSString *passphrase;
@property (readonly, nonatomic) NSData *pmk;
@property (readonly, nonatomic) NSData *pmkID;
@property (readonly, nonatomic) long long internetSharingPolicy;
@property (copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration;
@property (weak, nonatomic) id<WiFiAwareDataSessionDelegate> delegate;
@property (readonly, nonatomic) WiFiMACAddress *localDataAddress;
@property (readonly, nonatomic) unsigned int localInterfaceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (void)resetState;
- (id)remoteObjectInterface;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)start;
- (id)exportedObject;
- (void)stop;
- (void)handleError:(long long)a0;
- (void).cxx_destruct;
- (void)generateStatisticsReportWithCompletionHandler:(id /* block */)a0;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2;
- (void)reportIssue:(id)a0;
- (void)updateLinkStatus:(long long)a0;
- (void)datapathFailedToStartWithError:(long long)a0;
- (void)datapathConfirmedForPeerDataAddress:(id)a0 serviceSpecificInfo:(id)a1;
- (void)datapathReceivedControlDataAddress:(id)a0 serviceSpecificInfo:(id)a1 onInterfaceIndex:(unsigned int)a2;
- (void)datapathStartedWithInstanceID:(unsigned char)a0 initiatorDataAddress:(id)a1 localInterfaceIndex:(unsigned int)a2;
- (void)datapathTerminatedWithReason:(long long)a0;
- (void)datapathUpdatedInternetSharingPolicy:(long long)a0;
- (void)datapathUpdatedPeerRSSI:(int)a0;
- (void)datapathUpdatedServiceSpecificInfo:(id)a0;
- (void)generateCurrentNetworkRecordForInternetSharingSession:(id /* block */)a0;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2 passphrase:(id)a3;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2 passphrase:(id)a3 pmk:(id)a4 pmkID:(id)a5;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2 pmk:(id)a3;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2 pmk:(id)a3 pmkID:(id)a4;
- (void)setWantsPeerRSSIUpdates:(BOOL)a0 withCompletionHandler:(id /* block */)a1;

@end
