@class NSString, NSArray, PKPeerPaymentAccount, UIViewController;
@protocol PKPaymentPassDetailWrapperSectionControllerDelegate;

@interface PKPeerPaymentRecurringPaymentPassDetailsSectionController : PKPaymentPassDetailSectionController <PKPeerPaymentServiceObserver> {
    NSArray *_recurringPayments;
    PKPeerPaymentAccount *_account;
    long long _context;
    UIViewController<PKPaymentPassDetailWrapperSectionControllerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validForPaymentPass:(id)a0;

- (void).cxx_destruct;
- (id)sectionIdentifiers;
- (void)recurringPaymentsChanged;
- (id)allSectionIdentifiers;
- (void)_presentRecurringPaymentsWithIdentifier:(id)a0;
- (BOOL)_sectionAvailable;
- (void)_updateRecurringPaymentsWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 pass:(id)a1 context:(long long)a2 passLibraryDataProvider:(id)a3;
- (void)preflight:(id /* block */)a0;
- (void)presentRecurringPaymentsWithIdentifier:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;

@end
