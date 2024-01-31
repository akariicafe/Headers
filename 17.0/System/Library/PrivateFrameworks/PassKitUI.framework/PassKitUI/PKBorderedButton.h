@class UIView, PKBorderedButtonConfiguration;

@interface PKBorderedButton : UIButton {
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_trailingBorder;
    UIView *_leadingBorder;
}

@property (copy, nonatomic) PKBorderedButtonConfiguration *borderConfiguration;

+ (id)borderedButtonWithConfiguration:(id)a0 primaryAction:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateForConfigurationChange;

@end
