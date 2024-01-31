@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;

- (void)traitCollectionDidChange:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
- (void)setupSubviews;
- (void)updateAutomationIdentifiersWith:(id)a0;

@end
