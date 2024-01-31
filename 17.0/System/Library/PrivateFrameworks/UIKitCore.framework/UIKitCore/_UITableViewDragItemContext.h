@class NSIndexPath, UITableView;

@interface _UITableViewDragItemContext : NSObject

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (id)initWithIndexPath:(id)a0 forTableView:(id)a1;

@end
