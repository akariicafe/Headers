@class NSData, NSString, HAPTLVUnsignedNumberValue;

@interface HAPCharacteristicValueTransitionControllerContext : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *identifier;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *startTime;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *transitionChecksum;
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
- (id)initWithIdentifier:(id)a0 startTime:(id)a1 transitionChecksum:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
