@class SFAccountNoteTableViewCell, NSString, SFAccountHeaderViewCell, SFEditableTableViewCell, UIBarButtonItem;
@protocol SFAddSavedAccountViewControllerDelegate;

@interface SFAddSavedAccountViewController : UITableViewController <SFAccountHeaderViewCellDelegate, UITextFieldDelegate, SFAccountNoteTableViewCellDelegate> {
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFAccountHeaderViewCell *_titleCell;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    SFAccountNoteTableViewCell *_notesCell;
    NSString *_titleForEditing;
    NSString *_notesForEditing;
    NSString *_suggestedDomain;
    NSString *_password;
    NSString *_groupID;
    BOOL _didPreFillAndFocusFields;
}

@property (nonatomic) BOOL shouldPreFillStrongPassword;
@property (weak, nonatomic) id<SFAddSavedAccountViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_updateIcon;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)initWithGroupID:(id)a0;
- (void)_attemptToSavePassword;
- (void)_cancelBarButtonItemTapped:(id)a0;
- (void)_doneBarButtonItemTapped:(id)a0;
- (void)_preFillStrongPasswordIfRequested;
- (void)_savePasswordAndDismiss;
- (void)_textFieldChanged:(id)a0;
- (void)_updateDoneButtonEnabledState;
- (void)_updateHeaderViewCell;
- (void)_updateIconForCell:(id)a0;
- (void)_updateTextInputSuggestionsForPasswordField;
- (void)_updateTextInputSuggestionsForUserNameField;
- (void)_updateTextSuggestionsForTextField:(id)a0;
- (void)accountDetailHeaderViewCell:(id)a0 titleTextFieldDidChange:(id)a1;
- (id)initWithSuggestedDomain:(id)a0;
- (id)initWithSuggestedDomain:(id)a0 password:(id)a1;
- (void)returnKeyActivatedInAccountDetailHeaderViewCell:(id)a0;
- (void)updatedIconIsAvailableForDomain:(id)a0;

@end
