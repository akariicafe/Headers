@class UILabel, SFSharedAccountsGroupAvatarStackView;

@interface SFSharedAccountsGroupHeaderTableViewCell : UITableViewCell {
    SFSharedAccountsGroupAvatarStackView *_avatarStackView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureWithGroup:(id)a0;

@end
