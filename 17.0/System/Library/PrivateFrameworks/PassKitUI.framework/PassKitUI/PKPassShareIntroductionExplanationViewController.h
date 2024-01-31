@class NSString, PKPassShareInitiationContext, PKHeroCardExplainationHeaderView, PKSharedPassSharesController, PKPassSnapshotter;
@protocol PKPassShareIntroductionExplanationViewControllerDelegate;

@interface PKPassShareIntroductionExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate> {
    PKSharedPassSharesController *_sharesController;
    PKPassShareInitiationContext *_context;
    id<PKPassShareIntroductionExplanationViewControllerDelegate> _delegate;
    PKPassSnapshotter *_passSnapshotter;
    PKHeroCardExplainationHeaderView *_heroView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void).cxx_destruct;
- (void)_loadCardArt;
- (void)_showShareUI;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithSharesController:(id)a0 context:(id)a1 delegate:(id)a2;

@end
