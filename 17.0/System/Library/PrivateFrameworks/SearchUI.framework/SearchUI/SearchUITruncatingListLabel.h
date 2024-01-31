@class NSString, NSArray, TLKLabel;

@interface SearchUITruncatingListLabel : UIView

@property (retain, nonatomic) NSString *caption;
@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) TLKLabel *label;

- (id)init;
- (id)viewForFirstBaselineLayout;
- (long long)numberOfLines;
- (void).cxx_destruct;
- (id)text;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canFitString:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateCaption:(id)a0 list:(id)a1;
- (void)updateLabelForSize:(struct CGSize { double x0; double x1; })a0;

@end
