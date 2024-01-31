@class NSArray, UIImageView, UILabel, NSLayoutConstraint;

@interface WDDataListViewControllerCell : UITableViewCell {
    NSLayoutConstraint *_largeTextIconImageCenterYAnchorConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;

- (void)traitCollectionDidChange:(id)a0;
- (void)setupConstraints;
- (void)_updateFont;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
- (void)setupSubviews;

@end
