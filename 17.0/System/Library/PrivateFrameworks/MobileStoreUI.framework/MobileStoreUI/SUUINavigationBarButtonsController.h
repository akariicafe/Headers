@class NSString, NSMapTable, SUUINavigationBarViewElement;

@interface SUUINavigationBarButtonsController : SUUINavigationBarSectionController <SUUIItemOfferButtonDelegate> {
    NSMapTable *_buttonItemElements;
    NSMapTable *_buttonItemToImageResourceCacheKey;
    SUUINavigationBarViewElement *_navigationBarElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_buttonAction:(id)a0;
- (void)_cancelConfirmationAction:(id)a0;
- (id)_imageForImageViewElement:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageInsetsForImageViewElement:(id)a0;
- (void)_itemOfferAction:(id)a0;
- (void)_reloadButtonItem:(id)a0 withButtonViewElement:(id)a1;
- (void)_showConfirmationAction:(id)a0;
- (void)_updateButtonItem:(id)a0 withButtonViewElement:(id)a1;
- (void)_updateItemOfferButton:(id)a0 withButtonViewElement:(id)a1;
- (id)addButtonItemWithButtonViewElement:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)barButtonItemForElementIdentifier:(id)a0;
- (void)disconnectAllButtons;
- (id)initWithNavigationBarViewElement:(id)a0;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)a0;

@end
