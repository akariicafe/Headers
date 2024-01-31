@class UILabel, WBTabGroup;

@interface SFTabGroupTitleView : UIButton {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) WBTabGroup *tabGroup;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_attributedStringWithImageNamed:(id)a0 textStyle:(id)a1 additionalSymbolicTraits:(unsigned int)a2 color:(id)a3 baselineOffset:(double)a4;
- (void)updateTitle;

@end
