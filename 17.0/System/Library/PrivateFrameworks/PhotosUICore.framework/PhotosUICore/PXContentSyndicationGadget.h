@class NSString, PXRegionOfInterest, PXContentSyndicationCountsController, PXContentSyndicationGadgetViewModel, PXContentSyndicationItem, NSUserActivity, PXGadgetSpec, PXFooterViewModel, PXContentSyndicationGadgetView, PXImageRequesterHelper;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult, PXUIImageProvider, PXContentSyndicationGadgetDelegate, PXDisplayAssetCollection, PXContentSyndicationSocialLayerHighlightProvider, PXContentSyndicationAssetFetchResultProvider;

@interface PXContentSyndicationGadget : NSObject <PXChangeObserver, PXContentSyndicationAssetFetchResultProviderChangeObserver, PXContentSyndicationGadgetViewDelegate, PXContentSyndicationSocialLayerHighlightProviderChangeObserver, PXGadget> {
    id<PXContentSyndicationAssetFetchResultProvider> _keyImagesAssetFetchResultProvider;
    id<PXDisplayAssetFetchResult> _keyImagesAssetFetchResult;
    id<PXUIImageProvider> _imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> _socialLayerHighlightProvider;
    PXContentSyndicationCountsController *_countsController;
    PXFooterViewModel *_gridFooterViewModel;
    PXImageRequesterHelper *_frontImageRequesterHelper;
    PXImageRequesterHelper *_middleImageRequesterHelper;
    PXImageRequesterHelper *_backImageRequesterHelper;
}

@property (readonly, nonatomic) PXContentSyndicationGadgetViewModel *viewModel;
@property (readonly, nonatomic) PXContentSyndicationGadgetView *view;
@property (copy, nonatomic) id<PXDisplayAssetCollection> initialAssetCollection;
@property (copy, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (copy, nonatomic) id<PXDisplayAsset> referenceAssetForSocialLayerHighlight;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (retain, nonatomic) PXContentSyndicationItem *contentSyndicationItem;
@property (weak, nonatomic) id<PXContentSyndicationGadgetDelegate> delegate;
@property (readonly, copy, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic) BOOL contentViewHiddenForOneUpTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleContentRect;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (id)previewParametersForTargetPreviewView:(id)a0;
- (id)contextMenuWithSuggestedActions:(id)a0;
- (void)_updateCounts;
- (id)targetPreviewViewForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)commitPreviewView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_fetchKeyImages;
- (id)_createActionForType:(id)a0 image:(id)a1 attributes:(unsigned long long)a2;
- (void)_donateUserActivityForAssetCollectionIfNeeded;
- (void)_fileRadar;
- (void)_handleKeyImage:(id)a0 atIndex:(long long)a1;
- (id)_makePresentationEnvironment;
- (void)_presentDetailViewController;
- (void)_refreshGadgetContents;
- (void)_retrieveAssetCollectionIfNeeded;
- (void)_updateGridFooterViewModel;
- (void)_updateImageRequesterHelper:(id)a0 withAsset:(id)a1;
- (void)_updateOverlayTitleWithDetailedCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 savedCount:(long long)a1;
- (id)additionalContextMenuActionsForAttributionViewInContentSyndicationGadgetView:(id)a0;
- (void)assetFetchResultProvider:(id)a0 didChangeAssetFetchResult:(id)a1 forAssetCollection:(id)a2;
- (id)initWithAssetFetchResultProvider:(id)a0 imageProvider:(id)a1 socialLayerHighlightProvider:(id)a2;
- (void)prepareCollectionViewItem:(id)a0;
- (void)presentGridAnimated:(BOOL)a0;
- (void)presentOneUpAnimated:(BOOL)a0;
- (void)socialLayerHighlightProvider:(id)a0 didChangeSocialLayerHighlight:(id)a1 forAsset:(id)a2;
- (void)userDidSelectGadget;

@end
