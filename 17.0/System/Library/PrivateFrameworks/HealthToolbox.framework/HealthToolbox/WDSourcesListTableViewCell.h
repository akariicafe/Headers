@class UIImageView, UILabel, HKSourceDataModel;

@interface WDSourcesListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HKSourceDataModel *sourceModel;

+ (id)defaultReuseIdentifier;

- (void)prepareForReuse;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpSubviews;
- (void)_handleReturnedImage:(id)a0 forSource:(id)a1 fetchError:(id)a2;

@end
