@class _UIPortalView, UIImageView, NSString, UIView;

@interface PBFPosterGalleryPreviewContentView : UIView {
    UIImageView *_frontHiddenImageView;
    UIImageView *_backHiddenImageView;
    _UIPortalView *_portalView;
    UIView *_fullScreenTransitionView;
    NSString *_previewType;
    long long _layoutOrientation;
    unsigned long long _index;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } previewImageFrame;
@property (retain, nonatomic) UIView *posterPreviewView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIView *contentView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_createHiddenViewsIfNeeded;
- (void)_updateHiddenImages;
- (void)prepareForFullScreenTransitionWithContentView:(id)a0;
- (void)updatePreviewType:(id)a0 scale:(double)a1 posterPreviewView:(id)a2 layoutOrientation:(long long)a3 index:(unsigned long long)a4;

@end
