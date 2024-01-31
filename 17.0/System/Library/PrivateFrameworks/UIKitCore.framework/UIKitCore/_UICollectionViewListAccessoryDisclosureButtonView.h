@class UIColor, UIControl, UIImageView, UIImage, UIButton;
@protocol UITableConstants;

@interface _UICollectionViewListAccessoryDisclosureButtonView : UIView <_UICollectionViewListAccessoryDisclosureView> {
    UIImageView *_imageView;
    UIButton *_button;
}

@property (readonly, nonatomic) UIControl *control;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id<UITableConstants> constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) BOOL rotated;
@property (nonatomic) double rotationAngle;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_executeActionHandler;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateRotation;
- (id)initWithConstants:(id)a0;

@end
