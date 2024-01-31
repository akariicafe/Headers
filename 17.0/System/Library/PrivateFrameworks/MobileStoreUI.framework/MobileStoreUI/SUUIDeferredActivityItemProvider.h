@class SUUIProductPageItem, SUUIClientContext;

@interface SUUIDeferredActivityItemProvider : UIActivityItemProvider

@property (copy) id /* block */ itemProvider;
@property (retain) SUUIClientContext *clientContext;
@property (readonly, copy) SUUIProductPageItem *productPageItem;

+ (id)placeholderItem;

- (void).cxx_destruct;
- (id)initWithProductPageItem:(id)a0 clientContext:(id)a1;
- (id)initWithProductPageItemProvider:(id /* block */)a0 clientContext:(id)a1;
- (id)initWithProductPageItemProvider:(id /* block */)a0 clientContext:(id)a1 placeholderItem:(id)a2;

@end
