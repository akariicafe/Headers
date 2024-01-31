@class VCAudioRelayIOControllerSettings, NSString, NSDictionary, VCAudioRelay, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl> {
    unsigned int _relayType;
    unsigned int _relayIOType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_allClients;
    NSMutableArray *_startingIOClients;
    VCAudioRelay *_relay;
    struct _VCAudioIOControllerIOState { BOOL timestampInitialized; double lastHostTime; unsigned int lastInputTimestamp; unsigned int lastInputSampleCount; double lastBlockSize; unsigned long long lastTimestamp; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } clientIOList; struct opaqueCMSimpleQueue *eventQueue; struct opaqueVCAudioLimiter *audioLimiter; struct opaqueVCAudioBufferList *secondarySampleBuffer; struct opaqueVCAudioBufferList *interruptMixDownSampleBuffer; unsigned int audioSessionId; unsigned long long channelStateBitmap; unsigned long long prevUsedChannelStateBitmap; char logPrefix[40]; BOOL isMuted; BOOL isVoiceActivityEnabled; BOOL isMediaPriorityEnabled; double forcedMediaPriorityLastUpdateTime; BOOL isForcedMediaPriorityEnabled; unsigned char forcedMediaPriority; struct opaqueVCVoiceDetector *voiceDetector; } _sinkData;
    struct _VCAudioIOControllerIOState { BOOL timestampInitialized; double lastHostTime; unsigned int lastInputTimestamp; unsigned int lastInputSampleCount; double lastBlockSize; unsigned long long lastTimestamp; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } clientIOList; struct opaqueCMSimpleQueue *eventQueue; struct opaqueVCAudioLimiter *audioLimiter; struct opaqueVCAudioBufferList *secondarySampleBuffer; struct opaqueVCAudioBufferList *interruptMixDownSampleBuffer; unsigned int audioSessionId; unsigned long long channelStateBitmap; unsigned long long prevUsedChannelStateBitmap; char logPrefix[40]; BOOL isMuted; BOOL isVoiceActivityEnabled; BOOL isMediaPriorityEnabled; double forcedMediaPriorityLastUpdateTime; BOOL isForcedMediaPriorityEnabled; unsigned char forcedMediaPriority; struct opaqueVCVoiceDetector *voiceDetector; } _sourceData;
    VCAudioRelayIOControllerSettings *_currentSettings;
}

@property (readonly, nonatomic) BOOL supportsVoiceActivityDetection;
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeStateStrings;
+ (id)sharedInstanceClientFacing;
+ (id)sharedInstanceRemoteFacing;
+ (id)sharedInstanceSafeViewClientFacing;
+ (id)sharedInstanceSafeViewRemoteFacing;

- (BOOL)addClient:(id)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)removeClient:(id)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)channelsPerFrame;
- (void)_cleanupDeadClients;
- (void)addStartingClient:(id)a0 controllerSettings:(id)a1;
- (unsigned int)computeSamplePerFrameWithControllerSampleRate:(unsigned int)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)flushEventQueue:(struct opaqueCMSimpleQueue { } *)a0;
- (BOOL)handleTransitionPrepareToStarting;
- (id)initWithRelayType:(unsigned int)a0 relayIOType:(unsigned int)a1;
- (void)loadRelay;
- (id)newControllerSettingsWithNewClient:(id)a0;
- (id)newRelayIOWithCompletionHandler:(id /* block */)a0;
- (void)processEventQueue:(struct AudioEventQueue_t { } *)a0 clientList:(id)a1;
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; unsigned int x3; unsigned int x4; unsigned int x5; struct opaqueVCAudioBufferList *x6; BOOL x7; BOOL x8; } *)a0 controllerIO:(struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; BOOL x15; BOOL x16; BOOL x17; double x18; BOOL x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)a1;
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; BOOL x15; BOOL x16; BOOL x17; double x18; BOOL x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)a0;
- (void)resetAudioTimestamps;
- (struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; BOOL x15; BOOL x16; BOOL x17; double x18; BOOL x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)sinkIO;
- (struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; BOOL x15; BOOL x16; BOOL x17; double x18; BOOL x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)sourceIO;
- (void)startClient:(id)a0;
- (BOOL)startRelayIO:(id)a0;
- (BOOL)stateIdleWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (BOOL)statePrepareWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (BOOL)stateRunningWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (BOOL)stateStartingWithControllerSettings:(id)a0 client:(id)a1 newState:(unsigned int *)a2;
- (void)stopClient:(id)a0;
- (void)unloadRelay;
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; unsigned int x3; unsigned int x4; unsigned int x5; struct opaqueVCAudioBufferList *x6; BOOL x7; BOOL x8; } *)a0 controllerIO:(struct _VCAudioIOControllerIOState { BOOL x0; double x1; unsigned int x2; unsigned int x3; double x4; unsigned long long x5; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x6; struct opaqueCMSimpleQueue *x7; struct opaqueVCAudioLimiter *x8; struct opaqueVCAudioBufferList *x9; struct opaqueVCAudioBufferList *x10; unsigned int x11; unsigned long long x12; unsigned long long x13; char x14[40]; BOOL x15; BOOL x16; BOOL x17; double x18; BOOL x19; unsigned char x20; struct opaqueVCVoiceDetector *x21; } *)a1;
- (void)updateClient:(id)a0 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; } *)a1;
- (BOOL)updateStateWithClient:(id)a0;

@end
