@interface SFSharedAccountsGroupAvatarStackView : UIView {
    double _avatarDiameter;
    double _avatarSpacing;
    unsigned long long _maximumNumberOfAvatarsToDisplay;
}

- (void)_addAvatarImageViews:(id)a0;
- (id)_imageViewsForGroupMemberData:(id)a0;
- (void)configureWithGroup:(id)a0;
- (void)configureWithInvitedGroupMemberData:(id)a0;
- (id)initWithAvatarDiameter:(double)a0 avatarSpacing:(double)a1 maximumNumberOfAvatarsToDisplay:(unsigned long long)a2;

@end
