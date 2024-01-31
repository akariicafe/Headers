@class NSString, CKLabel, CKAvatarPickerViewController, CKConversation;

@interface CKComposeNavbarBusinessCanvasViewController : CKComposeNavbarCanvasViewController <CKAvatarPickerViewControllerDelegate>

@property (retain, nonatomic) CKLabel *defaultLabel;
@property (retain, nonatomic) CKAvatarPickerViewController *avatarController;
@property (retain, nonatomic) CKConversation *cachedConversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updateBrandingForConversation:(id)a0;
- (BOOL)_canShowAvatarView;
- (void)_handleAddressBookPartialChange:(id)a0;
- (id)_titleItemViewForTraitCollection:(id)a0;
- (void)_updateDefaultLabelForConversation:(id)a0;
- (void)_updateTitleForConversation:(id)a0 animated:(BOOL)a1;
- (BOOL)hideChevron;
- (long long)navBarContext;
- (void)tappedAvatarPickerViewController;
- (void)updateContentsForConversation:(id)a0;

@end
