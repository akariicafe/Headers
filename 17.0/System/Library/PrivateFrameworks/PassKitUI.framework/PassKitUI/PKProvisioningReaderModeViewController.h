@class PKPaymentSetupFieldsModel, NSString, PKPaymentSetupProduct, PKReaderModeProvisioningView, UIScrollView, PKContactlessCardIngester, NSTimer;
@protocol PKProvisioningReaderModeViewControllerDelegate;

@interface PKProvisioningReaderModeViewController : UIViewController <PKContactlessCardIngesterDelegate, PKProvisioningFieldsUIRenderer> {
    long long _context;
    id<PKProvisioningReaderModeViewControllerDelegate> _delegate;
    PKPaymentSetupFieldsModel *_fieldsModel;
    PKPaymentSetupProduct *_product;
    BOOL _isWatch;
    PKReaderModeProvisioningView *_provisioningView;
    UIScrollView *_scrollView;
    unsigned long long _state;
    unsigned long long _stateOnRetry;
    PKContactlessCardIngester *_cardIngester;
    NSString *_cardSessionToken;
    NSTimer *_cardNotFoundTimer;
    BOOL _idleTimerDisabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)contactlessCardIngester:(id)a0 didFailToIngestCardWithError:(id)a1 resetProvisioning:(BOOL)a2 isRecoverable:(BOOL)a3;
- (void)contactlessCardIngester:(id)a0 didUpdateCardIngestionStatus:(unsigned long long)a1;
- (void)_startIngestion;
- (void)_done:(id)a0;
- (void)_hideBackButton:(BOOL)a0;
- (void)_invalidateCardNotFoundTimer;
- (void)_resetProvisioningState;
- (void)_setIdleTimerDisabled:(BOOL)a0;
- (void)_setupCardIngester;
- (void)_startCardNotFoundTimer;
- (void)_startReadingCard;
- (void)_startTransferringCard;
- (void)_tearDownCardIngester;
- (void)_updateToUIState:(unsigned long long)a0;
- (void)cardNotFoundTimerFired:(id)a0;
- (void)didTransitionTo:(long long)a0 loading:(BOOL)a1;
- (void)didUpdateFieldModel;
- (id)initWithContext:(long long)a0 product:(id)a1 isWatch:(BOOL)a2 fieldsModel:(id)a3 delegate:(id)a4;
- (void)showReaderModeError:(id)a0 isRecoverable:(BOOL)a1;
- (void)showWithProvisioningError:(id)a0;

@end
