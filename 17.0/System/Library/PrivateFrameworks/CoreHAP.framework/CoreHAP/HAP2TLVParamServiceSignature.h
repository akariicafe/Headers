@class NSString, HAP2TLVServicePropertiesWrapper, NSData, HAPTLVUnsignedNumberValue, HAP2TLVParamCharacteristicList;

@interface HAP2TLVParamServiceSignature : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *instanceID;
@property (retain, nonatomic) NSData *serviceType;
@property (retain, nonatomic) HAP2TLVServicePropertiesWrapper *properties;
@property (retain, nonatomic) NSData *linkedServices;
@property (retain, nonatomic) HAP2TLVParamCharacteristicList *characteristicList;
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
- (id)initWithInstanceID:(id)a0 serviceType:(id)a1 properties:(id)a2 linkedServices:(id)a3 characteristicList:(id)a4;
- (id)serializeWithError:(id *)a0;

@end
