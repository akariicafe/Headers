@class UIView, NSTimer, UIImage, VUIRentalExpirationLabel, NSAttributedString, NSOperationQueue, NSArray, NSOperation, UIColor;
@protocol VUITextBadgeViewDelegate;

@interface VUITextBadgeView : VUIBaseView

@property (nonatomic) struct CGSize { double width; double height; } glyphSize;
@property (retain, nonatomic) NSTimer *expiryUpdateTimer;
@property (retain, nonatomic) NSOperation *pendingOperation;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL backgroundImageForMaterialRenderingHasChanged;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) double strokeSize;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) VUIRentalExpirationLabel *rentalExpirationLabel;
@property (weak, nonatomic) id<VUITextBadgeViewDelegate> delegate;
@property (retain, nonatomic) UIImage *backgroundImageForMaterialRendering;
@property (nonatomic) unsigned long long badgeKind;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double minHeight;
@property (retain, nonatomic) NSArray *gradientBgColors;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL isUppercased;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double layerCornerRadius;

+ (BOOL)_viewBackgroundImageNeedsUpdatingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 currentBackgroundImage:(id)a1;
+ (id)badgeWithLayout:(id)a0 existing:(id)a1;

- (id)accessibilityLabel;
- (void)_invalidateTimer;
- (void)reset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityTitle;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_textSize;
- (void)_imageLoaded;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)_cancelPendingOperation;
- (void)_configureWithLayout:(id)a0;
- (void)_redrawTextBadgeWithDuration:(double)a0;
- (void)_redrawView:(id)a0 withDuration:(double)a1;
- (void)_setBackgroundImageForMaterialRendering:(id)a0;
- (BOOL)_textBadgeBackgroundImageNeedsUpdating;
- (void)_updateBackgroundImagesWithCompletedOperation:(id)a0;
- (void)_updateBackgroundMaterialImagesWithBackgroundImageSize:(struct CGSize { double x0; double x1; })a0 performSynchronously:(BOOL)a1 overlayViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (void)setBackgroundImageForMaterialRendering:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 overlayViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)setBackgroundImageForMaterialRendering:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 overlayViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 operationQueue:(id)a3;

@end
