@class NSString, UIImage, NSArray, PXUpdater, PXUIMediaProvider, NSLocale, PXDisplayAssetContentView, PXDisplayAssetCombinedOverlayView, PXDisplayAssetViewModel;
@protocol PXDisplayAsset;

@interface PXDisplayAssetView : UIView <PXChangeObserver> {
    BOOL _isPerformingLayout;
}

@property (class, retain, nonatomic) NSLocale *currentLocaleForTesting;

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel;
@property (readonly, nonatomic) PXDisplayAssetCombinedOverlayView *overlayView;
@property (nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (retain, nonatomic) PXDisplayAssetContentView *contentView;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (nonatomic) BOOL allowsTextSelection;
@property (copy, nonatomic) NSArray *stringsToHighlight;
@property (copy, nonatomic) NSArray *sceneIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *audioIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *humanActionIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *personLocalIdentifiersToHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForAsset:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredContentsRectForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

- (void)_updateContentView;
- (void)setContentMode:(long long)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)_updateContentViewLayout;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_commonPXDisplayAssetViewInit;
- (void)_invalidateContentView;
- (void)_invalidateContentViewLayout;
- (void)_invalidateContentViewProperties;
- (void)_invalidateViewModelProperties;
- (void)_updateContentViewProperties;
- (void)_updateViewModelProperties;

@end
