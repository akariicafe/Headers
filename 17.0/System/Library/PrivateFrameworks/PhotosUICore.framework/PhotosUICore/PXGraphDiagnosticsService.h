@interface PXGraphDiagnosticsService : PXDiagnosticsService

+ (id)viewControllerForDetailsOfAsset:(id)a0;

- (id)title;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)contextualViewController;
- (id)saliencyStringForAsset:(id)a0;
- (id)settingsViewController;

@end
