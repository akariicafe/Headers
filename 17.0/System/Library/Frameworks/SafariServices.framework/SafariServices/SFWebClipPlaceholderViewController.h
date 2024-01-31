@class UITableViewCell;

@interface SFWebClipPlaceholderViewController : UITableViewController {
    UITableViewCell *_titleCell;
    UITableViewCell *_addressCell;
}

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (id)initWithStyle:(long long)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)loadView;
- (void).cxx_destruct;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cellInset;

@end
