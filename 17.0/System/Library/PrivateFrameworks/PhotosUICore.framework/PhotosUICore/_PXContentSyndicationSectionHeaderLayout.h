@class PXAssetCollectionActionManager, NSString, PXPhotosLayoutSpec, SLHighlight, PXSelectionSnapshot, PXAssetsDataSource, PXContentSyndicationSectionHeaderView;
@protocol PXDisplayAsset, PXContentSyndicationSocialLayerHighlightProvider;

@interface _PXContentSyndicationSectionHeaderLayout : PXGSingleViewLayout <PXContentSyndicationSectionHeaderViewDelegate, PXContentSyndicationSocialLayerHighlightProviderChangeObserver, PXPhotosSectionedLayoutHeader>

@property (retain, nonatomic) PXAssetsDataSource *dataSource;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (readonly, nonatomic) id<PXContentSyndicationSocialLayerHighlightProvider> socialLayerHighlightProvider;
@property (retain, nonatomic) id<PXDisplayAsset> referenceAssetForHighlight;
@property (retain, nonatomic) PXContentSyndicationSectionHeaderView *sectionHeaderContentView;
@property (retain, nonatomic) SLHighlight *socialLayerHighlight;
@property (retain, nonatomic) PXAssetCollectionActionManager *assetCollectionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (nonatomic) BOOL isInSelectMode;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;

- (id)init;
- (void).cxx_destruct;
- (void)_updateReferenceAssetForHighlightIfNeeded;
- (id)additionalContextMenuActionsForAttributionViewInContentSyndicationHeaderView:(id)a0;
- (id)initWithSpec:(id)a0 socialLayerHighlightProvider:(id)a1;
- (void)socialLayerHighlightProvider:(id)a0 didChangeSocialLayerHighlight:(id)a1 forAsset:(id)a2;

@end
