@interface EKUIAvailabilityNavigationController : EKUIManagedNavigationController {
    long long _modalPresentationStyle;
}

- (id)initWithRootViewController:(id)a0;
- (BOOL)wantsManagement;
- (long long)modalPresentationStyle;
- (BOOL)canManagePresentationStyle;
- (void)setModalPresentationStyle:(long long)a0;
- (BOOL)presentModally;

@end
