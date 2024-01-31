@class UIImageView, UILabel, WFTrigger;

@interface WFTriggerConfigurationHeaderCell : UITableViewCell

@property (readonly, nonatomic) UIImageView *triggerIconView;
@property (readonly, nonatomic) UILabel *triggerTitleLabel;
@property (retain, nonatomic) WFTrigger *trigger;
@property (retain, nonatomic) Class triggerTypeClass;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateUI;
- (void)configureWithImage:(id)a0 tintColor:(id)a1 title:(id)a2 numberOfLines:(long long)a3 withTrigger:(id)a4;

@end
