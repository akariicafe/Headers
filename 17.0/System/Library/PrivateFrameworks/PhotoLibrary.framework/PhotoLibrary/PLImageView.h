@class UILabel, NSString, PLTiledLayer, UIView, PLPhotoTilePlaceholderView, PLVideoView;

@interface PLImageView : UIImageView {
    UIView *_borderView;
    PLVideoView *_videoView;
    PLPhotoTilePlaceholderView *_placeholderView;
    UILabel *_textBadge;
    unsigned char _shadowEnabled : 1;
    unsigned char _suppressShadowDrawing : 1;
    unsigned char _borderViewIsVisible : 1;
    unsigned char _drawsBorder : 1;
    float _aspectRatio;
    double _lastBorderAlphaTime;
    double _lastShadowAlphaTime;
    BOOL _edgeAntialiasingEnabled;
    PLTiledLayer *_fullSizeImageTiledLayer;
    long long _fullSizeImageOrientation;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic, getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
@property (nonatomic) float borderAndAccessoriesAlpha;
@property (nonatomic) BOOL drawsBorder;
@property (nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
@property (nonatomic) double transitionProgress;
@property (retain, nonatomic) PLVideoView *videoView;
@property (retain, nonatomic) UIView *leftAccessoryView;
@property (nonatomic) struct CGSize { double width; double height; } leftAccessoryViewOffset;
@property (retain, nonatomic) UIView *bottomRightAccessoryView;
@property (nonatomic) double accessoryViewsAlpha;
@property (readonly, nonatomic) BOOL showsPlaceholder;
@property (nonatomic) double placeholderScale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } placeholderSize;

+ (void)initialize;
+ (struct CGSize { double x0; double x1; })badgeOffset;
+ (BOOL)shouldDrawShadows;
+ (id)textBadgeForString:(id)a0 photoSize:(struct CGSize { double x0; double x1; })a1;

- (void)setEdgeAntialiasingEnabled:(BOOL)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)textBadgeString;
- (void)parentDidLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bottomRightAccessoryViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftAccessoryViewFrame;
- (void)_setShadowEnabled:(BOOL)a0 force:(BOOL)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForFullSizeImageTiledLayer;
- (void)_updatePlaceholderAlpha;
- (void)_updatePlaceholderLayout;
- (void)_updateShadowPath;
- (void)renderSnapshotInContext:(struct CGContext { } *)a0;
- (void)setBorderAndAccessoriesAlpha:(float)a0 forced:(BOOL)a1;
- (void)setBottomRightAccessoryView:(id)a0 animated:(BOOL)a1;
- (void)setFullSizeImageJPEGData:(id)a0 size:(struct CGSize { double x0; double x1; })a1 orientation:(long long)a2;
- (void)setLeftAccessoryView:(id)a0 animated:(BOOL)a1;
- (void)setShowsPlaceholder:(BOOL)a0;
- (void)setTextBadgeString:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 allowRounding:(BOOL)a1;
- (void)updateFullSizeImageVisibleArea;

@end
