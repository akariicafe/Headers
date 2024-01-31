@class UIImageView, PHFace;
@protocol PXPerson;

@interface PXPeopleScalableAvatarView : PXSmartScaleView {
    struct CGSize { double width; double height; } _imagePixelSize;
}

@property (nonatomic) double imageViewCornerRadius;
@property (retain) UIImageView *imageView;
@property (retain, nonatomic) id<PXPerson> person;
@property (retain, nonatomic) PHFace *face;
@property (nonatomic) long long cornerStyle;
@property (nonatomic) BOOL useLowMemoryMode;

- (void)updateImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateImageAndWait:(BOOL)a0;
- (void)setPersonAndWaitForImage:(id)a0;
- (void)viewScaleDidChange;

@end
