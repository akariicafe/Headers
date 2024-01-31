@class UIButton, NSString, UIView;

@interface MFComposeWebContentVariationView : MFMailComposeHeaderView

@property (retain, nonatomic) UIButton *webContentVariableButton;
@property (retain, nonatomic) UIView *background;
@property (readonly, nonatomic) NSString *selectedContentVariation;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_flashBackground;
- (id)_generateActionsForTitles:(id)a0 currentSelection:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)refreshPreferredContentSize;
- (void)setSelectedContentVariationLabel:(id)a0;
- (void)setupMenuItemTitles:(id)a0 currentSelection:(unsigned long long)a1 handler:(id /* block */)a2;

@end
