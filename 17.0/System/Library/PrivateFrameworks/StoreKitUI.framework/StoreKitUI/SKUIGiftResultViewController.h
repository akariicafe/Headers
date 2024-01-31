@class UIButton, UIImage, SKUIGiftItemView;

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {
    UIButton *_giftAgainButton;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (id)_itemView;
- (void)_doneButtonAction:(id)a0;
- (void)_giftAgainAction:(id)a0;
- (id)_itemImage;
- (void)_setItemImage:(id)a0 error:(id)a1;
- (id)initWithGift:(id)a0 configuration:(id)a1;

@end
