@class NSString;

@interface PKVirtualCardPrivacyExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate> {
    unsigned long long _referralSource;
    BOOL _didBeginWalletProvisioningSubject;
}

@property (copy, nonatomic) id /* block */ resultCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithContext:(long long)a0 referralSource:(unsigned long long)a1 resultCallback:(id /* block */)a2;

@end
