@class SKUIClientContext;

@interface SKUIProductPageTableSection : SKUITableViewSection

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic, getter=isExpanded) BOOL expanded;

- (void).cxx_destruct;
- (double)heightForTextLayout:(id)a0 isExpanded:(BOOL)a1;
- (id)selectionActionForTableView:(id)a0 indexPath:(id)a1;
- (id)textBoxTableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
