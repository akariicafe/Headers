@class SHAudioConverter, SHSpectralOutputConfiguration, SigX, AVAudioFormat;

@interface SHMutableSignature : SHSignature

@property (retain, nonatomic) AVAudioFormat *format;
@property (retain, nonatomic) SigX *sigX;
@property (nonatomic) unsigned int currentFrameCount;
@property (readonly, nonatomic) SHAudioConverter *audioConverter;
@property (retain, nonatomic) SHSpectralOutputConfiguration *spectralOutputConfiguration;
@property (readonly, nonatomic) long long clipStyle;
@property (readonly, nonatomic) double maximumSeconds;

+ (BOOL)supportsSecureCoding;

- (id)dataRepresentation;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (int)signatureType;
- (void).cxx_destruct;
- (double)duration;
- (id)initWithCoder:(id)a0;
- (long long)currentPosition;
- (id)generate:(id *)a0;
- (void)configureWithFormat:(id)a0;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (BOOL)updateRingBufferDuration:(double)a0 error:(id *)a1;
- (id)clipExcessAudio:(id)a0;
- (void)disableSpectralOutput;
- (void)enableSpectralOutputWithConfiguration:(id)a0;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2 error:(id *)a3;
- (id)initWithMaximumSeconds:(double)a0 clipStyle:(long long)a1;
- (double)secondsFromFrameCount:(unsigned int)a0 forFormat:(id)a1;

@end
