@interface PXImportDiagnosticsService : PXDiagnosticsService

+ (void)simulateFakeImportSource;

- (void)performAction;
- (id)title;
- (BOOL)canPerformAction;

@end
