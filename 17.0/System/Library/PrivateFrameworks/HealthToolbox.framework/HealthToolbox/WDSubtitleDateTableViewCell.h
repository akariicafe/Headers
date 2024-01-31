@class UILabel, NSLayoutConstraint;

@interface WDSubtitleDateTableViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *baselineConstraint;
@property (retain, nonatomic) UILabel *mainTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;
@property (retain, nonatomic) UILabel *dateTextLabel;

- (void)traitCollectionDidChange:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_updateForCurrentSizeCategory;
- (void)setupSubviews;

@end
