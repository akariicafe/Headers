@class NSString;

@interface HRAccountHeaderCell : UITableViewCell {
    void /* unknown type, empty encoding */ accountView;
    void /* unknown type, empty encoding */ paddedView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

- (void)layoutMarginsDidChange;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureWithAccount:(id)a0;

@end
