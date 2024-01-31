@class PUAssetViewModel, SLAttributionView, NSString, SLHighlight, UIView;
@protocol PUSyndicationAttributionTileViewControllerDelegate;

@interface PUSyndicationAttributionTileViewController : PUTileViewController <SLAttributionViewDelegate>

@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) SLAttributionView *attributionView;
@property (nonatomic) double occupiedLeadingWidth;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (weak, nonatomic) id<PUSyndicationAttributionTileViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIView *pillView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeVisibleRect;
- (BOOL)wantsVisibleRectChanges;
- (void)becomeReusable;
- (id)loadView;
- (void).cxx_destruct;
- (id)contextMenuItemsForAttributionView:(id)a0;
- (void)_updateAttributionView;
- (void)_handleHighlight:(id)a0 withAssetUUID:(id)a1;
- (void)_invalidateAttributionView;
- (void)_setupAttributionView;

@end
