@interface SiriMailUI.RecipientViewController_Phone : UIViewController <CNContactPickerDelegate, CNComposeRecipientTextViewDelegate, CNAutocompleteSearchConsumer, CNAutocompleteResultsTableViewControllerDelegate> {
    void /* unknown type, empty encoding */ composeView;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ composeViewHeightConstraint;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ resultsTableViewController;
    void /* unknown type, empty encoding */ resultsTableView;
    void /* unknown type, empty encoding */ resultsTableViewHeightConstraint;
    void /* unknown type, empty encoding */ searchManager;
    void /* unknown type, empty encoding */ foundSearchResults;
    void /* unknown type, empty encoding */ currentSearchTaskID;
}

- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(long long)a2;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)autocompleteResultsController:(id)a0 didCollapseSelectedRecipient:(id)a1;
- (void)autocompleteResultsController:(id)a0 didExpandSelectedRecipient:(id)a1;
- (void)composeHeaderView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (id)composeRecipientView:(id)a0 composeRecipientForAddress:(id)a1;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)consumeAutocompleteSearchResults:(id)a0 taskID:(id)a1;
- (void)finishedSearchingForAutocompleteResults;
- (void)recipientViewDidBecomeFirstResponder:(id)a0;
- (void)recipientViewDidResignFirstResponder:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
