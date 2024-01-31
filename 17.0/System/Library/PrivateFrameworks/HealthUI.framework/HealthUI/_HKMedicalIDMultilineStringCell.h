@class NSString, UILabel;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)dealloc;
- (void)tintColorDidChange;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (void)_updateTextColor;
- (void)setUpConstraints;

@end
