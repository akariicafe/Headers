@class AVAudioFormat, AVAudioConverter, AVAudioCompressedBuffer;

@interface VSOpusEncoder : NSObject

@property (copy, nonatomic) id /* block */ opusDataHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) AVAudioFormat *fromFormat;
@property (retain, nonatomic) AVAudioFormat *toFormat;
@property (retain, nonatomic) AVAudioConverter *converter;
@property (retain, nonatomic) AVAudioCompressedBuffer *outputBuffer;
@property (nonatomic) long long opusDataOffset;

- (void).cxx_destruct;
- (void)endEncoding;
- (void)beginEncoding;
- (void)encodeChunk:(id)a0;
- (id)initWithSourceASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;

@end
