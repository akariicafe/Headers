@class NSString, HAP2TLVCharacteristicPropertiesWrapper, NSData, HAPTLVUnsignedNumberValue;

@interface HAP2TLVParamCharacteristicSignature : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *instanceID;
@property (retain, nonatomic) NSData *characteristicType;
@property (retain, nonatomic) HAP2TLVCharacteristicPropertiesWrapper *characteristicProperties;
@property (retain, nonatomic) NSString *userDescription;
@property (retain, nonatomic) NSData *bluetoothFormat;
@property (retain, nonatomic) NSData *validRange;
@property (retain, nonatomic) NSData *stepValue;
@property (retain, nonatomic) NSData *validValues;
@property (retain, nonatomic) NSData *validValuesRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithInstanceID:(id)a0 characteristicType:(id)a1 characteristicProperties:(id)a2 userDescription:(id)a3 bluetoothFormat:(id)a4 validRange:(id)a5 stepValue:(id)a6 validValues:(id)a7 validValuesRange:(id)a8;
- (id)serializeWithError:(id *)a0;

@end
