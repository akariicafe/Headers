@class NSData, HAPSecuritySessionEncryption, HMFNetAddress;

@interface HMDDataStreamTCPSetupOperation : HMDDataStreamSetupOperation

@property (retain, nonatomic) HMFNetAddress *remoteNetAddress;
@property (readonly, nonatomic) NSData *controllerKeySalt;
@property (retain, nonatomic) NSData *accessoryKeySalt;
@property (nonatomic) long long remoteTcpPort;
@property (retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption;

+ (id)logCategory;

- (void)startSetup;
- (BOOL)_isComplete;
- (void).cxx_destruct;
- (id)_createTCPTransport;
- (void)_finishStreamTransport;
- (id)_fullKeySalt;
- (void)_generateStreamKeys;
- (id)initWithAccessory:(id)a0 queue:(id)a1 logIdentifier:(id)a2 transferManagementService:(id)a3;
- (void)processTransportSetupResponse:(id)a0;

@end
