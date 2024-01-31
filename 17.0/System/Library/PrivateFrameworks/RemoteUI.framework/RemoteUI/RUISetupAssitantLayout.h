@interface RUISetupAssitantLayout : NSObject

+ (struct CGSize { double x0; double x1; })_preferredContentSizeInBuddy;

- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_insetsForViewController:(id)a0;
- (BOOL)_isViewControllerInBuddyiPad:(id)a0;
- (BOOL)_isViewControllerInFormSheet:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })directionalLayoutMarginsForViewController:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeForViewController:(id)a0;

@end
