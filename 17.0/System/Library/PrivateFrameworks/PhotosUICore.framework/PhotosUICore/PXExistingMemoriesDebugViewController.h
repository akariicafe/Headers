@class NSArray, NSDictionary, NSString;

@interface PXExistingMemoriesDebugViewController : UITableViewController {
    NSArray *_sectionNames;
    NSDictionary *_itemsBySectionName;
    NSString *_name;
    NSDictionary *_options;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithName:(id)a0 options:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (id)_photosDetailsContextForMemory:(id)a0;
- (void)_fetchExistingMemories;
- (void)configureCell:(id)a0 withItem:(id)a1;

@end
