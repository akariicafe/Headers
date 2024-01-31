@class UIView, NSString, NSArray, CNAvatarView, UIImage, UIImageView, CNContact, UILabel;

@interface HUContactDetailsTableViewCell : UITableViewCell

@property (readonly, nonatomic) CNAvatarView *avatarView;
@property (readonly, nonatomic) UIImageView *photoView;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) UIImage *photo;

+ (BOOL)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
