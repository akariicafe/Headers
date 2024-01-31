@class SULoadingView;

@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController {
    SULoadingView *_loadingView;
}

- (id)init;
- (void)dealloc;
- (id)itemAtIndexPath:(id)a0;
- (void)setSkLoading:(BOOL)a0;
- (BOOL)_addPurchaseBatch:(id)a0 forIndexPath:(id)a1;
- (void)_performPurchaseAnimationForIndexPath:(id)a0;
- (id)newNoItemsOverlayLabel;
- (BOOL)openDocumentForItemAtIndexPath:(id)a0 withApplication:(id)a1;
- (BOOL)purchaseItemAtIndexPath:(id)a0;

@end
