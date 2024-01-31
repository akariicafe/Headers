@class NSString, UILabel;

@interface PKOneTimeCodeDigitFieldView : UIView {
    UILabel *_label;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (nonatomic) unsigned long long highligtType;

+ (id)codeEntryFont;

- (id)initWithIndex:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_updateLayer;

@end
