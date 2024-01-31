@class AVAudioConverter;

@interface SHAudioConverter : NSObject

@property (retain, nonatomic) AVAudioConverter *converter;

- (void).cxx_destruct;
- (id)audioConverterWithInputFormat:(id)a0 outputFormat:(id)a1;
- (id)supportedPCMBufferFromBuffer:(id)a0 error:(id *)a1;

@end
