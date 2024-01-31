@class UIColor;

@interface UIAssistantBarRoundedButtonViewButton : UIButton

@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) UIColor *normalTitleColor;
@property (retain, nonatomic) UIColor *highlightedTitleColor;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)_currentTitleColor;
- (id)_titleColorForState:(unsigned long long)a0;
- (void)_updateBackgroundAndTitleColor;

@end
