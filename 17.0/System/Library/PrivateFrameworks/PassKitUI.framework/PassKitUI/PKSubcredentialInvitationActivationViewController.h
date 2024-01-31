@class PKSubcredentialInvitationFlowControllerContext, NSString, PKHeroCardExplainationHeaderView;
@protocol PKSubcredentialInvitationFlowControllerProtocol;

@interface PKSubcredentialInvitationActivationViewController : PKExplanationViewController <PKSubcredentialInvitationFlowControllerOperation, PKViewControllerPreflightable> {
    PKHeroCardExplainationHeaderView *_heroCardView;
}

@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) id<PKSubcredentialInvitationFlowControllerProtocol> flowController;
@property (retain, nonatomic) PKSubcredentialInvitationFlowControllerContext *provisioningContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;

@end
