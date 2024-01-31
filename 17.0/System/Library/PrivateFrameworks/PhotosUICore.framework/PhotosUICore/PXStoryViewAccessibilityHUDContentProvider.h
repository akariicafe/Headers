@interface PXStoryViewAccessibilityHUDContentProvider : NSObject <PXStoryDiagnosticHUDContentProvider>

- (id)initWithViewModel:(id)a0;
- (void)attachToAccessibilityIfNeeded;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;

@end
