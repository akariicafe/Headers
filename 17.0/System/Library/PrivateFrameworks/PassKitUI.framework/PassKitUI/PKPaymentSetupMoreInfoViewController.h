@class NSArray, PKSecureElementPass, NSString;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentSetupMoreInfoViewController : PKExplanationViewController <PKLoadingUIProviding> {
    BOOL _didBeginReportingSubject;
    long long _reportingSource;
}

@property (readonly, retain, nonatomic) PKSecureElementPass *pass;
@property (readonly, retain, nonatomic) NSArray *moreInfoItems;
@property (readonly, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (nonatomic) BOOL isFinalViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_next;
- (id)_currentItem;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (unsigned long long)edgesForExtendedLayout;
- (void)_beginReportingIfNecessary;
- (id)_nextItems;
- (void)_alternateActionWithCompletion:(id /* block */)a0;
- (void)_endReportingIfNecessary;
- (void)_handleDismissal;
- (void)_handlePush;
- (BOOL)_isExpressEducation;
- (void)_linkTapped;
- (void)_reportDoneButtonTapped;
- (void)_reportExpressModeDisable;
- (void)_reportExpressModeEnable;
- (void)_reportTurnOffExpressButtonTapped;
- (void)_reportViewDidAppear;
- (void)_reportevent:(id)a0;
- (id)_reportingSubject;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithMoreInfoItems:(id)a0 paymentPass:(id)a1 targetDevice:(id)a2 context:(long long)a3 dismissalHandler:(id /* block */)a4;
- (id)initWithMoreInfoItems:(id)a0 paymentPass:(id)a1 targetDevice:(id)a2 context:(long long)a3 dismissalHandler:(id /* block */)a4 reportingSource:(long long)a5;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
