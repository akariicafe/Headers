@class UIColor, UIFont, NSArray;

@interface SUTableTextFooterView : UIView

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSArray *textLines;

- (void)dealloc;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
