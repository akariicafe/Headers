@class MTRSetupPayload, NSString, MTSDeviceSetupTopology, NSData;

@interface _TtCV13MatterSupport22MatterAddDeviceRequest7Wrapper : NSObject <MTDeviceSetupRequestSwiftWrapper> {
    void /* unknown type, empty encoding */ wrappedRequest;
}

@property (nonatomic, readonly) MTSDeviceSetupTopology *topology;
@property (nonatomic, readonly) NSString *ecosystemName;
@property (nonatomic, readonly) BOOL shouldScanNetworks;
@property (nonatomic, readonly) NSData *serializedAsData;
@property (nonatomic, readonly) MTRSetupPayload *setupPayload;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldShowDeviceWithUUID:(id)a0 vendorID:(id)a1 productID:(id)a2 serialNumber:(id)a3 rootPublicKey:(id)a4 nodeID:(id)a5;

@end
