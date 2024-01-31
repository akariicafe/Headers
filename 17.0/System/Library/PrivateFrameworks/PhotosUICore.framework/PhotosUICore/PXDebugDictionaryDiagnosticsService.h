@interface PXDebugDictionaryDiagnosticsService : PXDiagnosticsService

- (id)title;
- (id)_debugDictionary;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (id)consoleDescription;
- (id)contextualViewController;

@end
