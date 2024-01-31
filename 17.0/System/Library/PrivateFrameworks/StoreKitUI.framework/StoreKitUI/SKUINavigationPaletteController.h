@class SKUIViewElementLayoutContext, SKUINavigationBarContext, SKUIPaletteViewElement, SKUINavigationPaletteView;

@interface SKUINavigationPaletteController : SKUINavigationBarSectionController {
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteView *_paletteView;
    SKUIPaletteViewElement *_viewElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

- (id)view;
- (void).cxx_destruct;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithPaletteViewElement:(id)a0;
- (void)reloadSectionViews;
- (id)viewForElementIdentifier:(id)a0;
- (void)willAppearInNavigationBar;

@end
