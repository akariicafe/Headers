@class NSString, UIImageView, UIImage, UIView;

@interface SBSwitcherSnapshotImageView : UIView <SBReusableView> {
    UIImageView *_imageView;
    UIView *_scalingView;
    double _cornerRadius;
    unsigned long long _maskedCorners;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) BOOL usesNonuniformScaling;
@property (nonatomic) BOOL hasOpaqueContents;
@property (nonatomic) BOOL stretchToFillBounds;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) BOOL allowStatusBarToOverlap;
@property (nonatomic) long long orientationForClassicLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })scalingTransform;
- (void)prepareForReuse;
- (void)_updateCornerRadius;
- (double)_transformScale;
- (double)_transformHorizontalScale;
- (id)initWithImage:(id)a0;
- (double)_transformVerticalScale;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_isUsingExternalClassicLayout;

@end
