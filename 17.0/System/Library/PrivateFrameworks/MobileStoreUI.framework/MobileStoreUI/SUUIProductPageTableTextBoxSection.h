@class SUUIColorScheme, NSString, SUUIClientContext, SUUILayoutCache;

@interface SUUIProductPageTableTextBoxSection : SUUIProductPageTableSection {
    SUUIClientContext *_clientContext;
    BOOL _isExpanded;
}

@property (retain, nonatomic) SUUILayoutCache *textLayoutCache;
@property (nonatomic) long long stringIndex;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SUUIColorScheme *colorScheme;

- (void).cxx_destruct;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)initWithClientContext:(id)a0;
- (long long)numberOfRowsInSection;
- (id)selectionActionForTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
