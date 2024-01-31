@class NSArray;

@interface PUAmbientPhotoFrameSettings : PXSettings <PhotosUIPrivate.PUWallpaperShuffleConfigurationViewControllerDelegate>

@property (nonatomic) double fixedAssetDuration;
@property (nonatomic) BOOL disableNUp;
@property (nonatomic) BOOL disableLetterAndPillarBoxing;
@property (nonatomic) double kenBurnsPanSpeed;
@property (nonatomic) double kenBurnsScaleSpeed;
@property (nonatomic) BOOL showFavoriteAlbumAssets;
@property (nonatomic) BOOL showCuratedCategories;
@property (nonatomic) BOOL showPeopleCuratedAssets;
@property (nonatomic) BOOL showPetsCuratedAssets;
@property (nonatomic) BOOL showNatureCuratedAssets;
@property (nonatomic) BOOL showCitiesCuratedAssets;
@property (nonatomic) BOOL showFeaturedCuratedAssets;
@property (nonatomic) BOOL includeHighlightAssetsInFeatured;
@property (nonatomic) BOOL includeFeaturedPhotosInFeatured;
@property (nonatomic) BOOL forceColdStart;
@property (retain, nonatomic) NSArray *personLocalIdentifiers;
@property (nonatomic) BOOL showTapToRadarButton;
@property (nonatomic) BOOL includePhotosInRadar;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_enabledCurationCategoriesPredicate;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;
- (void)wallpaperShuffleConfigurationViewController:(id)a0 didFinishWithPosterConfiguration:(id)a1;
- (void)wallpaperShuffleConfigurationViewControllerDidCancelManuallySelectingPhotos:(id)a0;
- (void)wallpaperShuffleConfigurationViewControllerDidDismiss:(id)a0;

@end
