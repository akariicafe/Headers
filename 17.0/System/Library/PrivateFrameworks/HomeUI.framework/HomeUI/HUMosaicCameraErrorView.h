@class UIStackView, HUMosaicCameraCellLayoutOptions, UIImageView, UIVisualEffectView, UILabel, NSMutableArray, NSString;

@interface HUMosaicCameraErrorView : UIView <HUCameraErrorViewable>

@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (readonly, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) HUMosaicCameraCellLayoutOptions *layoutOptions;
@property (nonatomic) BOOL visualEffectViewHidden;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
