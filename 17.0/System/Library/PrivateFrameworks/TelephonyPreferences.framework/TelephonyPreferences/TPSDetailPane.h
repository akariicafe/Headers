@class NSString, UITableViewCell, UITableView;

@interface TPSDetailPane : TPSEditingPane <UITableViewDelegate, UITableViewDataSource>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) UITableViewCell *tableViewCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)preferenceValue;
- (void)setPreferenceValue:(id)a0;

@end
