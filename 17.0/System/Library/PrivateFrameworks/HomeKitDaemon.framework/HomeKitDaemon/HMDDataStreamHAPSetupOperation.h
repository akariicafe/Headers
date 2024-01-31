@interface HMDDataStreamHAPSetupOperation : HMDDataStreamSetupOperation <HMDDataStreamSetupOperationMTU>

@property (readonly, nonatomic) unsigned long long maxControllerTransportMTU;
@property (nonatomic) long long sessionIdentifier;

+ (id)logCategory;

- (void)startSetup;
- (void)_readRequiredTransportCharacteristics;
- (id)initWithAccessory:(id)a0 queue:(id)a1 logIdentifier:(id)a2 transferManagementService:(id)a3 maxControllerTransportMTU:(unsigned long long)a4 setupOperationReadRequired:(BOOL)a5;
- (void)processTransportSetupResponse:(id)a0;
- (void)setMaxControllerTransportMTU:(unsigned long long)a0;

@end
