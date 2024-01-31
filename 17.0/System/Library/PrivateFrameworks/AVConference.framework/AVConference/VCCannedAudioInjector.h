@class NSString, VCCannedAVSync;

@interface VCCannedAudioInjector : VCObject {
    unsigned int _audioSampleCount;
    int _assetType;
    NSString *_cannedMoviePath;
    int _position;
    BOOL _fromBeginning;
    BOOL _playbackComplete;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _samplesMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _samplesConditional;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _outputFormat;
    VCCannedAVSync *_avSync;
    BOOL _isSharedAVSync;
    struct tagVCCannedAudioInjectorConverterProc { struct OpaqueCMBlockBuffer *blockBuffer; struct AudioBufferList { unsigned int mNumberBuffers; struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } mBuffers[1]; } audioBufferList; struct OpaqueCMBlockBuffer *previousBlockBuffer; struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } streamDesc; } _audioConverterProc;
    struct opaqueVCAudioBufferList { } *_sampleBuffer;
    unsigned int _maxLoopCount;
    unsigned int _loopCount;
    unsigned int _samplesInLoop;
    double _loopLength;
    BOOL _forceVoiceActive;
}

@property BOOL isReadyToInject;

+ (id)defaultAudioFileNameWithFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })internalAssetFormatWithFileFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
+ (BOOL)isAudioAvailable:(id)a0 fileName:(id)a1;
+ (int)setupReader:(id)a0 forAsset:(id)a1 assetAudioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2 trackOutput:(id *)a3;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)description;
- (int)allocateSampleBufferWithTrackOutput:(id)a0 assetAudioFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1 sampleBuffer:(struct opaqueVCAudioBufferList **)a2;
- (void)cleanupAudioConverterProc;
- (void)completeSetupWithSampleBuffer:(struct opaqueVCAudioBufferList **)a0;
- (int)loadAudioSamples;
- (int)loadEncodedAudioSamples;
- (int)loadRawAudioSamples;
- (int)loadSamplesFromTrackOutput:(id)a0 audioConverter:(struct OpaqueAudioConverter { } *)a1 audioBuffer:(struct opaqueVCAudioBufferList { } *)a2;
- (void)parseMediaTracksForAsset:(id)a0;
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 audioConverter:(struct OpaqueAudioConverter { } *)a1 audioBuffer:(struct opaqueVCAudioBufferList { } *)a2;
- (void)reportInjectorInitWithPath:(id)a0;
- (void)setAudioConverterProcAudioBufferList:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 blockBuffer:(struct OpaqueCMBlockBuffer { } *)a1;
- (int)setupAVSyncWithStartHostTime:(double)a0 loopLength:(double)a1;
- (BOOL)setupAssetInjectionWithConfig:(id)a0;
- (int)setupAudioConverterWithAssetFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 audioConverter:(struct OpaqueAudioConverter **)a1;
- (int)setupSineInjectionWithConfig:(id)a0;

@end
