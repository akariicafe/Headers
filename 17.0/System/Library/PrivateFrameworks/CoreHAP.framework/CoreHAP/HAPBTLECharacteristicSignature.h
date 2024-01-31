@class NSUUID, NSNumber, HAPCharacteristicMetadata;

@interface HAPBTLECharacteristicSignature : HMFObject

@property (readonly, copy, nonatomic) NSUUID *characteristicType;
@property (readonly, copy, nonatomic) NSNumber *serviceInstanceID;
@property (readonly, copy, nonatomic) NSUUID *serviceType;
@property (readonly, nonatomic) unsigned long long characteristicProperties;
@property (readonly, nonatomic) HAPCharacteristicMetadata *characteristicMetadata;
@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated;

- (void).cxx_destruct;
- (id)initWithCharacteristicType:(id)a0 serviceInstanceID:(id)a1 serviceType:(id)a2 characteristicProperties:(unsigned long long)a3 characteristicMetadata:(id)a4 authenticated:(BOOL)a5;

@end
