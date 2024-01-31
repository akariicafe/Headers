@class SUUIProductPageItem, NSMutableArray, SUUIColorScheme;

@interface SUUIProductPageTableLinksSection : SUUIProductPageTableSection {
    NSMutableArray *_actions;
    SUUIProductPageItem *_item;
    NSMutableArray *_titles;
}

@property (retain, nonatomic) SUUIColorScheme *colorScheme;

- (void).cxx_destruct;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)initWithItem:(id)a0 clientContext:(id)a1 askPermission:(BOOL)a2;
- (long long)numberOfRowsInSection;
- (id)selectionActionForTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
