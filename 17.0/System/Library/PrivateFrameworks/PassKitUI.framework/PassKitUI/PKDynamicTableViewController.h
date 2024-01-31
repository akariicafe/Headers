@class NSArray, NSMutableDictionary, NSMutableArray;

@interface PKDynamicTableViewController : UITableViewController {
    NSMutableDictionary *_sectionControllerMap;
    NSMutableArray *_sectionItems;
    NSArray *_orderOfSectionIdentifiers;
}

@property (retain, nonatomic) NSArray *sectionControllers;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)indexOfSectionIdentifier:(id)a0;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)cellForRowAtIndexPath:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)hasSectionForSectionIdentifier:(id)a0;
- (long long)rowAnimationForDeletingSection:(unsigned long long)a0;
- (id)_computeSectionControllerMap:(id)a0;
- (void)_reloadData:(BOOL)a0;
- (id)_sectionControllerForSectionIdentifier:(id)a0;
- (void)_sortMappedSectionIdentifiers:(id)a0;
- (void)recomputeMappedSectionsAndReloadSections:(id)a0 sectionIdentifiers:(id)a1;
- (void)reloadRow:(long long)a0 inSectionWithSectionIdentifier:(id)a1;
- (void)reloadRows:(id)a0 inSectionWithSectionIdentifier:(id)a1;
- (void)reloadSectionIdentifier:(id)a0;
- (void)reloadSectionIdentifiers:(id)a0;
- (long long)rowAnimationForInsertingSection:(unsigned long long)a0;
- (long long)rowAnimationForReloadingSection:(unsigned long long)a0;
- (void)setSectionControllers:(id)a0 sectionIdentifiers:(id)a1;

@end
