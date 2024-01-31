@class NSArray, NSDictionary, NSString;
@protocol FPUIAuthenticationDelegate;

@interface FPUIAuthenticationTableViewController : UITableViewController <FPUIAuthenticationConnectionFlowDelegate> {
    unsigned long long _state;
}

@property (weak, nonatomic) id<FPUIAuthenticationDelegate> authenticationDelegate;
@property (nonatomic) BOOL canTransitionToNextStep;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (copy, nonatomic) NSArray *sectionDescriptors;
@property (copy, nonatomic) NSDictionary *rowDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTitle;

- (void)_setState:(unsigned long long)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)_titleView;
- (void)setTitle:(id)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_cancel:(id)a0;
- (void)_stateDidChange;
- (id)_rowDescriptorForIndexPath:(id)a0;
- (id)_rowDescriptorsForSection:(long long)a0;
- (id)_tableView:(id)a0 viewOfType:(unsigned long long)a1 inSection:(long long)a2;
- (void)authenticationDelegate:(id)a0 didEncounterError:(id)a1;
- (void)authenticationDelegate:(id)a0 didFinishWithError:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticationDelegate:(id)a0 didReceiveCredentialDescriptors:(id)a1;
- (void)authenticationDelegate:(id)a0 didReceiveVolumeMountRepresentations:(id)a1;
- (id)defaultLeftBarButtonItem;
- (id)defaultRightBarButtonItem;
- (void)selectTextFieldAtIndexPath:(id)a0;
- (void)setNavBarActivityIndicatorHidden:(BOOL)a0;
- (void)setupTableViewSections;

@end
