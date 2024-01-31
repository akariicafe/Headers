@interface WorkflowUI.TriggerRootViewController : UIViewController <WFCreateAutomationCoordinatorDelegate, WFAutomationTriggerDataSourceDelegate> {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ homeManager;
    void /* unknown type, empty encoding */ createAutomationController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_automationListViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emptyStateViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)createAutomationCoordinatorDidCancel:(id)a0;
- (void)createAutomationCoordinatorDidFinish:(id)a0;
- (void)dataSourceDidUpdateTriggers:(id)a0;
- (void)startCreateNewPersonalAutomation;

@end
