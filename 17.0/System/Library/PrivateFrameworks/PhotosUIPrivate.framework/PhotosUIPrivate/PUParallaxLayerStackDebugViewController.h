@class UIStackView, PUParallaxLayerStackView, PHAsset, PUParallaxLayerStackViewModelUpdater, PUParallaxLayerStackViewModel, NSString, UIButton, PUProgressIndicatorView, PUWallpaperPosterDateView;

@interface PUParallaxLayerStackDebugViewController : UIViewController <PXChangeObserver>

@property (readonly, nonatomic) unsigned long long signpost;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PUParallaxLayerStackViewModel *viewModel;
@property (retain, nonatomic) PUParallaxLayerStackViewModelUpdater *viewModelUpdater;
@property (retain, nonatomic) PUParallaxLayerStackView *layerStackView;
@property (retain, nonatomic) PUWallpaperPosterDateView *dateTimeView;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) UIButton *parallaxEnabledButton;
@property (retain, nonatomic) UIButton *looksButton;
@property (retain, nonatomic) UIButton *layerListButton;
@property (retain, nonatomic) UIButton *colorPaletteButton;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIButton *radarButton;
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator;
@property (retain, nonatomic) PUProgressIndicatorView *downloadProgressIndicator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialVisibleRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadLayerStack:(id)a0;
- (void)_dismissSheetController:(id)a0;
- (id)_newButtonWithSystemImageName:(id)a0;
- (void)_presentSheetController:(id)a0;
- (void)_updateDateTimeView;
- (void)hideDowloadProgressIndicator;
- (void)hideProgressIndicator;
- (void)loadLayerStack:(id)a0 segmentationItem:(id)a1;
- (void)loadPHAsset:(id)a0;
- (void)loadPartialSegmentationItem:(id)a0 loadingState:(unsigned long long)a1;
- (void)loadSegmentationItem:(id)a0;
- (void)panGesture:(id)a0;
- (void)pinchGesture:(id)a0;
- (void)renderAfterStyleChange;
- (void)renderAfterVisibleFrameChange;
- (void)shareLayerStack:(id)a0;
- (void)showColorPalettes:(id)a0;
- (void)showDownloadProgressIndicator;
- (void)showLayerList:(id)a0;
- (void)showLooks:(id)a0;
- (void)showProgressIndicator:(id)a0;
- (void)tapToRadar:(id)a0;
- (void)toggleParallaxEnabled:(id)a0;
- (void)updateDownloadProgressIndicator:(double)a0;
- (void)updateProgressIndicator:(id)a0;

@end
