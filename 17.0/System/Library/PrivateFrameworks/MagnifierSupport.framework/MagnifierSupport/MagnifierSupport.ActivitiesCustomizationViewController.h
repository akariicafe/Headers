@interface MagnifierSupport.ActivitiesCustomizationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ activities;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ commitActivityButton;
    void /* unknown type, empty encoding */ activityNameOnBoardingController;
    void /* unknown type, empty encoding */ activityToBeDuped;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)presentationControllerDidDismiss:(id)a0;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commitAndDismiss;

@end
