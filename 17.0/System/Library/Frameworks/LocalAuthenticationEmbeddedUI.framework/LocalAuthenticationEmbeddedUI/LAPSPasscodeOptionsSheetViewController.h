@class NSString, NSOrderedSet, LAPSPasscodeOptionsViewControllerConfiguration, UITableView;
@protocol LAPSPasscodeOptionsViewControllerDelegate;

@interface LAPSPasscodeOptionsSheetViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, LAPSPasscodeOptionsViewController> {
    LAPSPasscodeOptionsViewControllerConfiguration *_config;
    UITableView *_tableView;
    NSOrderedSet *_allowedPasscodeTypes;
    long long _selectedPasscodeTypeIndex;
}

@property (weak, nonatomic) id<LAPSPasscodeOptionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_setup;
- (void)_close:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (double)_heightForFooterInSection:(long long)a0;
- (double)_heightForHeaderInSection:(long long)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)_cellIdentifierForIndexPath:(id)a0;
- (void)_changePasscodeRecoveryStatus:(id)a0;
- (void)_changeSelectedPasscodeTypeIndex:(long long)a0;

@end
