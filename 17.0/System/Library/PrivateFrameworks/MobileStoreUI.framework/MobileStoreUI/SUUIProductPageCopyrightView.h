@class NSString, UILabel, SUUIColorScheme;

@interface SUUIProductPageCopyrightView : UIView {
    UILabel *_copyrightLabel;
}

@property (retain, nonatomic) NSString *copyrightString;
@property (retain, nonatomic) SUUIColorScheme *colorScheme;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
