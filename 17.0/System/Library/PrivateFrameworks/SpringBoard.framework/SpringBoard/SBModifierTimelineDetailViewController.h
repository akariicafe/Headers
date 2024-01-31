@class SBSwitcherModifierTimelineEntry, NSString, SBModifierTimelineModifierDetailViewController, SBModifierTimelineTextDetailViewController, UITableView;

@interface SBModifierTimelineDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    SBModifierTimelineModifierDetailViewController *_modifierDetailViewController;
    SBModifierTimelineTextDetailViewController *_textDetailViewController;
}

@property (retain, nonatomic) SBSwitcherModifierTimelineEntry *entry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_done;
- (long long)_numberOfModifiersInStackSnapshot:(id)a0;
- (id)_prettyStringForEventPredicateDetails:(id)a0;
- (id)_stackSnapshotAtIndex:(long long)a0;

@end
