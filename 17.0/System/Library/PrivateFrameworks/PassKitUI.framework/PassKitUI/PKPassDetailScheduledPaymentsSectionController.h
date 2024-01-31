@class PKPaymentPass, NSArray, NSString, PKAccountService, NSDateFormatter, PKAccount;
@protocol PKPassDetailScheduledPaymentsSectionControllerDelegate;

@interface PKPassDetailScheduledPaymentsSectionController : PKPaymentPassDetailSectionController <PKAccountServiceObserver, PKAccountAutomaticPaymentsControllerDelegate> {
    unsigned long long _style;
    PKAccount *_account;
    PKPaymentPass *_pass;
    PKAccountService *_accountService;
    NSDateFormatter *_dueDateFormatter;
    NSDateFormatter *_dueTimeFormatter;
    BOOL _loadingPayments;
    BOOL _loadingAutomaticPayments;
    NSString *_presentationSceneIdentifier;
    NSArray *_allSectionIdentifiers;
    NSArray *_sectionIdentifiers;
}

@property (readonly, nonatomic) NSArray *recurringPayments;
@property (readonly, nonatomic) NSArray *scheduledPayments;
@property (weak, nonatomic) id<PKPassDetailScheduledPaymentsSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validForPaymentPass:(id)a0;

- (void)dealloc;
- (void)setCurrentSegment:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)sectionIdentifiers;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)a0;
- (BOOL)_updateSections;
- (id)allSectionIdentifiers;
- (id)_accountServiceScheduledPaymentsCellForRowIndex:(long long)a0 sectionIdentifier:(id)a1 tableView:(id)a2;
- (unsigned long long)_accountServiceScheduledPaymentsRowTypeForRowIndex:(long long)a0 sectionIdentifier:(id)a1;
- (id)_dueDateFormatter;
- (id)_dueTimeFormatter;
- (void)_fetchScheduledPaymentsWithAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_scheduledPaymentCellForPayment:(id)a0 tableView:(id)a1;
- (BOOL)_shouldDisplaySection:(id)a0;
- (id)_titleForScheduledPaymentsSection;
- (void)accountAutomaticPaymentsController:(id)a0 didSchedulePayment:(id)a1;
- (void)fetchScheduledPaymentsAndReloadSections:(id /* block */)a0;
- (id)initWithStyle:(unsigned long long)a0 account:(id)a1 pass:(id)a2 accountService:(id)a3 delegate:(id)a4;
- (void)preflight:(id /* block */)a0;
- (void)presentSchedulePayments:(id)a0 completion:(id /* block */)a1;
- (id)presentationSceneIdentifierForAccountAutomaticPaymentsController:(id)a0;
- (void)reloadScheduledPayments;
- (BOOL)shouldHighlightRowAtIndexPath:(id)a0 sectionIdentifier:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSectionIdentifier:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)titleForFooterInSectionIdentifier:(id)a0;
- (id)titleForHeaderInSectionIdentifier:(id)a0;
- (void)updateWithAccount:(id)a0;

@end
