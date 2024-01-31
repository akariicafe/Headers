@class SHSignatureGenerator, SHSignature, AVAudioPCMBuffer;

@interface SHSessionDriverSignatureSlot : NSObject

@property (readonly, nonatomic) double maximumSignatureDuration;
@property (nonatomic) long long state;
@property (readonly, nonatomic) SHSignatureGenerator *signatureGenerator;
@property (readonly, nonatomic) SHSignature *generatedSignature;
@property (readonly, nonatomic) AVAudioPCMBuffer *excessAudio;
@property (readonly, nonatomic) SHSignature *signature;
@property (nonatomic) BOOL shouldGenerateSpectralOutput;
@property (readonly, nonatomic) double signatureDuration;

- (void)reset;
- (void).cxx_destruct;
- (long long)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)initWithMaximumSignatureDuration:(double)a0;
- (id)initWithSignatureGenerator:(id)a0;

@end
