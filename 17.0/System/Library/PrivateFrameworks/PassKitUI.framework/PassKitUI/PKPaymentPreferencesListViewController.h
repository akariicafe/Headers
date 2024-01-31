@class NSArray, NSString, PKPaymentPreferenceOptionListItem, PKContactFormatValidator, PKPaymentPreferenceContactSectionController;

@interface PKPaymentPreferencesListViewController : PKDynamicCollectionViewController <PKPaymentPreferenceSectionControllerDelegate, PKPaymentPreferenceContactSectionControllerDelegate, PKAddressEditorViewControllerDelegate, CNContactPickerDelegate, PKAddressSearcherViewControllerDelegate> {
    id /* block */ _handler;
    PKContactFormatValidator *_contactFormatValidator;
    PKPaymentPreferenceContactSectionController *_editingContactSectionController;
    PKPaymentPreferenceOptionListItem *_editingItem;
    long long _style;
}

@property (retain, nonatomic) NSArray *preferences;
@property (nonatomic) BOOL preferenceHasSeparateAddItemsSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_keyboardDidShow:(id)a0;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)_updateContactAtIndex:(unsigned long long)a0 withCell:(id)a1;
- (id)initWithPreferences:(id)a0 title:(id)a1 style:(long long)a2 handler:(id /* block */)a3 contactFormatValidator:(id)a4;
- (void)_endCurrentInlineEditing;
- (void)_handleSelectedContact:(id)a0;
- (void)_reloadEditedSection:(id)a0;
- (id)_requiredKeysForContactPreference:(id)a0;
- (void)_resetEditingContact:(id)a0 withCell:(id)a1 forRow:(unsigned long long)a2;
- (void)_setupSectionControllers;
- (void)_updateNavigationBarButtons;
- (void)addressEditorViewController:(id)a0 selectedContact:(id)a1;
- (void)addressEditorViewControllerDidCancel:(id)a0;
- (void)addressSearcherViewController:(id)a0 selectedContact:(id)a1;
- (void)addressSearcherViewControllerDidCancel:(id)a0;
- (BOOL)collectionViewIsEditingForSectionController:(id)a0;
- (void)presentHideMyEmailAlertController;
- (void)presentMeCardAlertControllerWithContact:(id)a0 contactKey:(id)a1 handler:(id /* block */)a2;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1 forSectionController:(id)a2;
- (void)showAddressEditorForContactItem:(id)a0 inSectionController:(id)a1;
- (void)showAddressPickerForPreference:(id)a0 inSectionController:(id)a1;
- (void)showContactsPickerForPreference:(id)a0 inSectionController:(id)a1;
- (void)startInlineEditingForContactItem:(id)a0 inSectionController:(id)a1;

@end
