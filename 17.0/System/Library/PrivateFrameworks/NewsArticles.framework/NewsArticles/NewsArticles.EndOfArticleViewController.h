@interface NewsArticles.EndOfArticleViewController : UIViewController <TUDeselectable, SXDocumentSectionItemProvider, NAArticleFooterType, NAEndOfArticleResultProviderType> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ overriddenTraitCollection;
    void /* unknown type, empty encoding */ gutterViewController;
    void /* unknown type, empty encoding */ bottomSpacerView;
    void /* unknown type, empty encoding */ urlHandler;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, weak) void /* unknown type, empty encoding */ footerDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ resultProviderDelegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)deselect;
- (double)sectionItemHeightForSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1;
- (id)sectionItemViewController;
- (void)smartInvertStatusDidChange;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
