@class PHASEEngine, PHASEObject, NSMutableDictionary, NSURL, PHASENumberMetaParameterDefinition, PHASECardioidDirectivityModelParameters;

@interface REPHASEContext : NSObject {
    BOOL _testNilEngine;
    double _referenceGainDBSPL;
    PHASEEngine *_engine;
    int _mixerDefNameCounter;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _stoppedAndDestroyed;
    struct unique_ptr<re::HashTable<unsigned long long, REPHASEAudioScene *>, std::function<void (re::HashTable<unsigned long long, REPHASEAudioScene *> *)>> { struct __compressed_pair<re::HashTable<unsigned long long, REPHASEAudioScene *> *, std::function<void (re::HashTable<unsigned long long, REPHASEAudioScene *> *)>> { void *__value_; struct function<void (re::HashTable<unsigned long long, REPHASEAudioScene *> *)> { struct __value_func<void (re::HashTable<unsigned long long, REPHASEAudioScene *> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value_; } __ptr_; } _scenes;
    struct unique_ptr<re::HashTable<unsigned long long, PHASEShape *>, std::function<void (re::HashTable<unsigned long long, PHASEShape *> *)>> { struct __compressed_pair<re::HashTable<unsigned long long, PHASEShape *> *, std::function<void (re::HashTable<unsigned long long, PHASEShape *> *)>> { void *__value_; struct function<void (re::HashTable<unsigned long long, PHASEShape *> *)> { struct __value_func<void (re::HashTable<unsigned long long, PHASEShape *> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value_; } __ptr_; } _shapes;
    struct unique_ptr<re::HashTable<unsigned long long, REPHASESoundEvent *>, std::function<void (re::HashTable<unsigned long long, REPHASESoundEvent *> *)>> { struct __compressed_pair<re::HashTable<unsigned long long, REPHASESoundEvent *> *, std::function<void (re::HashTable<unsigned long long, REPHASESoundEvent *> *)>> { void *__value_; struct function<void (re::HashTable<unsigned long long, REPHASESoundEvent *> *)> { struct __value_func<void (re::HashTable<unsigned long long, REPHASESoundEvent *> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value_; } __ptr_; } _soundEvents;
    struct UnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } _soundEventsMutex;
    struct unique_ptr<re::HashTable<unsigned long long, bool>, std::function<void (re::HashTable<unsigned long long, bool> *)>> { struct __compressed_pair<re::HashTable<unsigned long long, bool> *, std::function<void (re::HashTable<unsigned long long, bool> *)>> { void *__value_; struct function<void (re::HashTable<unsigned long long, bool> *)> { struct __value_func<void (re::HashTable<unsigned long long, bool> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value_; } __ptr_; } _soundEventsPreparing;
    struct UnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } _soundEventsPreparingMutex;
    struct unique_ptr<re::HashTable<unsigned long long, REPHASESoundAsset>, std::function<void (re::HashTable<unsigned long long, REPHASESoundAsset> *)>> { struct __compressed_pair<re::HashTable<unsigned long long, REPHASESoundAsset> *, std::function<void (re::HashTable<unsigned long long, REPHASESoundAsset> *)>> { void *__value_; struct function<void (re::HashTable<unsigned long long, REPHASESoundAsset> *)> { struct __value_func<void (re::HashTable<unsigned long long, REPHASESoundAsset> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value_; } __ptr_; } _audioAssets;
    struct UnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } _audioAssetsMutex;
    struct UnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } _audioEngineMutex;
    PHASEObject *_sharedSimulationWorldRootObject;
}

@property (readonly) PHASEObject *sharedSimulationWorldRootObject;
@property (readonly) PHASEEngine *engine;
@property (readonly) PHASEEngine *maybeEngine;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) unsigned int maxBufferSize;
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *gainLinearParamDefinition;
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *rateParamDefinition;
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *reverbSendParamDefinition;
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *directSendParamDefinition;
@property (readonly, nonatomic) PHASECardioidDirectivityModelParameters *humanDirectivity;
@property (readonly, nonatomic) NSMutableDictionary *mixGroups;
@property (nonatomic) long long reverbPreset;
@property (nonatomic) long long spaceBlendTargetReverbPreset;
@property (retain, nonatomic) NSURL *customHRIRURL;
@property (nonatomic) BOOL shouldPostNotificationWhenPHASESoundEventCreated;
@property (nonatomic) BOOL automaticUpdate;
@property (readonly, nonatomic) BOOL engineIsConfiguredForAutomaticUpdate;

- (void *)scenes;
- (void)update;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeEntity:(unsigned long long)a0;
- (void *)shapes;
- (void)prepare:(id)a0;
- (void *)soundEvents;
- (void)applyCustomHRIR;
- (id)initWithSampleRate:(double)a0 maxBufferSize:(unsigned int)a1 referenceGain:(double)a2 automaticUpdate:(BOOL)a3;
- (id)phaseGroupWithSceneID:(unsigned long long)a0 playbackHostConnectionIdentifier:(unsigned long long)a1 groupID:(unsigned long long)a2;
- (void)removeEventFor:(unsigned long long)a0;
- (void)stopAllAndReset;
- (void)addAudioAssetID:(unsigned long long)a0 asset:(id)a1 configuration:(const struct AudioAssetConfiguration { BOOL x0; id x1; int x2; int x3; double x4; } *)a2;
- (void)addEvent:(id)a0 forToken:(unsigned long long)a1;
- (float)allowableUpwardGainForAudioAssetID:(unsigned long long)a0;
- (void)applyReverbPreset;
- (id)baseMixerDefinitionWith:(id)a0;
- (void)createPendingListenersIfReady;
- (id)createSamplerDefinitionForToken:(unsigned long long)a0;
- (double)doubleFromPlistValue:(id)a0 defaultValue:(double)a1;
- (BOOL)engineShouldBeRunning;
- (BOOL)eventBeingPrepared:(unsigned long long)a0;
- (id)eventFor:(unsigned long long)a0;
- (BOOL)getConfigurationForAudioAssetID:(unsigned long long)a0 configuration:(struct AudioAssetConfiguration { BOOL x0; id x1; int x2; int x3; double x4; } *)a1;
- (id)groupUDIDWithSceneID:(unsigned long long)a0 playbackHostConnectionIdentifier:(unsigned long long)a1 groupID:(unsigned long long)a2;
- (void)loadHumanDirectivityPlistFromURL:(id)a0;
- (id)mixerParametersForPrepareState:(id)a0 source:(id)a1 listener:(id)a2 mixerIdentifiers:(id)a3;
- (id)phaseIDForAssetID:(unsigned long long)a0;
- (void)postDidCreateSoundEventNotificationWithSource:(id)a0 mixGroupID:(unsigned long long)a1;
- (void)removeAudioAssetID:(unsigned long long)a0;
- (id)samplerDefForFileAsset:(unsigned long long)a0 with:(id)a1;
- (id)sceneForID:(unsigned long long)a0;
- (void)setPreparing:(BOOL)a0 forToken:(unsigned long long)a1;
- (void *)soundEventsPreparing;
- (id)spatialMixerDefinition:(id)a0;
- (void)testNilEngine;

@end
