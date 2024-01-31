@class SKUIClientContext, SKUIProductPageItem;

@interface SKUIAddToWishlistActivity : UIActivity {
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_beforeActivity;
- (id)initWithItem:(id)a0 clientContext:(id)a1;

@end
