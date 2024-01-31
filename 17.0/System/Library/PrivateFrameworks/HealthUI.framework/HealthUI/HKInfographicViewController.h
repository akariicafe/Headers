@class NSArray, NSString, UITableView;

@interface HKInfographicViewController : UIViewController <UITableViewDataSource> {
    long long _tableViewStyle;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithItems:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithContentItems:(id)a0;
- (void)_updateTableViewTopPadding;
- (id)initWithItems:(id)a0 tableViewStyle:(long long)a1;
- (id)initWithTextItems:(id)a0;

@end
