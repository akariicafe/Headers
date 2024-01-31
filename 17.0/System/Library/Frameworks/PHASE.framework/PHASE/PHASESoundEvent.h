@class PHASEEngine, NSDictionary, AVAudioSession, NSString, PHASESoundPrototype;

@interface PHASESoundEvent : NSObject <MetaParameterValueProtocol> {
    PHASEEngine *_engine;
    BOOL _startCalled;
    PHASESoundPrototype *_protoType;
    struct shared_ptr<Phase::ActionTreeObject> { struct ActionTreeObject *__ptr_; struct __shared_weak_count *__cntrl_; } _actionTreeObject;
    struct vector<Phase::UniqueObjectId, std::allocator<Phase::UniqueObjectId>> { struct UniqueObjectId *__begin_; struct UniqueObjectId *__end_; struct __compressed_pair<Phase::UniqueObjectId *, std::allocator<Phase::UniqueObjectId>> { struct UniqueObjectId *__value_; } __end_cap_; } _submixIds;
    AVAudioSession *_audioSession;
    struct CachedTapInfo { int clientPID; unsigned int audioSessionToken; BOOL isSiri; NSString *sceneIdentifier; } _cachedTapInfo;
}

@property (readonly) AVAudioSession *audioSession;
@property (readonly) BOOL isIndefinite;
@property (readonly) unsigned long long preparedHostTime;
@property (readonly) unsigned long long ioStartHostTime;
@property (readonly) long long renderingState;
@property (readonly) long long prepareState;
@property (readonly, copy) NSDictionary *metaParameters;
@property (readonly, copy) NSDictionary *mixers;
@property (readonly, copy) NSDictionary *pushStreamNodes;
@property (readonly, getter=isIndefinite) BOOL indefinite;

+ (id)new;

- (void)pause;
- (id)init;
- (unsigned long long)hash;
- (BOOL)startAndReturnError:(id *)a0;
- (BOOL)indefinite;
- (void)internalCleanup;
- (id).cxx_construct;
- (BOOL)startWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (void)resume;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)startWithCompletionBlock:(id /* block */)a0;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (BOOL)seekToTime:(double)a0 completionHandler:(id /* block */)a1;
- (BOOL)prepareAndReturnError:(id *)a0;
- (void)prepareWithCompletionBlock:(id /* block */)a0;
- (void)stopAndInvalidate;
- (id)getActionTreeMetaParameterNames;
- (void *)getActionTreeObject;
- (id)initWithEngine:(id)a0 actionTreeRootNode:(id)a1 mixerParameters:(id)a2 outError:(id *)a3;
- (id)initWithEngine:(id)a0 actionTreeRootNode:(id)a1 outError:(id *)a2;
- (id)initWithEngine:(id)a0 actionTreeRootNode:(id)a1 source:(id)a2 listener:(id)a3 outError:(id *)a4;
- (id)initWithEngine:(id)a0 assetIdentifier:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 assetIdentifier:(id)a1 mixerParameters:(id)a2 error:(id *)a3;
- (id)initWithEngine:(id)a0 assetIdentifier:(id)a1 source:(id)a2 listener:(id)a3 error:(id *)a4;
- (id)initWithEngine:(id)a0 registeredActionTreeUID:(id)a1 mixerParameters:(id)a2 outError:(id *)a3;
- (id)initWithEngine:(id)a0 registeredActionTreeUID:(id)a1 outError:(id *)a2;
- (id)initWithEngine:(id)a0 registeredActionTreeUID:(id)a1 source:(id)a2 listener:(id)a3 outError:(id *)a4;
- (id)initWithEngine:(id)a0 registeredSoundEventNodeAsset:(id)a1 mixerParameters:(id)a2 outError:(id *)a3;
- (id)initWithEngine:(id)a0 registeredSoundEventNodeAsset:(id)a1 outError:(id *)a2;
- (id)initWithEngine:(id)a0 registeredSoundEventNodeAsset:(id)a1 source:(id)a2 listener:(id)a3 outError:(id *)a4;
- (id)initWithEngine:(id)a0 registeredSoundEventNodeAssetUID:(id)a1 mixerParameters:(id)a2 error:(id *)a3;
- (id)initWithEngine:(id)a0 registeredSoundEventNodeAssetUID:(id)a1 source:(id)a2 listener:(id)a3 outError:(id *)a4;
- (id)initWithEngine:(id)a0 rootNode:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 rootNode:(id)a1 mixerParameters:(id)a2 error:(id *)a3;
- (id)initWithEngine:(id)a0 rootNode:(id)a1 source:(id)a2 listener:(id)a3 error:(id *)a4;
- (id)initWithEngine:(id)a0 soundPrototype:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 soundPrototype:(id)a1 mixerParameters:(id)a2 error:(id *)a3;
- (id)initWithEngine:(id)a0 soundPrototype:(id)a1 source:(id)a2 listener:(id)a3 error:(id *)a4;
- (id)initWithEngine:(id)a0 soundPrototype:(id)a1 source:(id)a2 listener:(id)a3 outError:(id *)a4;
- (id)internalGetActionTreeMetaParameters;
- (id)internalGetActionTreeMixersWithMixerParameters:(id)a0 actionTreeAsset:(const void *)a1 outError:(id *)a2;
- (id)internalGetActionTreePushStreamNodes:(id)a0;
- (BOOL)internalPrepareActionTreeWithCompletionBlock:(id /* block */)a0;
- (BOOL)internalStartActionTreeWithCompletionBlock:(id /* block */)a0;
- (void)prepareWithSessionIOBinding:(id)a0 completion:(id /* block */)a1;
- (void)registerTapSources;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;
- (BOOL)seekToTime:(double)a0 completionBlock:(id /* block */)a1;
- (void)setMetaParameter:(id)a0 value:(id)a1;
- (void)setMetaParameter:(id)a0 value:(double)a1 withTimeInterval:(double)a2;
- (void)setPrepareState:(long long)a0;
- (void)setRenderingState:(long long)a0;
- (void)stopAndDestroy;
- (void)unregisterTapSources;
- (BOOL)validateAudioSessionWithError:(id *)a0;

@end
