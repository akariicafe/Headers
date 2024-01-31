@interface PXCMMDiagnosticsService : PXDiagnosticsService

- (id)title;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)contextualViewController;
- (id)settingsViewController;

@end
