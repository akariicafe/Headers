@class UIViewController, PSSpecifier;

@interface STCommunicationSafetyAnalyticsTipGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain) PSSpecifier *communicationSafetyAnalyticsTipSpecifer;
@property (weak) UIViewController *rootViewController;

+ (id)providerWithCoordinator:(id)a0 rootViewController:(id)a1;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)_acknowledgeTip;
- (void)_setCommunicationSafetyAnalyticsTip;
- (BOOL)_shouldShowAnalyticsTip;
- (void)_showCommunicationSafetyAnalyticsTipIfNeeded;

@end
