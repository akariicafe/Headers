@class PHASETapInterfaceImpl, NSArray, PHASETapRegistry, NSMutableDictionary, NSDictionary, PHASEAssetRegistry, PHASEGroupPreset, NSMutableArray, PHASEMedium, PHASEObject;

@interface PHASEEngine : NSObject {
    struct unique_ptr<PHASEEngineImpl, std::default_delete<PHASEEngineImpl>> { struct __compressed_pair<PHASEEngineImpl *, std::default_delete<PHASEEngineImpl>> { struct PHASEEngineImpl *__value_; } __ptr_; } _impl;
    PHASEObject *_rootObject;
    PHASEMedium *_defaultMedium;
    long long _outputSpatializationMode;
    double _unitsPerSecond;
    double _unitsPerMeter;
    NSMutableArray *_internalSoundEvents;
    struct StopWatch<std::chrono::steady_clock> { struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } mStart; } _stopWatch;
    NSMutableDictionary *_groups;
    NSMutableDictionary *_duckers;
    double _maxGainDbSpl;
    long long _experience;
    double _balance;
    PHASETapInterfaceImpl *_tapInterfaceImpl;
}

@property (readonly, nonatomic) void *implementation;
@property (readonly, nonatomic) long long engineMode;
@property (nonatomic) long long defaultPrivateReverbPreset;
@property (readonly, nonatomic) double sampleRate;
@property (nonatomic) double maximumGainDbSpl;
@property (readonly, nonatomic) PHASETapRegistry *tapRegistry;
@property (nonatomic) long long overrideOutputSpatializationMode;
@property (nonatomic) long long sceneClassification;
@property (nonatomic) long long outputSpatializationMode;
@property (readonly, nonatomic) long long renderingState;
@property (readonly, nonatomic) PHASEObject *rootObject;
@property (retain, nonatomic) PHASEMedium *defaultMedium;
@property (nonatomic) long long defaultReverbPreset;
@property (nonatomic) double unitsPerSecond;
@property (nonatomic) double unitsPerMeter;
@property (readonly, nonatomic) PHASEAssetRegistry *assetRegistry;
@property (readonly, copy, nonatomic) NSArray *soundEvents;
@property (readonly, copy, nonatomic) NSDictionary *groups;
@property (readonly, copy, nonatomic) NSArray *duckers;
@property (readonly, nonatomic) PHASEGroupPreset *activeGroupPreset;

+ (id)new;

- (void)pause;
- (id)init;
- (void)dealloc;
- (BOOL)startAndReturnError:(id *)a0;
- (id)initWithUpdateMode:(long long)a0;
- (void)update;
- (id)initWithPlatform:(id)a0;
- (id).cxx_construct;
- (void)destroy;
- (void)stop;
- (void).cxx_destruct;
- (void)setBalance:(double)a0;
- (void)addGroup:(id)a0;
- (void)removeGroup:(id)a0;
- (void)addDucker:(id)a0;
- (void)addSoundEvent:(id)a0;
- (void)clearProfileOverride;
- (long long)defaultReverbPreset;
- (void)gatherExternalStreamDebugInformation:(id /* block */)a0;
- (BOOL)initInternalWithUpdateMode:(long long)a0 engineMode:(long long)a1 platform:(id)a2;
- (id)initWithEngineMode:(long long)a0 updateMode:(long long)a1;
- (id)initWithSampleRate:(double)a0 updateMode:(long long)a1;
- (id)initWithUpdateMode:(long long)a0 engineMode:(long long)a1;
- (id)initWithUpdateMode:(long long)a0 engineMode:(long long)a1 platform:(id)a2;
- (void)removeDucker:(id)a0;
- (void)removeSoundEvent:(id)a0;
- (void)setDefaultReverbPreset:(long long)a0;
- (void)setExperience:(long long)a0;
- (BOOL)setHeadphoneHRIRFile:(id)a0 error:(id *)a1;
- (void)setInternalActiveGroupMixerPreset:(id)a0;
- (void)setProfileOverride:(id)a0 experience:(id)a1 faceCount:(int)a2 balance:(double)a3;
- (void)setProfileOverrideWithName:(id)a0 balance:(double)a1;
- (void)setSpatialCategoryBandCount:(unsigned long long)a0 withName:(id)a1;
- (void)setSpatialCategoryMaxClusterCount:(unsigned long long)a0 withName:(id)a1;
- (void)setSpatialCategoryUpdateRate:(float)a0 withName:(id)a1;

@end
