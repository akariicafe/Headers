@class NSString, NSError, NSMutableArray;

@interface VSSpeechSynthesisCallbackResult : NSObject {
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _samples;
    struct vector<TTSSynthesizer::Marker, std::allocator<TTSSynthesizer::Marker>> { struct Marker *__begin_; struct Marker *__end_; struct __compressed_pair<TTSSynthesizer::Marker *, std::allocator<TTSSynthesizer::Marker>> { struct Marker *__value_; } __end_cap_; } _markers;
    struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } _phonemeBuffer;
}

@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long stopMark;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *wordTimings;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) unsigned long long samplesProcessed;
@property (nonatomic) unsigned long long lastUTF8Offset;
@property (nonatomic) unsigned long long lastUTF16Offset;
@property (nonatomic) unsigned long long numOfPromptsTriggered;
@property (nonatomic) BOOL neuralDidFallback;
@property (nonatomic) BOOL hasAlignmentStall;
@property (nonatomic) BOOL hasAudioClick;

- (void *)sampleBuffer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;
- (id)phonemes;
- (id)wordTimingInfos;
- (id)pcmData;
- (void *)markerBuffer;
- (id)mutablePCMData;
- (void *)phonemeBuffer;
- (void)processMarkerBuffer;
- (int)synthesisCallback:(int)a0;
- (unsigned long long)utf16OffsetFromUTF8:(unsigned long long)a0;
- (unsigned long long)utf8BytesForChar:(unsigned short)a0;

@end
