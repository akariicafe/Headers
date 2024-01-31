@class UIView, NSNumberFormatter, WBSKnownTrackingThirdParty;

@interface SFPrivacyReportTrackerDetailViewController : UITableViewController {
    NSNumberFormatter *_numberFormatter;
    WBSKnownTrackingThirdParty *_tracker;
    UIView *_header;
}

- (void)viewLayoutMarginsDidChange;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithTracker:(id)a0;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_updateHeaderSize;

@end
