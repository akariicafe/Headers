@class NSArray, UILabel;

@interface PXPeopleNamePickerCell : UITableViewCell

@property (retain, nonatomic) NSArray *baseConstraints;
@property (readonly, weak, nonatomic) UILabel *titleLabel;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
