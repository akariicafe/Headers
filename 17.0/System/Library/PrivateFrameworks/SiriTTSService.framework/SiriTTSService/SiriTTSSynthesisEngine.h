@class NSLock, NSString;

@interface SiriTTSSynthesisEngine : NSObject

@property (nonatomic) void *synthesizer;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, nonatomic) NSString *voicePath;
@property (readonly, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) NSString *tag;

+ (BOOL)hasPhaticResponsesWithVoicePath:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)unloadResource:(id)a0;
- (BOOL)_preheatWithError:(id *)a0;
- (BOOL)_unlockedLoadResourceWithPath:(id)a0 error:(id *)a1;
- (BOOL)_unlockedSynthesize:(id)a0 error:(id *)a1;
- (void)_unlockedUnloadResource:(id)a0;
- (id)initWithVoicePath:(id)a0 resourcePath:(id)a1 error:(id *)a2;
- (BOOL)loadResourceWithPath:(id)a0 error:(id *)a1;
- (BOOL)preheatWithError:(id *)a0;
- (void)stopSynthesis;
- (BOOL)synthesize:(id)a0 error:(id *)a1;

@end
