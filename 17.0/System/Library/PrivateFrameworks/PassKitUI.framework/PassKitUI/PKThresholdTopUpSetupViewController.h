@class PKThresholdTopUpActionsSectionController, NSString, PKDashboardMessageSectionController, NSOrderedSet, PKThresholdTopUpSelectionSectionController, PKPaymentRequest, NSDecimalNumber, PKPaymentPass;
@protocol PKThresholdTopUpSetupViewControllerDelegate;

@interface PKThresholdTopUpSetupViewController : PKPaymentSetupOptionsViewController <PKThresholdTopUpSelectionSectionControllerDelegate, PKThresholdTopUpActionsSectionControllerDelegate, PKPaymentMethodSelectionViewControllerDelegate, PKDashboardMessageSectionControllerDelegate> {
    PKThresholdTopUpSelectionSectionController *_sectionController;
    PKThresholdTopUpActionsSectionController *_actionController;
    PKDashboardMessageSectionController *_messageSectionController;
    id<PKThresholdTopUpSetupViewControllerDelegate> _delegate;
    NSString *_paymentMethodName;
    long long _viewStyle;
}

@property (retain, nonatomic) NSString *amountTitle;
@property (retain, nonatomic) NSString *thresholdTitle;
@property (retain, nonatomic) NSString *paymentMethodTitle;
@property (retain, nonatomic) NSString *paymentMethodIdentifier;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) NSString *cancelTitle;
@property (readonly, nonatomic) NSDecimalNumber *currentAmount;
@property (readonly, nonatomic) NSDecimalNumber *currentThreshold;
@property (readonly, nonatomic) PKPaymentPass *selectedPass;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL editingValues;
@property (nonatomic) BOOL editingUnavailable;
@property (retain, nonatomic) NSOrderedSet *messages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)turnOn:(id)a0;
- (void)changeEditMode:(id)a0;
- (void)_continuousButtonPressed:(id)a0;
- (void)_setupCreateNavigationItem;
- (void)_setupDefaultNavigationItem;
- (void)_setupEditNavigationItem;
- (void)_skipButtonPressed:(id)a0;
- (void)didSelectPaymentMethod;
- (id)initWithAmountSuggestions:(id)a0 selectedAmount:(id)a1 thresholdSuggestions:(id)a2 selectedThreshold:(id)a3 currencyCode:(id)a4 paymentMethodName:(id)a5 paymentMethodIdentifier:(id)a6 mode:(long long)a7 viewStyle:(long long)a8 delegate:(id)a9;
- (void)paymentMethodSelectionViewController:(id)a0 didSelectPaymentMethod:(id)a1;
- (void)paymentMethodSelectionViewController:(id)a0 didToggleUseAppleCashBalance:(BOOL)a1;
- (void)performedCancelWithCompletion:(id /* block */)a0;
- (void)reloadItem:(id)a0 animated:(BOOL)a1;
- (void)setShowNavigationBarSpinner:(BOOL)a0;
- (void)triggerUpdate:(id)a0;

@end
