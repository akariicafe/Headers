@class AVAudioPCMBuffer, AUPasscodeCodecConfiguration, NSMutableDictionary, NSData, AUAudioUnitBusArray, NSObject, AUAudioUnitBus;
@protocol OS_dispatch_queue;

@interface AUPasscodeEncoder : AUAudioUnit {
    struct unique_ptr<APCEncoderBase, std::default_delete<APCEncoderBase>> { struct __compressed_pair<APCEncoderBase *, std::default_delete<APCEncoderBase>> { struct APCEncoderBase *__value_; } __ptr_; } _kernel;
    struct BufferedInputBus { AUAudioUnitBus *bus; unsigned int maxFrames; AVAudioPCMBuffer *pcmBuffer; struct AudioBufferList *originalAudioBufferList; struct AudioBufferList *mutableAudioBufferList; } _inputBus;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBusArray *_outputBusArray;
    struct map<unsigned int, std::any, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::any>>> { struct __tree<std::__value_type<unsigned int, std::any>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, std::any>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::any>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _apcEncoderConfig;
    long long _assetSampleCount;
    BOOL _outputIsSilenced;
    struct unique_ptr<EOFReachedMessage, std::default_delete<EOFReachedMessage>> { struct __compressed_pair<EOFReachedMessage *, std::default_delete<EOFReachedMessage>> { struct EOFReachedMessage *__value_; } __ptr_; } _eofMessage;
    struct unique_ptr<caulk::concurrent::messenger, std::default_delete<caulk::concurrent::messenger>> { struct __compressed_pair<caulk::concurrent::messenger *, std::default_delete<caulk::concurrent::messenger>> { struct messenger *__value_; } __ptr_; } _rtMessenger;
    unsigned int _fadeOutNumSamples;
    unsigned int _fadeOutSampleIndex;
    unsigned long long _loopNumber;
    unsigned long long _beginningTime;
}

@property (copy, nonatomic) NSData *payload;
@property (retain, nonatomic) AUPasscodeCodecConfiguration *codecConfig;
@property (nonatomic) long long assetLength;
@property (nonatomic) BOOL silenceOutputOnNextAssetEnding;
@property (nonatomic) unsigned long long numLoopsToStopAfter;
@property (nonatomic) float fadeOutTimeSeconds;
@property (nonatomic) BOOL triggerFadeOut;
@property (nonatomic) BOOL embedPasscode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ assetEndedAndSilencedHandler;
@property (retain, nonatomic) NSMutableDictionary *passcodeEmbedInfo;

+ (struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })getAUDesc;
+ (void)registerAU;
+ (id)supportedEncoders;

- (void)reset;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (BOOL)canProcessInPlace;
- (void)deallocateRenderResources;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (void)handleEOFReachedForAsset;

@end
