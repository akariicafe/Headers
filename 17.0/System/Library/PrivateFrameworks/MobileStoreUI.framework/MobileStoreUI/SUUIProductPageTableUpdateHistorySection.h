@class SUUIColorScheme, NSArray, SUUIClientContext, SUUILayoutCache, NSMutableIndexSet, SUUIProductPageTableExpandableHeaderView, NSDateFormatter;

@interface SUUIProductPageTableUpdateHistorySection : SUUIProductPageTableSection {
    SUUIClientContext *_clientContext;
    NSMutableIndexSet *_expandedIndexSet;
    SUUIProductPageTableExpandableHeaderView *_headerView;
    NSDateFormatter *_dateFormatter;
}

@property (nonatomic) long long firstStringIndex;
@property (copy, nonatomic) NSArray *releaseNotes;
@property (retain, nonatomic) SUUILayoutCache *textLayoutCache;
@property (retain, nonatomic) SUUIColorScheme *colorScheme;

- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (void)_reloadHeaderView;
- (id)headerViewForTableView:(id)a0;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)initWithClientContext:(id)a0;
- (long long)numberOfRowsInSection;
- (id)selectionActionForTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
