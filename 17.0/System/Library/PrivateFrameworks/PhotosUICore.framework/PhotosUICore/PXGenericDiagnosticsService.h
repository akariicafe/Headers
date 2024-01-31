@interface PXGenericDiagnosticsService : PXDiagnosticsService

- (id)title;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)consoleDescription;
- (id)settingsViewController;

@end
