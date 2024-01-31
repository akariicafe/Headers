@class NSString, NSArray, UITableView;

@interface NCSupplementaryViewPrototypeRecipeContentSortingViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    NSArray *_exampleGroupIdentifiersAndBaseColors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)title;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)_colorForSection:(unsigned long long)a0 index:(unsigned long long)a1;
- (id)_groupingIdentifierForSection:(unsigned long long)a0;

@end
