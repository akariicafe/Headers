@class HKOrganDonationRegistrant, NSString, NSArray, HKOrganDonationConnectionManager, UIView, UIFont, UIButton, UITableView, UIVisualEffectView, UIActivityIndicatorView, _HKMedicalIDData;

@interface HKOrganDonationConfirmationViewController : HKViewController <HKTitledBuddyHeaderViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    HKOrganDonationConnectionManager *_connectionManager;
    HKOrganDonationRegistrant *_registrant;
    UIView *_headerView;
    UIVisualEffectView *_footerView;
    UIFont *_bodyFont;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSArray *dataEntryItems;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) NSString *completionButtonTitle;
@property (copy, nonatomic) id /* block */ registrationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)submitButtonTapped:(id)a0;
- (id)_createTableHeaderView;
- (id)_createTableFooterView;
- (void)confirmSubmissionIfNecessaryWithConfirmHandler:(id /* block */)a0 andCancelHandler:(id /* block */)a1;
- (id)initWithRegistrant:(id)a0 medicalIDData:(id)a1 connectionManager:(id)a2;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)a0;

@end
