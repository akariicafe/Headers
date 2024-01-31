@class PXUpdater, NSArray, UIImage, NSError, PXDisplayAssetViewModelHighlightTimeRangeController;
@protocol PXDisplayAsset;

@interface PXDisplayAssetViewModel : PXObservable <PXMutableDisplayAssetViewModel>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXDisplayAssetViewModelHighlightTimeRangeController *timeRangeController;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) double assetAspectRatio;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, nonatomic) BOOL wantsLivePhotoPlayback;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentSafeAreaInsets;
@property (readonly, nonatomic) BOOL isDisplayingFullQualityContent;
@property (readonly, nonatomic) BOOL allowsTextSelection;
@property (readonly, nonatomic) NSArray *stringsToHighlight;
@property (readonly, nonatomic) NSArray *sceneIdentifiersToHighlight;
@property (readonly, nonatomic) NSArray *audioIdentifiersToHighlight;
@property (readonly, nonatomic) NSArray *humanActionIdentifiersToHighlight;
@property (readonly, nonatomic) NSArray *personLocalIdentifiersToHighlight;
@property (readonly, nonatomic) NSArray *timeRangesToHighlight;
@property (readonly, nonatomic) float loadingProgress;
@property (readonly, nonatomic) NSError *loadingError;

- (void)setLoadingProgress:(float)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setContentMode:(long long)a0;
- (id)init;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)setAsset:(id)a0;
- (void)setAllowsTextSelection:(BOOL)a0;
- (void)setPlaybackStyle:(long long)a0;
- (void)setAudioIdentifiersToHighlight:(id)a0;
- (void)setSceneIdentifiersToHighlight:(id)a0;
- (void)_invalidateAssetAspectRatio;
- (void)_updateAssetAspectRatio;
- (void)setAssetAspectRatio:(double)a0;
- (void)setContentSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setCurrentImage:(id)a0;
- (void)setHumanActionIdentifiersToHighlight:(id)a0;
- (void)setIsDisplayingFullQualityContent:(BOOL)a0;
- (void)setLoadingError:(id)a0;
- (void)setPersonLocalIdentifiersToHighlight:(id)a0;
- (void)setStringsToHighlight:(id)a0;
- (void)setTimeRangesToHighlight:(id)a0;
- (void)setWantsLivePhotoPlayback:(BOOL)a0;

@end
