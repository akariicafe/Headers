@class NSString;

@interface HRAccountLoginCell : UITableViewCell {
    void /* unknown type, empty encoding */ accountStatusView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

- (void)configureWithAccount:(id)a0;
- (void)layoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
