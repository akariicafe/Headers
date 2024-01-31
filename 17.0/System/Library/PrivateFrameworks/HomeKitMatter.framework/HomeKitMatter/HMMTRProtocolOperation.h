@class HMMTRDeviceTopology, NSString, HAPCharacteristic, HMMTRClusterDescription, NSDictionary, HAPCharacteristicWriteRequestTuple, MTRBaseDevice, MTRDevice;

@interface HMMTRProtocolOperation : NSObject <HMFLogging>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HMMTRClusterDescription *characteristicDescription;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) NSDictionary *clusterIDCharacteristicMap;
@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (retain, nonatomic) MTRBaseDevice *device;
@property (readonly, nonatomic) MTRDevice *matterDevice;
@property (nonatomic) unsigned long long handlingType;
@property (nonatomic) unsigned long long endpoint;
@property (retain) HAPCharacteristicWriteRequestTuple *writePrimaryRequestTuple;
@property (retain) HAPCharacteristicWriteRequestTuple *writeSecondaryRequestTuple;
@property (retain, nonatomic) HMMTRDeviceTopology *topology;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristic:(id)a1 device:(id)a2 clusterIDCharacteristicMap:(id)a3;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristic:(id)a1 device:(id)a2 primaryArgument:(id)a3 clusterIDCharacteristicMap:(id)a4;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristic:(id)a1 matterDevice:(id)a2 clusterIDCharacteristicMap:(id)a3;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristicHandlingType:(unsigned long long)a1 targetCharacteristic:(id)a2 targetValue:(id)a3 device:(id)a4 clusterIDCharacteristicMap:(id)a5;
- (id)initWithOperationOfType:(unsigned long long)a0 characteristicHandlingType:(unsigned long long)a1 targetCharacteristic:(id)a2 targetValue:(id)a3 matterDevice:(id)a4 clusterIDCharacteristicMap:(id)a5;

@end
