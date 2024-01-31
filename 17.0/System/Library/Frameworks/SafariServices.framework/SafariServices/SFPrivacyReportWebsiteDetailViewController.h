@class NSArray, WBSTrackedFirstParty;

@interface SFPrivacyReportWebsiteDetailViewController : UITableViewController {
    WBSTrackedFirstParty *_website;
    NSArray *_sections;
}

@property (nonatomic) BOOL separatesBlockedTrackers;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_loadSections;
- (id)initWithWebsite:(id)a0;

@end
