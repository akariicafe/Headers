@class BSUIVibrancyConfiguration, PREditorRootViewController, CSCachingVibrancyTransitionProvider;

@interface PREditorLookSwitchingComplicationTransition : NSObject

@property (retain, nonatomic) BSUIVibrancyConfiguration *fromVibrancyConfiguration;
@property (retain, nonatomic) BSUIVibrancyConfiguration *toVibrancyConfiguration;
@property (weak, nonatomic) PREditorRootViewController *viewController;
@property (retain, nonatomic) CSCachingVibrancyTransitionProvider *cachingVibrancyTransitionProvider;

- (void)updateInteractiveTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void).cxx_destruct;
- (id)initWithFromVibrancyConfiguration:(id)a0 toVibrancyConfiguration:(id)a1 viewController:(id)a2 cachingVibrancyTransitionProvider:(id)a3;

@end
