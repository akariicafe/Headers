@class SUUINavigationPaletteView, SUUINavigationBarContext, SUUIPaletteViewElement, SUUIViewElementLayoutContext;

@interface SUUINavigationPaletteController : SUUINavigationBarSectionController {
    SUUINavigationBarContext *_navigationBarContext;
    SUUINavigationPaletteView *_paletteView;
    SUUIPaletteViewElement *_viewElement;
    SUUIViewElementLayoutContext *_viewLayoutContext;
}

- (id)view;
- (void).cxx_destruct;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithPaletteViewElement:(id)a0;
- (void)reloadSectionViews;
- (id)viewForElementIdentifier:(id)a0;
- (void)willAppearInNavigationBar;

@end
