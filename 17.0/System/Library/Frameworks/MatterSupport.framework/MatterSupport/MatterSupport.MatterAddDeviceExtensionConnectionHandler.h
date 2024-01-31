@class NSUUID, MTSDeviceSetupRoom, NSString, NSArray, NSError, MTSDeviceSetupHome, MTSThreadNetworkAssociation, MTSWiFiNetworkAssociation, MTSDeviceCredential;

@interface MatterSupport.MatterAddDeviceExtensionConnectionHandler : NSObject <_EXMainConnectionHandler, MTSDeviceSetupXPCInterface> {
    void /* unknown type, empty encoding */ extensionRequestHandler;
}

@property (nonatomic, readonly) id principalObject;

- (id)init;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrincipalObject:(id)a0;
- (void)configureDeviceWithName:(NSString *)a0 room:(MTSDeviceSetupRoom *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)fetchRoomsInHome:(MTSDeviceSetupHome *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)pairDeviceInHome:(MTSDeviceSetupHome *)a0 onboardingPayload:(NSString *)a1 uuid:(NSUUID *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)selectThreadNetworkFromScanResults:(NSArray *)a0 completionHandler:(void (^)(MTSThreadNetworkAssociation *, NSError *))a1;
- (void)selectWiFiNetworkFromScanResults:(NSArray *)a0 completionHandler:(void (^)(MTSWiFiNetworkAssociation *, NSError *))a1;
- (void)validateDeviceCredential:(MTSDeviceCredential *)a0 completionHandler:(void (^)(NSError *))a1;

@end
