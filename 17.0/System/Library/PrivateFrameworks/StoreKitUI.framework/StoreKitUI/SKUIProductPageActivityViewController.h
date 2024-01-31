@class SKUIClientContext;

@interface SKUIProductPageActivityViewController : UIActivityViewController {
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
- (id)_titleForActivity:(id)a0;
- (id)_activityItemsForProductPageItem:(id)a0 clientContext:(id)a1;
- (id)_activityItemsForProductPageItemProvider:(id /* block */)a0 clientContext:(id)a1;
- (id)_applicationActivitiesForProductPageItem:(id)a0 clientContext:(id)a1;
- (id)initWithProductPageItem:(id)a0 clientContext:(id)a1;

@end
