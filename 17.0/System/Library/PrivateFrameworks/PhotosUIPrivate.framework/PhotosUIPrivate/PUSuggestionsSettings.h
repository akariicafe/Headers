@class PUWallpaperShortcutsPlaygroundSettings;

@interface PUSuggestionsSettings : PXSettings

@property (nonatomic) long long viewMode;
@property (nonatomic) long long sourceMode;
@property (nonatomic) long long infillMode;
@property (nonatomic) BOOL disableSegmentation;
@property (nonatomic) BOOL disableSegmentationCache;
@property (nonatomic) double parallaxAmount;
@property (nonatomic) double manualGatingLenience;
@property (nonatomic) BOOL includeDebugLayers;
@property (nonatomic) BOOL debugRoundTripLayerStack;
@property (nonatomic) BOOL debugTintLayers;
@property (nonatomic) BOOL debugBackfillCompositing;
@property (nonatomic) BOOL debugDisableFrameUpdates;
@property (nonatomic) BOOL enableCustomStyles;
@property (nonatomic) BOOL enableGreenScreenStyles;
@property (nonatomic) BOOL enableFRCInAssetDetails;
@property (nonatomic) long long primarySort;
@property (nonatomic) long long secondarySort;
@property (nonatomic) unsigned long long livePhotoTabFetchLimit;
@property (retain, nonatomic) PUWallpaperShortcutsPlaygroundSettings *shortcutsPlaygroundSettings;

+ (id)sharedInstance;
+ (id)sortDescriptorForMode:(long long)a0;
+ (id)_debugRowsForCurrentAsset;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)createChildren;
- (void)performPostSaveActions;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
