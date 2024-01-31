@class NSString, NSPointerArray, UITableView;

@interface NCSupplementaryViewPrototypeRecipeContentTintingViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    NSPointerArray *_weakStackViewControllers;
    BOOL _stackSubordinate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)title;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_setTextColor:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_setTintColor:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)_enumerateStack:(id /* block */)a0;
- (id)_initWithGroupingIdentifier:(id)a0 stackSubordinate:(BOOL)a1;

@end
