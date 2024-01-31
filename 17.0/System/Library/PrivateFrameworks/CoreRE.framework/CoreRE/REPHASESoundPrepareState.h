@class AUAudioUnit, PHASEDirectivityModelParameters, NSUUID, AVAudioSession, AVAudioChannelLayout, PHASEGroup, AVAudioFormat;

@interface REPHASESoundPrepareState : NSObject {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _hasSuccesfullyCompleted;
}

@property (retain, nonatomic) AVAudioSession *audioSession;
@property (nonatomic) unsigned long long playbackToken;
@property (nonatomic) unsigned long long sceneID;
@property (nonatomic) unsigned long long entityID;
@property (nonatomic) long long assetType;
@property (nonatomic) unsigned long long assetID;
@property (nonatomic) struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } fileGroupAssetIDs;
@property (nonatomic) int loopCount;
@property (nonatomic) unsigned char inputMode;
@property (nonatomic) BOOL randomizeStart;
@property (retain, nonatomic) AVAudioFormat *audioFormat;
@property (retain, nonatomic) PHASEDirectivityModelParameters *directivityOverride;
@property (retain, nonatomic) PHASEDirectivityModelParameters *humanDirectivity;
@property (nonatomic) unsigned int layoutTag;
@property (readonly, nonatomic) AVAudioChannelLayout *channelLayout;
@property (nonatomic) unsigned long long mixGroupID;
@property (retain, nonatomic) PHASEGroup *mixGroup;
@property (retain, nonatomic) AUAudioUnit *audioUnit;
@property (retain, nonatomic) NSUUID *externalStreamUUID;
@property (nonatomic) float directivityFocus;
@property (nonatomic) float directivitySphericalCapDiameter;
@property (nonatomic) float directivitySphericalCapOpeningAngle;
@property (nonatomic) int directivityMode;
@property (copy, nonatomic) id /* block */ playbackStateChangeHandler;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithCompletion:(id /* block */)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
