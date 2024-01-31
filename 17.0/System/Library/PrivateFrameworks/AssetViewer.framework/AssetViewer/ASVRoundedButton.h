@interface ASVRoundedButton : ASVButton

- (void)_setupViewWithCornerRadius:(double)a0;
- (id)initWithImage:(id)a0 buttonStyle:(long long)a1 textStyle:(long long)a2 controlStyle:(long long)a3 largeImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (id)initWithTitle:(id)a0 buttonStyle:(long long)a1 textStyle:(long long)a2 controlStyle:(long long)a3 adjustsFontForContentSizeCategory:(BOOL)a4;
- (id)initWithTitle:(id)a0 buttonStyle:(long long)a1 textStyle:(long long)a2 controlStyle:(long long)a3 cornerRadius:(double)a4;
- (id)initWithTitle:(id)a0 buttonStyle:(long long)a1 textStyle:(long long)a2 controlStyle:(long long)a3 cornerRadius:(double)a4 adjustsFontForContentSizeCategory:(BOOL)a5;

@end
