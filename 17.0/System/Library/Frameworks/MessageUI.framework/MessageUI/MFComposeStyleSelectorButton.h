@class NSString;

@interface MFComposeStyleSelectorButton : UIButton

@property (nonatomic) NSString *maximumContentSizeCategory;
@property (readonly, nonatomic) long long styleType;

+ (id)buttonWithStyleType:(long long)a0 target:(id)a1 action:(SEL)a2;
+ (id)buttonWithStyleType:(long long)a0 target:(id)a1 action:(SEL)a2 maximumContentSizeCategory:(id)a3;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)_imageForTextStyleType:(long long)a0 maximumContentSizeCategory:(id)a1;

@end
