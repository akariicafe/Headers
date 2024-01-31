@class NSLock, ServerSpeechContext, TTSVoiceResourceAsset, TTSVocalizer, NSMutableArray, NSObject, TTSTimer, TTSSpeechServer;
@protocol OS_dispatch_queue;

@interface TTSSpeechServerInstance : NSObject

@property (retain, nonatomic) TTSTimer *wordCallbackTimer;
@property (nonatomic) unsigned long long synthesizerId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mobileAssetWorkQueue;
@property (retain, nonatomic) NSLock *speechLock;
@property (retain, nonatomic) NSMutableArray *speechRequestQueue;
@property (nonatomic) BOOL speechActive;
@property (nonatomic) unsigned char speechThreadActive;
@property (nonatomic) struct __CFRunLoop { } *speechThreadRunLoop;
@property (nonatomic) struct __CFRunLoopSource { } *speechActivitySignal;
@property (retain, nonatomic) ServerSpeechContext *speechActiveContext;
@property (nonatomic) BOOL newVoiceInstalled;
@property (nonatomic) BOOL speechThreadPriorityIsHigh;
@property (nonatomic) BOOL shouldTerminateThread;
@property (nonatomic) BOOL didTerminateThread;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speechTerminationQueue;
@property (nonatomic) TTSSpeechServer *speechService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) TTSVocalizer *vocalizer;
@property (copy, nonatomic) id /* block */ unitTestMarkerProcessingCallback;
@property (retain) TTSVoiceResourceAsset *queuedSiriVoiceResourceToLoad;

- (id)init;
- (oneway void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (void)dealloc;
- (struct __CFArray { } *)loadedVoiceResources;
- (oneway void)startSpeechRequest:(id)a0;
- (oneway void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (void).cxx_destruct;
- (oneway void)getSpeechIsActiveForRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)continueSpeechRequest:(id)a0;
- (unsigned char)_activeRequestShouldContinue:(id)a0;
- (unsigned char)_activeRequestShouldPauseImmediately:(id)a0;
- (unsigned char)_activeRequestShouldStopAtAnyMark:(id)a0;
- (unsigned char)_activeRequestShouldStopImmediately:(id)a0;
- (void)_appendSpeechRequestAndStart:(id)a0;
- (double)_computeMarkerDelayForByteOffset:(unsigned int)a0 andContext:(id)a1;
- (BOOL)_defaultVoiceIsFallback;
- (BOOL)_footprintOrVoiceNameHasChanged:(id)a0;
- (void)_handleSpeechThread;
- (void)_initializeSpeech:(id)a0;
- (void)_initializeSpeechEngine:(id)a0;
- (BOOL)_languageCodeHasChanged:(id)a0 oldLanguage:(id)a1;
- (void)_loadVoiceResource:(id)a0 voiceResource:(id)a1;
- (unsigned char)_needsParameterChange:(id)a0 lock:(unsigned char)a1 rate:(float *)a2 pitch:(float *)a3 volume:(float *)a4 footprint:(long long *)a5 voiceType:(long long *)a6;
- (void)_newVoiceInstalled;
- (void)_processCurrentRequest:(id)a0;
- (unsigned char)_setActiveRequestActionForMark:(long long)a0 clientRequest:(id)a1 markType:(long long)a2;
- (void)_setParameters:(id)a0 rate:(float)a1 pitch:(float)a2 volume:(float)a3 footprint:(long long)a4;
- (unsigned char)_shouldContinueSpeechGivenMark:(id)a0 markType:(long long)a1 blockIfPaused:(unsigned char)a2;
- (void)_speechThreadSignal;
- (id)_speechVocalizerPlaybackDataProviderWithVocalizer:(id)a0 playback:(struct __TTSPlayback { } *)a1 inContext:(void *)a2;
- (void)_startSpeechThread;
- (void)_terminateThread;
- (id)_ttSSpeechServerCopyVoiceInfoForLanguage:(id)a0 voiceType:(long long)a1 queryingMobileAssets:(BOOL)a2;
- (void)_uninitializeSpeech:(id)a0;
- (BOOL)_voiceTypeHasChanged:(id)a0;
- (void)processGenericMarkerWithByteOffset:(unsigned int)a0 name:(id)a1 context:(id)a2;
- (void)processPhonemeMarkerWithByteOffset:(unsigned int)a0 phoneme:(id)a1 alphabet:(long long)a2 context:(id)a3;
- (void)processWordMarkerWithByteOffset:(unsigned int)a0 markerPosition:(unsigned int)a1 markerLength:(unsigned int)a2 context:(id)a3 secondPass:(BOOL)a4;
- (void)terminateSpeechThread;

@end
