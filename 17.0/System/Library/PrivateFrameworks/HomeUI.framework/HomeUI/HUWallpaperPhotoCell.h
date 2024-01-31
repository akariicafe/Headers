@class UIStackView, UIView, NSString, UIImage, CAShapeLayer, UIImageView, UIButton, NSLayoutConstraint, UIActivityIndicatorView, UILabel;
@protocol HUWallpaperPhotoCellDelegate;

@interface HUWallpaperPhotoCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;
@property (retain, nonatomic) UIView *selectionOverlayView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *choosePhotoLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (copy, nonatomic) NSString *assetIdentifier;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL busy;
@property (nonatomic) BOOL empty;
@property (nonatomic) BOOL removable;
@property (nonatomic) BOOL showBorder;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long contentMode;
@property (weak, nonatomic) id<HUWallpaperPhotoCellDelegate> delegate;

- (void)setBackgroundColor:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)deleteButtonPressed;
- (void)showBorder:(BOOL)a0 animated:(BOOL)a1;

@end
