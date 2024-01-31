@class PSSpecifier, NSArray, NSString, CNUIFavoritesEntryPicker, TPFavoritesController;

@interface AXCLFCommunicationLimitController : PSListController <CNContactPickerDelegate, CNUIFavoritesEntryPickerDelegate>

@property (retain, nonatomic) PSSpecifier *incomingGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *incomingAllContactsSpecifier;
@property (retain, nonatomic) PSSpecifier *incomingSelectedContactsSpecifier;
@property (retain, nonatomic) TPFavoritesController *favoritesController;
@property (retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker;
@property (nonatomic) BOOL shouldAvoidReloadForNextFavoritesUpdate;
@property (readonly, nonatomic) NSArray *communicationLimitSpecifiers;
@property (readonly, copy, nonatomic) NSString *outgoingHeaderText;
@property (readonly, copy, nonatomic) NSString *incomingHeaderText;
@property (readonly, copy, nonatomic) NSString *contactPickerPrompt;
@property (readonly, nonatomic) NSArray *actionTypes;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (nonatomic) NSString *incomingCommunicationLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_updateEditButton;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (long long)tableViewStyle;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (id)actionTypesForFavoritesEntryPicker:(id)a0;
- (void)contactPickerDidCancel:(id)a0;
- (void)favoritesEntryPicker:(id)a0 didPickEntry:(id)a1;
- (void)_addFavorite:(id)a0;
- (void)_favoritesDidChange:(id)a0;
- (id)_favoritesEntryPickerContactForContact:(id)a0 contactStore:(id)a1;
- (id)_favoritesSpecifiers;
- (id)_incomingCommunicationLimitForSpecifier:(id)a0;
- (BOOL)_isAllowedFavoritesEntry:(id)a0;
- (id)_specifierForFavoritesEntry:(id)a0;
- (id)_specifierForIncomingCommunicationLimit:(id)a0;

@end
