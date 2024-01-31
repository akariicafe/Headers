@interface HealthArticlesUI.HealthArticleViewController : UIViewController <UINavigationControllerDelegate, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ $__lazy_storage_$_componentViews;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trackingViewToState;
    void /* unknown type, empty encoding */ scrollView;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)dismissArticleModal;

@end
