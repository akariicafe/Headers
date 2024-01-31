@class ACAccount;

@interface RMAccountDetailsViewController : ACUIViewController

@property (retain) ACAccount *account;

- (void)viewWillAppear:(BOOL)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)_processUserInfoDictionary;
- (id)_specifiersForAccount;
- (id)accountDescription:(id)a0;
- (id)accountEmail:(id)a0;

@end
