@class PKAccountBillPaymentPayInterestDescriptionView, PKAccountBillPaymentController, UILabel, NSDate, PKTransactionSource, NSDecimalNumber, PKAddBankAccountInformationViewController, PKContinuousButton, NSDateFormatter, NSCalendar, NSString, PKAccount, CLInUseAssertion, PKBillPaymentSuggestedAmountList, PKAccountUserCollection, UIPickerView, PKCompoundInterestCalculator;
@protocol PKAccountBillPaymentObserver;

@interface PKAccountBillPaymentPayLaterViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKAccountBillPaymentPayInterestDescriptionViewDelegate> {
    CLInUseAssertion *_CLInUse;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKTransactionSource *_transactionSource;
    PKAccountBillPaymentController *_billPaymentCoordinator;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    NSDate *_minDate;
    NSDate *_maxDate;
    long long _numDays;
    NSDateFormatter *_dateFormatterDayOfWeek;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_localDateFormatter;
    NSCalendar *_productCalendar;
    NSCalendar *_localCalendar;
    NSDecimalNumber *_selectedAmount;
    NSDecimalNumber *_remainingStatementBalance;
    NSDecimalNumber *_apr;
    BOOL _performingAction;
    long long _currentPickerViewRow[1];
    UIPickerView *_datePicker;
    PKContinuousButton *_payOnButton;
    UILabel *_payLaterTitleLabel;
    UILabel *_whenToPayQuestionLabel;
    PKCompoundInterestCalculator *_interestCalculator;
    PKAccountBillPaymentPayInterestDescriptionView *_interestDescriptionView;
    PKAddBankAccountInformationViewController *_addBankAccountViewController;
}

@property (weak, nonatomic) id<PKAccountBillPaymentObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)_accountDidChange:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_setEnabled:(BOOL)a0;
- (void)_updateLabelText;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)accountBillPaymentController:(id)a0 hasChangedState:(unsigned long long)a1 error:(id)a2 updatedAccount:(id)a3;
- (id)presentationSceneIdentifierForAccountBillPaymentController:(id)a0;
- (id)_addBankAccountInformationViewController;
- (id)_dateForRow:(long long)a0;
- (id)_dateStringForRow:(long long)a0 formatter:(id)a1;
- (void)_dismissViewControllerWithSuccess:(BOOL)a0;
- (id)_interestForSelectedDate:(id)a0;
- (double)_payButtonTopPadding;
- (void)_payOnButtonTapped:(id)a0;
- (void)_performBillPaymentWithAmount:(id)a0 scheduledDate:(id)a1 billPaymentSuggestedAmountDataEvent:(id)a2;
- (void)_presentAddBankAccount;
- (void)_presentAlertControllerForError:(id)a0;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (double)_sideMargin;
- (id)_stripTimeFromDate:(id)a0;
- (void)addBankAccountInformationViewController:(id)a0 didAddFundingSource:(id)a1;
- (void)addBankAccountInformationViewControllerDidFinish:(id)a0;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)a0;
- (void)billPaymentPayInterestDescriptionViewHasTappedLearnMore:(id)a0;
- (id)initWithAccount:(id)a0 accountUserCollection:(id)a1 billPaymentController:(id)a2 transactionSource:(id)a3 suggestionList:(id)a4 selectedAmount:(id)a5;

@end
