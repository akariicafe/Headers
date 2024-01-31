@protocol SKUITableViewSectionDelegate;

@interface SKUITableViewSection : NSObject

@property (weak, nonatomic) id<SKUITableViewSectionDelegate> delegate;
@property (nonatomic) BOOL hidesHeaderView;
@property (nonatomic) long long sectionIndex;
@property (readonly, nonatomic) long long numberOfRowsInSection;

- (void).cxx_destruct;
- (id)footerViewForTableView:(id)a0;
- (id)headerViewForTableView:(id)a0;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forIndexPath:(id)a2;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
