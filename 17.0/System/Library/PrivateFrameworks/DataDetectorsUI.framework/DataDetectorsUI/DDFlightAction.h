@class UINavigationController;

@interface DDFlightAction : DDAction {
    UINavigationController *_viewController;
}

- (id)viewController;
- (id)iconName;
- (id)localizedName;
- (void).cxx_destruct;
- (int)interactionType;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (void)closePressed;
- (BOOL)extractAirlineCode:(id *)a0 flightNumber:(long long *)a1;
- (void)prepareViewControllerForActionController:(id)a0;
- (id)quickActionTitle;

@end
