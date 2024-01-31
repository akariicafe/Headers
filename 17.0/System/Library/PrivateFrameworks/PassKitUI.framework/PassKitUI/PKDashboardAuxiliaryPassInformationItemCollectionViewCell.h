@class NSString, UILabel, UIImageView;

@interface PKDashboardAuxiliaryPassInformationItemCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_subtitle2Label;
    UIImageView *_disclosureView;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitle2;
@property (nonatomic) BOOL hideDisclosure;

- (void)_setTitle:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_maxWidthForTransactionCellInWidth:(double)a0;
- (void)_setFonts;

@end
