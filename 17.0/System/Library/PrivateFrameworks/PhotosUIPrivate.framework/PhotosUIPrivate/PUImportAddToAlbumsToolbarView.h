@class NSString, PHPhotoLibrary, UILabel, UIButton;
@protocol PUImportAddToAlbumsToolbarViewDelegate;

@interface PUImportAddToAlbumsToolbarView : UIView

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *destinationLabel;
@property (retain, nonatomic) NSString *destinationDescriptionTitle;
@property (readonly, nonatomic) UIButton *destinationButton;
@property (weak, nonatomic) id<PUImportAddToAlbumsToolbarViewDelegate> delegate;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)_setupSubviews;
- (void)buttonPressed:(id)a0;
- (void)buttonTouchDown:(id)a0;
- (void)_setupButton;
- (id)_destinationDescription;
- (void)_animateButtonAlpha:(double)a0;
- (void)_updateButtonText;
- (void)buttonTouchDragInside:(id)a0;
- (void)buttonTouchDragOutside:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 photoLibrary:(id)a1;

@end
