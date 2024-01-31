@class UITableViewHeaderFooterView, UICollectionViewTableLayoutAttributes, UIColor, UICollectionViewTableLayout, UILabel, UIView;

@interface UICollectionViewTableHeaderFooterView : UICollectionReusableView

@property (retain, nonatomic) UITableViewHeaderFooterView *tableViewHeaderFooterView;
@property (readonly, nonatomic, getter=_tableLayout) UICollectionViewTableLayout *tableLayout;
@property (readonly, nonatomic, getter=_tableAttributes) UICollectionViewTableLayoutAttributes *tableAttributes;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL floating;

- (void)prepareForReuse;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;

@end
