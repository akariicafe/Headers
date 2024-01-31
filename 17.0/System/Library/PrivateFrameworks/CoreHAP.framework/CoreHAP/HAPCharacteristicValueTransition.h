@class HAPCharacteristicValueTransitionEndBehaviorWrapper, NSString, NSData, HAPTLVUnsignedNumberValue, HAPCharacteristicValueLinearTransition, HAPCharacteristicValueLinearDerivedTransition;

@interface HAPCharacteristicValueTransition : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *HAPInstanceID;
@property (retain, nonatomic) NSData *controllerContext;
@property (retain, nonatomic) HAPCharacteristicValueTransitionEndBehaviorWrapper *endBehavior;
@property (retain, nonatomic) HAPCharacteristicValueLinearTransition *linearTransition;
@property (retain, nonatomic) HAPCharacteristicValueLinearDerivedTransition *linearDerivedTransition;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *valueUpdateTimeInterval;
@property (retain, nonatomic) NSData *notifyValueChangeThreshold;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *notifyTimeIntervalThreshold;
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
- (id)initWithHAPInstanceID:(id)a0 controllerContext:(id)a1 endBehavior:(id)a2 linearTransition:(id)a3 linearDerivedTransition:(id)a4 valueUpdateTimeInterval:(id)a5 notifyValueChangeThreshold:(id)a6 notifyTimeIntervalThreshold:(id)a7;
- (id)serializeWithError:(id *)a0;

@end
