@class PKAccountInvitationController;

@interface PKAccountInvitationOnboardingViewController : PKExplanationViewController {
    PKAccountInvitationController *_controller;
    BOOL _didBeginOnboardingSubject;
}

- (void)viewDidLoad;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
- (id)_listItemConfigWithTitle:(id)a0 body:(id)a1 image:(id)a2;
- (void)_reportContinueTapped;
- (void)explanationViewDidSelectContinue:(id)a0;

@end
