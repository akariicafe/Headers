@class HAPCharacteristicValueTransitionTypesWrapper, NSString, HAPTLVSignedNumberValue;

@interface HAPSupportedCharacteristicValueTransition : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVSignedNumberValue *HAPInstanceID;
@property (retain, nonatomic) HAPCharacteristicValueTransitionTypesWrapper *transitionTypes;
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
- (id)initWithHAPInstanceID:(id)a0 transitionTypes:(id)a1;
- (id)serializeWithError:(id *)a0;

@end
