@class UIStackView, UIImageView, HUTriggerIconView, WFRowOfIconsView;

@interface WFAutomationSummaryIconsView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIImageView *triggerIconView;
@property (retain, nonatomic) HUTriggerIconView *homeTriggerIconView;
@property (readonly, nonatomic) UIImageView *arrowImageView;
@property (readonly, nonatomic) WFRowOfIconsView *actionsIconsView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setActionIcons:(id)a0;
- (void)configureIconView:(id)a0;
- (void)setHomeActionIcons:(id)a0;
- (void)setHomeTriggerIcon:(id)a0;
- (void)setTriggerIcon:(id)a0 tintColor:(id)a1 withCornerRadius:(double)a2;
- (void)setTriggerIcon:(id)a0 tintColor:(id)a1 withTrigger:(id)a2;

@end
