@class NSString, UITraitCollection, CUICatalog, CUIMutableCatalog, NSBundle, _UICache, NSMapTable;

@interface _UIAssetManager : NSObject {
    _UICache *_imageCache;
    CUICatalog *_catalog;
    NSString *_assetManagerName;
    long long _preferredIdiom;
    unsigned long long _preferredIdiomSubtype;
    long long _preferredGamut;
    long long _preferredLayoutDirectionTrait;
    NSMapTable *_assetMap;
    CUIMutableCatalog *_runtimeCatalog;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _runtimeCatalogCreationLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _assetMapLock;
    struct { unsigned char isStarkAssetManager : 1; unsigned char isStandaloneAssetManager : 1; unsigned char isUIKitAssetsManager : 1; unsigned char isCoreGlyphsManager : 1; unsigned char isPrivateCoreGlyphsManager : 1; } _assetManagerFlags;
}

@property (retain, nonatomic) _UIAssetManager *nextAssetManager;
@property (nonatomic) double preferredScale;
@property (retain, nonatomic) UITraitCollection *preferredTraitCollection;
@property (readonly, nonatomic) NSString *carFileName;
@property (readonly, nonatomic) CUIMutableCatalog *runtimeCatalog;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic, getter=_managingUIKitAssets) BOOL managingUIKitAssets;
@property (readonly, nonatomic, getter=_managingCoreGlyphs) BOOL managingCoreGlyphs;

+ (id)_assetManagerCache;
+ (void)_saveAssetManager:(id)a0 forBundle:(id)a1 lock:(BOOL)a2;
+ (void)_dropResourceReferencesForURL:(id)a0;
+ (id)sharedRuntimeAssetMap;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)a0 fromFilesInBundle:(id)a1;
+ (void)_clearAllCachedImagesAndAssets;
+ (void)_executeUnitTestWithAssetManagerCache:(id /* block */)a0;
+ (id)assetManagerForBundle:(id)a0;
+ (double)_watchScreenScale;
+ (void)clearSharedRuntimeAssetMapForUnitTests;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)a0 inAssetManager:(id)a1;
+ (long long)_userInterfaceIdiomForDeviceClass:(unsigned long long)a0;
+ (id)sharedRuntimeCatalog;
+ (id)newAssetNamed:(id)a0 fromBundle:(id)a1;

- (BOOL)_imageBelongsToUIKit:(id)a0;
- (id)_insertAssetIntoMap:(id)a0 forName:(id)a1 lock:(BOOL)a2;
- (id)initWithName:(id)a0 inBundle:(id)a1 idiom:(long long)a2;
- (void)dealloc;
- (id)_starkAssetManager;
- (id)_performLookUpObjectForTraitCollection:(id)a0 outNamedLookup:(id *)a1 objectAccessor:(id /* block */)a2;
- (void)_clearCachedResources:(id)a0;
- (void)_disconnectImageAssets;
- (id)imageNamed:(id)a0 configuration:(id)a1 cachingOptions:(unsigned long long)a2 attachCatalogImage:(BOOL)a3;
- (id)_initWithName:(id)a0 inBundle:(id)a1 idiom:(long long)a2 lock:(BOOL)a3 allowMissingCatalog:(BOOL)a4;
- (BOOL)_hasMultipleAppearances;
- (id)_translateAppearanceNameToNative:(id)a0;
- (id)imageNamed:(id)a0 idiom:(long long)a1;
- (id)initManagerWithoutCatalogWithName:(id)a0;
- (id)resolvedColorNamed:(id)a0 withTraitCollection:(id)a1;
- (id)_insertAssetIntoMap:(id)a0 forName:(id)a1;
- (id)_appearanceNames;
- (id)imageNamed:(id)a0 withTrait:(id)a1;
- (BOOL)_isSystemAssetManager;
- (id)description;
- (void)_clearCachedResources;
- (id)imageNamed:(id)a0;
- (id)imageNamed:(id)a0 scale:(double)a1 idiom:(long long)a2 subtype:(unsigned long long)a3;
- (BOOL)_imageBelongsToCoreGlyphs:(id)a0;
- (void)disableCacheFlushing;
- (id)dataNamed:(id)a0;
- (id)_defaultAppearanceNames;
- (void)_performBlockWithAssetLock:(id /* block */)a0;
- (id)_lookUpObjectForTraitCollection:(id)a0 objectAccessor:(id /* block */)a1;
- (id)imageNamed:(id)a0 configuration:(id)a1;
- (id)_assetFromMapForName:(id)a0 lock:(BOOL)a1;
- (id)_assetForName:(id)a0;
- (id)imageNamed:(id)a0 idiom:(long long)a1 subtype:(unsigned long long)a2;
- (id)_assetFromMapForName:(id)a0;
- (id)initWithURL:(id)a0 idiom:(long long)a1 error:(id *)a2;
- (id)colorNamed:(id)a0 withTraitCollection:(id)a1;
- (id)_allImageNames;
- (id)_catalog;
- (BOOL)_imageIsSystemImage:(id)a0;

@end
