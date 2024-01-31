@interface SiriTTSProsodyProperties : NSObject <NSSecureCoding>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ neuralSentencePitch;
@property (nonatomic) void /* unknown type, empty encoding */ neuralSentencePitchRange;
@property (nonatomic) void /* unknown type, empty encoding */ neuralSentenceDuration;
@property (nonatomic) void /* unknown type, empty encoding */ neuralSentenceEnergy;
@property (nonatomic) void /* unknown type, empty encoding */ neuralSentenceTilt;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
