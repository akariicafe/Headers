@class SKUIColorScheme, NSString, SKUIClientContext, SKUILayoutCache;

@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    BOOL _isExpanded;
}

@property (retain, nonatomic) SKUILayoutCache *textLayoutCache;
@property (nonatomic) long long stringIndex;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (void).cxx_destruct;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)initWithClientContext:(id)a0;
- (long long)numberOfRowsInSection;
- (id)selectionActionForTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
