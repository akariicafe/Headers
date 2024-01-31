@class NSString, CDPContext, CDPUICustodianOSSelectionViewModel;

@interface CDPUICustodianOSSelectionViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    CDPUICustodianOSSelectionViewModel *_viewModel;
    CDPContext *_cdpContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (double)heightForFooterInTableView:(id)a0;
- (id)viewForFooterInTableView:(id)a0;
- (id)_makeEventForEscapeOptionSelected:(id)a0;
- (id)_makeViewAppearedEvent;
- (id)_offersJoinedByComma;
- (id)initWithViewModel:(id)a0 cdpContext:(id)a1;

@end
