@class NSString, UIVisualEffectView, WFIcon, UILabel, WFIconHostingView;
@protocol WFCompactAppearanceProvider;

@interface WFCompactPlatterSashView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) WFIconHostingView *iconView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) WFIcon *icon;
@property (readonly, nonatomic) double contentBaseline;
@property (retain, nonatomic) id<WFCompactAppearanceProvider> appearanceProvider;

+ (id)font;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
