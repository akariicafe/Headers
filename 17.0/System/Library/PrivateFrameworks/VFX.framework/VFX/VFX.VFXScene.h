@class NSArray, NSBundle, NSURL, NSObject;

@interface VFX.VFXScene : NSObject {
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ loadOptions;
    void /* unknown type, empty encoding */ loader;
    void /* unknown type, empty encoding */ templateRemapTable;
    void /* unknown type, empty encoding */ templateWasPrepared;
    void /* unknown type, empty encoding */ effects;
    void /* unknown type, empty encoding */ __version;
    void /* unknown type, empty encoding */ isInsideRE;
    void /* unknown type, empty encoding */ isREAssetScene;
    void /* unknown type, empty encoding */ transientDrawCall;
    void /* unknown type, empty encoding */ hasSharedEntityManager;
    void /* unknown type, empty encoding */ metalBinaryArchiveURLs;
    void /* unknown type, empty encoding */ recordedMetalBinaryArchiveURL;
}

@property (class, nonatomic, readonly) NSBundle *vfxAssetsFrameworkBundle;
@property (class, nonatomic, copy) NSArray *builtinEffectIdentifiers;

@property (nonatomic, readonly) NSObject *assetManager;
@property (nonatomic, copy) NSArray *effects;
@property (nonatomic, readonly) long long version;
@property (nonatomic, copy) NSArray *metalBinaryArchiveURLs;
@property (nonatomic, copy) NSURL *recordedMetalBinaryArchiveURL;
@property (nonatomic) void /* unknown type, empty encoding */ internalPixelFormat;
@property (nonatomic) void /* unknown type, empty encoding */ internalPixelFormatDepth;
@property (nonatomic) void /* unknown type, empty encoding */ useGammaBlending;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isFrozen;
@property (nonatomic) float timeScale;
@property (nonatomic) BOOL allowsCameraControl;
@property (nonatomic) BOOL showStatistics;
@property (nonatomic, readonly) NSArray *bindings;

+ (void)applicationWillEnterForeground;
+ (void)applicationDidEnterBackground;
+ (id)vfxLibraryURLFor:(id)a0;

- (long long)entityWithTag:(id)a0;
- (void)initializeAssetManagerWithBundleURL:(id)a0;
- (id)textureForEntity:(long long)a0;
- (void)clearCaches;
- (void)performTransaction:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isEnabled:(id)a0;
- (void).cxx_destruct;
- (void)restart;
- (void)prepare;
- (id)initWithOptions:(id)a0;
- (id)initWithIdentifier:(id)a0 error:(id *)a1;
- (id)addEffectFrom:(id)a0 error:(id *)a1;
- (id)tryAddEffectWithRootIdentifier:(id)a0;
- (id)addEffectWithEffectID:(int)a0;
- (void)withPointerToValueAtPath:(id)a0 block:(id /* block */)a1;
- (id)addEffectFromTemplate:(id)a0;
- (id)bindingOf:(id)a0 named:(id)a1;
- (id)effectWith:(id)a0;
- (id)firstBindingWithName:(id)a0;
- (id)initForEngineNamed:(id)a0;
- (id)initWithContentsOf:(id)a0 error:(id *)a1;
- (id)initWithContentsOf:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)load:(id)a0 isAuthoring:(BOOL)a1 error:(id *)a2;
- (id)makeDefaultCamera;
- (id)parameterOf:(id)a0 named:(id)a1;
- (void)removeAllEffects;
- (void)removeEffect:(id)a0;
- (void)setEnabled:(id)a0 enabled:(BOOL)a1;
- (void)setParameterOf:(id)a0 named:(id)a1 :(id)a2;
- (void)setValue:(id)a0 atPath:(id)a1;
- (void)updateWithDeltaTime:(double)a0;
- (id)valueAtPath:(id)a0;
- (void)withPointerToParameterOf:(id)a0 named:(id)a1 block:(id /* block */)a2;

@end
