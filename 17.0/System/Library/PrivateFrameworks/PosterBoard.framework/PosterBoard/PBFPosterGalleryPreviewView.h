@class PBFPosterGalleryPreviewContentView, NSString, PBFPosterGalleryPreviewComplicationContentView, PBFPosterGalleryShadowContainerView, UIView, PBFShadowView;

@interface PBFPosterGalleryPreviewView : UIView {
    PBFPosterGalleryPreviewContentView *_posterPreviewContentView;
    PBFPosterGalleryShadowContainerView *_shadowContainerView;
    PBFShadowView *_shadowView;
    UIView *_loadingIndicatorContainerView;
}

@property (readonly, nonatomic) NSString *previewType;
@property (readonly, nonatomic) double posterPreviewScale;
@property (readonly, nonatomic) UIView *posterPreviewView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } posterPreviewFrame;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) PBFPosterGalleryPreviewComplicationContentView *complicationContentView;
@property (nonatomic) BOOL showsLoadingIndicator;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)makeComplicationsPortalView;
- (id)pbf_displayContext;
- (void)prepareForFullScreenTransitionWithContentView:(id)a0;
- (void)updatePreviewType:(id)a0 scale:(double)a1 posterPreviewView:(id)a2 layoutOrientation:(long long)a3 index:(unsigned long long)a4;

@end
