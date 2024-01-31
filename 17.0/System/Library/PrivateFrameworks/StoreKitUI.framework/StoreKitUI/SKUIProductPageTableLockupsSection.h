@class SKUIStyledImageDataConsumer, NSString, SKUIResourceLoader, NSArray, SKUIMissingItemLoader, UIImage, SKUIProductPageTableSeparatorView, SKUIProductPageTableHeaderView, NSMapTable;

@interface SKUIProductPageTableLockupsSection : SKUIProductPageTableSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {
    NSMapTable *_artworkRequests;
    SKUIProductPageTableSeparatorView *_footerView;
    SKUIProductPageTableHeaderView *_headerView;
    NSArray *_lockups;
    SKUIMissingItemLoader *_missingItemLoader;
    UIImage *_placeholderImage;
    SKUIStyledImageDataConsumer *_productImageDataConsumer;
}

@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_missingItemLoader;
- (id)_productImageForItem:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)footerViewForTableView:(id)a0;
- (id)headerViewForTableView:(id)a0;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)initWithLockups:(id)a0 title:(id)a1;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (long long)numberOfRowsInSection;
- (id)selectionActionForTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
