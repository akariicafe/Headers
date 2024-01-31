@class NSUUID, NSXPCConnection, __end_, __end_cap_, AUAudioUnit, NSMutableArray, AUParameterTree, NSObject;
@protocol OS_dispatch_queue, OS_voucher, OS_dispatch_source;

@interface AURemoteHost : NSObject <AUAudioUnitXPCProtocol> {
    AUAudioUnit *_audioUnit;
    NSXPCConnection *_remoteHostXPCConnection;
    struct optional<AUOOPRenderingServerUser> { union { char __null_state_; struct AUOOPRenderingServerUser { void /* function */ **_vptr$CAPrint; unsigned int mSerialNum; AUAudioUnit *mAUAudioUnit; id /* block */ mRetainedRenderBlock; id /* block */ mRenderBlock; BOOL mCanProcessInPlace; BOOL mIsV2AudioUnit; long long mMIDIOutBaseSampleTime; struct AUEventSchedule *mEventSchedule; struct AUOOPSharedMemory *mSharedBuffers; struct optional<std::__thread_id> { union { char __null_state_; struct __thread_id { struct _opaque_pthread_t *__id_; } __val_; } ; BOOL __engaged_; } mRenderThreadId; } __val_; } ; BOOL __engaged_; } _renderServerUser;
    NSObject<OS_voucher> *_initializationVoucher;
    AUParameterTree *_cachedParameterTree;
    struct reply_watchdog_factory { BOOL mDebugging; int mDefaultTimeoutMS; struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } mTimeoutHandler; } _replyWatchdogFactory;
    NSObject<OS_dispatch_queue> *_presetMonitoringQueue;
    NSObject<OS_dispatch_source> *_presetFolderWatcher;
    NSMutableArray *_userPresets;
    struct shared_ptr<auoop::WorkgroupMirror> { struct WorkgroupMirror *__ptr_; struct __shared_weak_count *__cntrl_; } _workgroupMirror;
    struct KVOAggregator { struct vector<KVOAggregator::Record, std::allocator<KVOAggregator::Record>> { struct Record *__begin_; struct Record *__end_; struct __compressed_pair<KVOAggregator::Record *, std::allocator<KVOAggregator::Record>> { struct Record *__value_; } __end_cap_; } mRecords; } _kvoAggregator;
    struct vector<AURemoteMessageChannel *, std::allocator<AURemoteMessageChannel *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<AURemoteMessageChannel *__strong *, std::allocator<AURemoteMessageChannel *>> { id *__value_; } x1; } _remoteMessageChannels;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyObserverQueue;
@property (nonatomic) int deferPropertyChangeNotifications;
@property (readonly, nonatomic) NSMutableArray *pendingChangedProperties;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } hostAuditToken;
@property (readonly, nonatomic) struct AudioComponentDescription { unsigned int componentType; unsigned int componentSubType; unsigned int componentManufacturer; unsigned int componentFlags; unsigned int componentFlagsMask; } componentDescription;
@property (readonly, nonatomic) NSUUID *audioUnitUUID;

+ (void)_staticInit;

- (void)reset:(id /* block */)a0;
- (void)close:(id /* block */)a0;
- (id)currentParameterTree;
- (void)loadUserPresets:(id /* block */)a0;
- (void)dealloc;
- (void)profileStateForCable:(unsigned char)a0 channel:(unsigned char)a1 reply:(id /* block */)a2;
- (void)updateWorkgroupMirror:(id)a0 reply:(id /* block */)a1;
- (id)audioUnit;
- (void)saveUserPreset:(id)a0 state:(id)a1 reply:(id /* block */)a2;
- (id)initWithInputItems:(id)a0 xpcConnection:(id)a1 timeOutHandler:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (void)getBusses:(unsigned int)a0 reply:(id /* block */)a1;
- (void)startUserPresetFolderMonitoring;
- (void)valueForKey:(id)a0 reply:(id /* block */)a1;
- (void)getParameter:(unsigned long long)a0 sequenceNumber:(unsigned int)a1 reply:(id /* block */)a2;
- (void)selectViewConfiguration:(id)a0 reply:(id /* block */)a1;
- (id)_getSpeechSynthesisProviderAudioUnit;
- (void)deleteUserPreset:(id)a0 reply:(id /* block */)a1;
- (void)disableProfile:(id)a0 cable:(unsigned char)a1 onChannel:(unsigned char)a2 reply:(id /* block */)a3;
- (void)getParameterTree:(id /* block */)a0;
- (id).cxx_construct;
- (void)parametersForOverviewWithCount:(long long)a0 reply:(id /* block */)a1;
- (id)initWithInputItems:(id)a0 xpcConnection:(id)a1;
- (void)getSpeechVoices:(id /* block */)a0;
- (void)open:(id /* block */)a0;
- (void)cancelSpeechRequest:(id /* block */)a0;
- (void)parameterNode:(id)a0 displayNameWithLength:(long long)a1 reply:(id /* block */)a2;
- (void)updateHostCallbacks:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)enableProfile:(id)a0 cable:(unsigned char)a1 onChannel:(unsigned char)a2 reply:(id /* block */)a3;
- (id)_fetchAndClearPendingChangedProperties;
- (void)setBusCount:(unsigned long long)a0 scope:(unsigned int)a1 reply:(id /* block */)a2;
- (void)setValue:(id)a0 forProperty:(id)a1 propagateError:(BOOL)a2 reply:(id /* block */)a3;
- (void)destroyRenderPipe:(unsigned int)a0 reply:(id /* block */)a1;
- (void)initialize:(unsigned long long)a0 reply:(id /* block */)a1;
- (BOOL)_identifyBus:(id)a0 scope:(unsigned int *)a1 element:(unsigned int *)a2;
- (void)setBusName:(unsigned int)a0 scope:(unsigned int)a1 name:(id)a2 reply:(id /* block */)a3;
- (void)addPropertyObserver:(id)a0 context:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)readHostEntitlement:(id)a0;
- (void)supportedViewConfigurations:(id)a0 reply:(id /* block */)a1;
- (id)initWithInputItems_internal:(id)a0 xpcConnection:(id)a1;
- (void)setBlocks;
- (void)synthesizeSpeechRequest:(id)a0 reply:(id /* block */)a1;
- (void)parameterStringFromValue:(float)a0 currentValue:(BOOL)a1 address:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)removePropertyObserver:(id)a0 context:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)_getBus:(unsigned int)a0 scope:(unsigned int)a1 error:(id *)a2;
- (void)valueForProperty:(id)a0 propagateError:(BOOL)a1 reply:(id /* block */)a2;
- (void)parameterValueFromString:(id)a0 address:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)presetStateFor:(id)a0 reply:(id /* block */)a1;
- (void)uninitialize:(id /* block */)a0;
- (void)getCustomMessageChannelFor:(id)a0 reply:(id /* block */)a1;
- (void)openImpl:(id)a0 reply:(id /* block */)a1;
- (void)syncParameter:(unsigned long long)a0 value:(float)a1 extOriginator:(unsigned long long)a2 hostTime:(unsigned long long)a3 eventType:(unsigned int)a4;
- (void)createRenderPipe:(int)a0 formats:(id)a1 maxFrames:(unsigned int)a2 midiOutSizeHint:(unsigned int)a3 resources:(id)a4 reply:(id /* block */)a5;
- (void)setValue:(id)a0 forKey:(id)a1 reply:(id /* block */)a2;
- (void)setBusFormat:(unsigned int)a0 scope:(unsigned int)a1 format:(id)a2 reply:(id /* block */)a3;

@end
