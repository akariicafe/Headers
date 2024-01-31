@class _UIFeedback;

@interface _UIFeedbackParameters : NSObject <NSCopying>

@property (weak, nonatomic) _UIFeedback *feedback;
@property (weak, nonatomic) _UIFeedbackParameters *parentParameters;
@property (readonly, nonatomic, getter=_isAudio) BOOL audio;
@property (readonly, nonatomic, getter=_effectiveVolume) float effectiveVolume;
@property (nonatomic) float volume;
@property (nonatomic) float rate;
@property (nonatomic) float transposition;
@property (nonatomic) float attackTime;
@property (nonatomic) float decayTime;
@property (nonatomic) float releaseTime;

+ (id)parameters;

- (id)initWithDictionaryRepresentation:(id)a0 feedback:(id)a1;
- (void)_updateParameterWithKey:(id)a0;
- (id)initWithFeedback:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (float)_effectiveValueForParameterWithKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
