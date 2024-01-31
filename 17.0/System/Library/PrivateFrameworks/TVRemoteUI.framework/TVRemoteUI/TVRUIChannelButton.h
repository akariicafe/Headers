@class TVRUIPageButton, UILabel, UIView;
@protocol TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIChannelButton : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) TVRUIPageButton *topButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TVRUIPageButton *bottomButton;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonEventDelegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)collapse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_buttonPressed:(id)a0;
- (void)expand;
- (void)_buttonReleased:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForRightWingExpanded:(BOOL)a0;
- (id)chevronLeftWingAnimationExpand:(BOOL)a0;
- (id)_channelUpButton;
- (void)_darkenSystemColorsChanged:(id)a0;
- (id)_newSpringAnimation;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForLeftWingExpanded:(BOOL)a0;
- (id)chevronRightWingAnimationExpand:(BOOL)a0;
- (id)initWithTitle:(id)a0 styleProvider:(id)a1;

@end
