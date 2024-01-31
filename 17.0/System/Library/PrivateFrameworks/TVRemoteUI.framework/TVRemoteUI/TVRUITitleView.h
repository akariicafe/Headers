@class UILabel, UIImageView, UIStackView;
@protocol TVRUIStyleProvider;

@interface TVRUITitleView : UIView

@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *deviceModelImageView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIStackView *stackView;

- (void)_setupConstraints;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)isExclusiveTouch;
- (id)initWithStyleProvider:(id)a0;
- (void)updateTitleWithDeviceName:(id)a0 icon:(id)a1;
- (void)_setupViewsIfNeeded;

@end
