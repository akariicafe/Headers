@class PXSharedLibraryParticipantTableCellModel, NSString, PXRoundImageView, UILabel;

@interface PXSharedLibraryParticipantTableViewCell : UITableViewCell <PXChangeObserver> {
    PXRoundImageView *_customAvatarImageView;
    UILabel *_localizedNameLabel;
    UILabel *_addressLabel;
}

@property (readonly, nonatomic) PXSharedLibraryParticipantTableCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_updateAvatarView;
- (void)_updateAddressLabel;
- (void)_updateLocalizedNameLabel;

@end
