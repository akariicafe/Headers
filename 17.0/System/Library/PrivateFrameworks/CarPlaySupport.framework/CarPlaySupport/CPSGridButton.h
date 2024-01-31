@class CPSAbridgableLabel, CPGridButton, UIView;
@protocol CPTemplateDelegate;

@interface CPSGridButton : CPSButton

@property (retain, nonatomic) CPSAbridgableLabel *customTitleLabel;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) CPGridButton *gridButton;
@property (weak, nonatomic) id<CPTemplateDelegate> templateDelegate;

+ (id)buttonWithGridButton:(id)a0 templateDelegate:(id)a1;

- (unsigned long long)hash;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)_updateLabelColor;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)layoutSubviews;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (double)preferredLabelWidth;
- (BOOL)isEqualToGridButton:(id)a0;

@end
