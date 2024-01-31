@class UILabel, NSString;
@protocol HFIconDescriptor;

@interface HURoomListItemCell : UITableViewCell

@property (readonly, nonatomic) UILabel *nameLabel;
@property (copy, nonatomic) NSString *roomName;
@property (retain, nonatomic) id<HFIconDescriptor> roomIconDescriptor;

+ (BOOL)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
