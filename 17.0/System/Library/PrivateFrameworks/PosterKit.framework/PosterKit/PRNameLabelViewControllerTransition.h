@class BSUIVibrancyConfiguration, PRNameLabelViewController;

@interface PRNameLabelViewControllerTransition : NSObject <PREditorTitleViewControllerTransitioning>

@property (readonly, nonatomic) PRNameLabelViewController *viewController;
@property (readonly, nonatomic) BSUIVibrancyConfiguration *fromConfiguration;
@property (readonly, nonatomic) BSUIVibrancyConfiguration *toConfiguration;

- (void)updateInteractiveTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0 fromVibrancyConfiguration:(id)a1 toVibrancyConfiguration:(id)a2;

@end
