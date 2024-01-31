@class NSArray, UINavigationController, PSUICarrierSpaceMyAccountWebViewController;

@interface PSUICarrierSpaceServicesController : PSListController {
    UINavigationController *_navCon;
    PSUICarrierSpaceMyAccountWebViewController *_myAccountWebViewController;
}

@property (retain, nonatomic) NSArray *appsList;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)getLogger;
- (id)specifiers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)moreAppsTapped:(id)a0;
- (void)carrierSpaceChanged;
- (void)launchMyAccountInSafari:(id)a0;
- (void)launchMyAccountInWebView:(id)a0;
- (id)primaryAppSpecifier;
- (BOOL)shouldShowMoreApps;
- (void)simStatusChanged;

@end
