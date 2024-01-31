@class UIBlurEffect, NSString, UIView;

@interface AXUIPlatterContainerView : UIView

@property (readonly, nonatomic) UIView *platterView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIBlurEffect *platterBlurEffect;
@property (readonly, nonatomic) NSString *primaryTextStyle;
@property (readonly, nonatomic) double platterWidth;
@property (readonly, nonatomic) BOOL shouldMimicNotificationBannerTopOffset;
@property (readonly, nonatomic) BOOL allowsScrolling;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
