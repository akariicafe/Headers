@class UIView, NSString, NSArray, PBFComplicationSnapshotRequest, CSProminentLayoutController, NSMutableDictionary, BSUIVibrancyEffectView, NSMutableArray, PRWidgetGridViewController, NSMapTable;
@protocol PBFPosterPreview;

@interface PBFPosterGalleryPreviewComplicationContentView : UIView <SBIconViewDelegate, SBIconViewProviding> {
    CSProminentLayoutController *_layoutController;
    NSMutableDictionary *_iconImageViewsByUniqueIdentifier;
    NSMapTable *_imageViewsForComplicationSnapshotRequest;
    NSMapTable *_imageViewForComplication;
    NSMutableArray *_complicationImageViews;
    NSMutableArray *_unusedComplicationImageViews;
    NSArray *_complicationSnapshotRequests;
    NSArray *_landscapeComplicationSnapshotRequests;
    NSMapTable *_complicationToLayoutElement;
    PBFComplicationSnapshotRequest *_inlineComplicationSnapshotRequest;
    BSUIVibrancyEffectView *_vibrancyEffectView;
    UIView *_complicationContainerView;
    UIView *_inlineComplicationContainerView;
    PRWidgetGridViewController *_widgetGridViewController;
}

@property (retain, nonatomic) id<PBFPosterPreview> posterPreview;
@property (nonatomic) double posterPreviewScale;
@property (nonatomic) BOOL preferredCornerRadius;
@property (nonatomic) long long layoutOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (void)dealloc;
- (void)recycleIconView:(id)a0;
- (void)prepareForReuse;
- (BOOL)isIconViewRecycled:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)customImageViewControllerForIconView:(id)a0;
- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)_layoutController;
- (double)_contentScaleForWidgetGridViewController;
- (double)_cornerRadiusForComplicationSnapshotRequest:(id)a0;
- (void)_enumerateImageViewsForComplicationSnapshotRequest:(id)a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForComplication:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForWidgetGridViewController;
- (BOOL)_hasComplications;
- (id)_imageViewForComplication:(id)a0 snapshotRequest:(id)a1;
- (BOOL)_isComplicationSnapshotRequestOurs:(id)a0;
- (id)_placeImageViewForComplication:(id)a0 withSuperview:(id)a1 snapshotRequest:(id)a2;
- (void)_stopUsingComplicationImageView:(id)a0;
- (void)_updatePreviewWithComplicationImage:(id)a0 error:(id)a1 complicationSnapshotRequest:(id)a2 posterPreview:(id)a3;
- (id)pbf_displayContext;
- (void)prepareComplicationPreviewWithGenerator:(id)a0;
- (void)setComplicationImage:(id)a0 forComplicationSnapshotRequest:(id)a1;

@end
