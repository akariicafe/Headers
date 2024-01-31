@class NSAttributedString;

@interface MKAttributionLabel : UIView {
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    BOOL _useDarkText;
}

@property (nonatomic) unsigned long long mapType;
@property (nonatomic) long long displayStyle;

- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (id)_attributesWithStroke:(BOOL)a0;
- (id)_labelTitle;
- (void)_prepareLabel;
- (void)_updateTextColor;

@end
