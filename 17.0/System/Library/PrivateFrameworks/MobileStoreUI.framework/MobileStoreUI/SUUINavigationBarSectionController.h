@class NSString, SUUINavigationBarContext, SUUIViewElementLayoutContext, UIView;

@interface SUUINavigationBarSectionController : NSObject <SUUIArtworkRequestDelegate> {
    SUUIViewElementLayoutContext *_viewLayoutContext;
}

@property (readonly, nonatomic) UIView *view;
@property (retain, nonatomic) SUUINavigationBarContext *context;
@property (readonly, nonatomic) SUUIViewElementLayoutContext *viewLayoutContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)barButtonItemForElementIdentifier:(id)a0;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)a0;
- (void)reloadSectionViews;
- (id)viewForElementIdentifier:(id)a0;
- (void)willAppearInNavigationBar;

@end
