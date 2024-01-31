@class NSUUID, HAPCharacteristicMetadata, NSNumber;

@interface HAPBLECharacteristicCache : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long characteristicProperties;
@property (retain, nonatomic) HAPCharacteristicMetadata *characteristicMetadata;
@property (readonly, nonatomic) NSUUID *characteristicUUID;
@property (readonly, nonatomic) NSNumber *characteristicInstanceId;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCharacteristicUUID:(id)a0 instanceId:(id)a1 characteristicProperties:(unsigned long long)a2 characteristicMetadata:(id)a3;
- (void)updateWithCharacteristic:(id)a0;

@end
