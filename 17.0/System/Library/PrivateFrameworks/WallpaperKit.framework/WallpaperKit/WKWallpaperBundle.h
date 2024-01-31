@class NSString, UIImage, NSURL, NAIdentity, NADescriptionBuilder, NSMutableDictionary, WKWallpaperAdjustmentTraits, NSNumber;

@interface WKWallpaperBundle : NSObject <NAIdentifiable, WKDescribable, WKWallpaperRepresenting>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (retain, nonatomic) NSMutableDictionary *_wallpaperAssetLookup;
@property (retain, nonatomic) UIImage *_thumbnailImage;
@property (nonatomic) BOOL _hasCalculatedSupportsSerialization;
@property (nonatomic) BOOL _supportsSerialization;
@property (copy, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *family;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NADescriptionBuilder *wk_descriptionBuilder;
@property (readonly, nonatomic) id /* block */ descriptionBuilderBlock;
@property (readonly, copy, nonatomic) NSNumber *contentVersion;
@property (readonly, nonatomic, getter=isAppearanceAware) BOOL appearanceAware;
@property (readonly, nonatomic, getter=hasDistinctWallpapersForLocations) BOOL distinctWallpapersForLocations;
@property (readonly, copy, nonatomic) NSString *identifierString;
@property (readonly, copy, nonatomic) NSString *logicalScreenClass;
@property (readonly, nonatomic) BOOL disableParallax;
@property (readonly, nonatomic, getter=isOffloaded) BOOL offloaded;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, nonatomic) BOOL disableModifyingLegibilityBlur;
@property (readonly, nonatomic) WKWallpaperAdjustmentTraits *adjustmentTraits;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) UIImage *thumbnailImage;

+ (BOOL)shouldLoadWallpaperBundleAtURL:(id)a0;
+ (id)_createWallpaperBundleInDirectory:(id)a0 version:(long long)a1 identifier:(long long)a2 name:(id)a3 family:(id)a4 disableParallax:(BOOL)a5 isOffloaded:(BOOL)a6 logicalScreenClass:(id)a7 thumbnailImageURL:(id)a8 adjustmentTraits:(id)a9 assetMapping:(id)a10;

- (id)initWithURL:(id)a0;
- (id)_thumbnailWallpaperWithMetadataDictionary:(id)a0 representedType:(unsigned long long)a1 wallpaperAppearance:(id)a2;
- (id)_layeredThumbnailWallpaperWithMetadataDictionary:(id)a0 representedType:(unsigned long long)a1 wallpaperAppearance:(id)a2;
- (id)valueBasedWallpaperForLocation:(id)a0;
- (id)_processCommonWallpaperMetadataWithDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (id)_processCommonFileBackedWallpaperMetadataWithDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (void)_loadBundle;
- (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)a0;
- (id)_layeredStillWallpaperWithMetadataDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (id)thumbnailRepresentableForLocation:(id)a0 andAppearance:(id)a1;
- (id)thumbnailRepresentableForLocation:(id)a0;
- (id)valueBasedWallpaperForLocation:(id)a0 andAppearance:(id)a1;
- (id)_bokehWallpaperWithMetadataDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (id)copyWallpaperRepresentingToDestinationDirectoryURL:(id)a0 error:(id *)a1;
- (void)_processAssetDictionary:(id)a0 forLocation:(id)a1;
- (id)fileBasedWallpaperForLocation:(id)a0;
- (void).cxx_destruct;
- (id)fileBasedWallpaperForLocation:(id)a0 andAppearance:(id)a1;
- (id)_layeredStripeWallpaperWithMetadataDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)_liveWallpaperWithMetadataDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (id)_layeredAnimationWallpaperWithMetadataDictionary:(id)a0 wallpaperAppearance:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)wallpaperBackingTypeForLocation:(id)a0;
- (id)_stillWallpaperWithMetadataDictionary:(id)a0 wallpaperAppearance:(id)a1;

@end
