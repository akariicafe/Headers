@class TSCellularPlanTableViewCell, NSString, UIBarButtonItem, UILabel, NSLayoutConstraint, UITableView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanConfirmationCodeViewController : SSUIViewController <UITextFieldDelegate, TSSetupFlowItem> {
    TSCellularPlanTableViewCell *_confirmationCodeCell;
    NSString *_fauxCardData;
    long long _userConsentResponse;
    BOOL _isMidOperation;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_cancelButton;
}

@property (weak, nonatomic) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly, nonatomic) NSString *confirmationCode;
@property (weak, nonatomic) UILabel *confirmationCodeTitleLabel;
@property (weak, nonatomic) UITableView *infoTableView;
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)canBeShownFromSuspendedState;
- (void)confirm:(id)a0;
- (id)initAsMidOperation;
- (id)initWithCardData:(id)a0;
- (void)userDidTapCancel;

@end
