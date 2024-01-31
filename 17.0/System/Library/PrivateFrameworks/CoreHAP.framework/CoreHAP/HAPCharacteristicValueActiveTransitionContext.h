@class NSData, NSString, HAPTLVUnsignedNumberValue;

@interface HAPCharacteristicValueActiveTransitionContext : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *HAPInstanceID;
@property (retain, nonatomic) NSData *controllerContext;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *timeElapsedSinceStart;
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
- (id)initWithHAPInstanceID:(id)a0 controllerContext:(id)a1 timeElapsedSinceStart:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
