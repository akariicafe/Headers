@class SUUIFocusedTouchGestureRecognizer, SUUIGiftConfirmView, SUUIGiftPurchaseRequest;

@interface SUUIGiftConfirmViewController : SUUIGiftStepViewController {
    SUUIGiftConfirmView *_confirmView;
    BOOL _isShowingConfirmation;
    SUUIGiftPurchaseRequest *_purchaseRequest;
    SUUIFocusedTouchGestureRecognizer *_touchRecognizer;
}

- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (id)_confirmButtonTitle;
- (id)_buyButtonTitle;
- (void)_buyButtonAction:(id)a0;
- (void)_cancelBuyConfirmation:(id)a0;
- (void)_finishPurchaseWithResult:(BOOL)a0 errorMessage:(id)a1;
- (id)_newBuyBarButtonItemWithTitle:(id)a0;
- (void)_purchaseGift;
- (void)_removeCancelGestureRecognizer;
- (void)_setShowingConfirmation:(BOOL)a0 animated:(BOOL)a1;
- (void)_showSuccessPage;
- (void)_termsButtonAction:(id)a0;
- (id)initWithGift:(id)a0 configuration:(id)a1;

@end
