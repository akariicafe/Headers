@class UIPrintOptionsTableViewController;
@protocol UIPrintPanelAppearanceDelegate;

@interface UIPrintPanelNavigationController : UINavigationController

@property (weak, nonatomic) id<UIPrintPanelAppearanceDelegate> appearanceDelegate;
@property (weak, nonatomic) UIPrintOptionsTableViewController *printOptionsTableViewController;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)_presentationControllerDidDismiss:(id)a0;
- (id)initWithPrintOptionsTableViewController:(id)a0 rootViewController:(id)a1;

@end
