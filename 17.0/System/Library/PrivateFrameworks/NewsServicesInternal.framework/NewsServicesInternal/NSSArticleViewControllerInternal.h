@class NSSArticleInternal, NSSArticleView, UIActivityIndicatorView;

@interface NSSArticleViewControllerInternal : UIViewController

@property (retain, nonatomic) NSSArticleView *articleView;
@property (nonatomic) BOOL articleLoading;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSSArticleInternal *article;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (id)initWithNotification:(id)a0;
- (void)_tickleArticleView;
- (void)_tickleSpinner;
- (id)initWithArticle:(id)a0;
- (id)initWithSpotlightIdentifier:(id)a0;
- (void)presentArticle:(id)a0 completion:(id /* block */)a1;

@end
