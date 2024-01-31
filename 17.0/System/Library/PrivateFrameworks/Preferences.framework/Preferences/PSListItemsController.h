@class PSSpecifier;

@interface PSListItemsController : PSListController {
    long long _rowToSelect;
    BOOL _deferItemSelection;
    BOOL _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
    id _retainedTarget;
}

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)suspend;
- (void)didEnterBackground;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)willEnterForeground;
- (void)viewDidLoad;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)didLock;
- (id)itemsFromParent;
- (void)_addStaticText:(id)a0;
- (id)identifierForValue:(id)a0;
- (BOOL)isRestrictionList;
- (id)itemsFromDataSource;
- (void)listItemSelected:(id)a0;
- (void)prepareSpecifiersMetadata;
- (void)saveChangesIfNeeded;
- (void)scrollToSelectedCell;
- (void)setIsRestrictionList:(BOOL)a0;
- (void)setRowToSelect;
- (void)setValueForSpecifier:(id)a0 defaultValue:(id)a1;

@end
