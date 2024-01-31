@class NSString, NSArray;

@interface SignpostSupportCompositorInterval : SignpostAnimationSubInterval <SignpostSerializable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *contributingPids;

+ (id)serializationTypeNumber;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)humanReadableType;
- (BOOL)isEqual:(id)a0;
- (id)humanReadableDictionaryRepresentation;
- (id)initWithStartContinuousTime:(unsigned long long)a0 endContinuousTime:(unsigned long long)a1 timebaseRatio:(double)a2 contributingPids:(id)a3;
- (BOOL)isEqualToSignpostSupportCompositorInterval:(id)a0;
- (id)serializeableDictionaryWithShouldRedact:(BOOL)a0;

@end
