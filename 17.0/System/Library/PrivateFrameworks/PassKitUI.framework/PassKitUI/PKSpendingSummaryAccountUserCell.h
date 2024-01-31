@class NSString, UIImageView, UIImage, UILabel;

@interface PKSpendingSummaryAccountUserCell : PKDashboardCollectionViewCell {
    UILabel *_amountLabel;
    UILabel *_nameLabel;
    UIImageView *_avatarView;
    BOOL _isTemplateLayout;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) UIImage *avatar;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
