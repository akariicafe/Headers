@class UITableViewCell, NSAttributedString;

@interface UITableViewLabel : UILabel {
    long long _savedNumberOfLines;
    double _firstParagraphFirstLineHeadIndent;
    NSAttributedString *_shadowAttributedText;
}

@property (weak, nonatomic) UITableViewCell *tableCell;
@property (readonly, nonatomic) BOOL usingDefaultFont;

- (BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)a0;
- (void)_clearNumberOfLines;
- (void)traitCollectionDidChange:(id)a0;
- (void)setAttributedText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setNumberOfLinesForAXLayoutIfNecessary;
- (id)_disabledFontColor;
- (void)_setFirstParagraphFirstLineHeadIndent:(double)a0;
- (void)_cleanupErrantFirstLineHeadIndent;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)_setDefaultFont:(id)a0;
- (void)_restoreNumberOfLines;
- (void)setFont:(id)a0;
- (id)initWithCoder:(id)a0;

@end
