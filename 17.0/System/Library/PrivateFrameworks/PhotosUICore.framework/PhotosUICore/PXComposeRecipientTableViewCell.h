@class PXRoundImageView, NSString, UILabel, UIImageView, PXComposeRecipientTableCellModel, UIView, CNAvatarViewController;

@interface PXComposeRecipientTableViewCell : UITableViewCell <PXChangeObserver> {
    UIView *_avatarView;
    UIView *_contactAvatarView;
    CNAvatarViewController *_contactAvatarViewController;
    PXRoundImageView *_customAvatarImageView;
    UILabel *_localizedNameLabel;
    UILabel *_addressLabel;
    UIImageView *_accessoryImageView;
}

@property (readonly, nonatomic) PXComposeRecipientTableCellModel *cellModel;
@property (retain, nonatomic) UIView *popoverSourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_textColor;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_updateAvatarView;
- (void)_updateAccessoryImageView;
- (void)_updateAddressLabel;
- (void)_updateLocalizedNameLabel;

@end
