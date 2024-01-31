@class UIFont, CSProminentDisplayViewController, CSCachingVibrancyTransitionProvider, BSUIVibrancyConfiguration;

@interface CSProminentDisplayInteractiveTransition : NSObject <CSProminentDisplayTransitioning>

@property (weak, nonatomic) CSProminentDisplayViewController *viewController;
@property (readonly, nonatomic) UIFont *baseFont;
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *fromVibrancyConfiguration;
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *toVibrancyConfiguration;
@property (retain, nonatomic) CSCachingVibrancyTransitionProvider *cachingVibrancyTransitionProvider;

- (void)updateInteractiveTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0 baseFont:(id)a1 fromVibrancyConfiguration:(id)a2 toVibrancyConfiguration:(id)a3;
- (id)initWithViewController:(id)a0 baseFont:(id)a1 fromVibrancyConfiguration:(id)a2 toVibrancyConfiguration:(id)a3 cachingVibrancyTransitionProvider:(id)a4;

@end
