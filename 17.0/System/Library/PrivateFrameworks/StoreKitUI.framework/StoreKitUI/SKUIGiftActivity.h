@class NSString, SKUIClientContext, SKUIProductPageItem;

@interface SKUIGiftActivity : UIActivity <SKUIGiftViewControllerDelegate> {
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_beforeActivity;
- (void)giftViewController:(id)a0 didFinishWithResult:(BOOL)a1;
- (id)initWithItem:(id)a0 clientContext:(id)a1;

@end
