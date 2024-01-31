@class UIView;

@interface CKDetailsSeparatorCell : CKDetailsCell

@property (nonatomic) double leadingSpace;
@property (nonatomic) BOOL indentSeparator;
@property (readonly, nonatomic) UIView *separatorView;

+ (double)defaultHeight;
+ (id)reuseIdentifier;
+ (double)defaultLeadingSpace;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
