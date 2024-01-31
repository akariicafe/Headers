@class UIMenu, NSString, NSArray, UIFont, UIView, UILabel, UIButton;

@interface SFStartPageSectionHeaderTitleView : UIView {
    UIButton *_button;
    NSArray *_currentConstraints;
    UIView *_currentConstraintsSubview;
    UILabel *_label;
    UIFont *_font;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIMenu *menu;
@property (copy, nonatomic) NSString *symbolImageName;

- (void)dealloc;
- (void)buttonShapesEnabledStatusDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureUsingSection:(id)a0 visualStyleProvider:(id)a1;
- (void).cxx_destruct;
- (void)updateTitleColor;
- (id)initWithCoder:(id)a0;

@end
