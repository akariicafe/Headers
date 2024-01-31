@class NSUUID;

@interface HMDRemoteEventRouterPrimaryResidentClient : HMDRemoteEventRouterClient {
    NSUUID *_primaryResidentIdentifier;
}

- (id)dumpStateDescription;
- (void).cxx_destruct;
- (BOOL)clientIsEnabled:(id)a0;
- (BOOL)_clientIsEnabled:(id)a0;
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)a0;
- (unsigned long long)messageTransportRestriction;

@end
