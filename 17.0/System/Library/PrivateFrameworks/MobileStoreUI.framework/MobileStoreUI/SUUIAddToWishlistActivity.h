@class SUUIProductPageItem, SUUIClientContext;

@interface SUUIAddToWishlistActivity : UIActivity {
    SUUIClientContext *_clientContext;
    SUUIProductPageItem *_item;
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
