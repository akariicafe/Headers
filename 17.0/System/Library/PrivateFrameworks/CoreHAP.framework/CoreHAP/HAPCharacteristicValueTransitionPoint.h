@class NSData, NSString, HAPTLVUnsignedNumberValue;

@interface HAPCharacteristicValueTransitionPoint : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *targetValue;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *targetCompletionDuration;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *startDelayDuration;
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
- (id)initWithTargetValue:(id)a0 targetCompletionDuration:(id)a1 startDelayDuration:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
