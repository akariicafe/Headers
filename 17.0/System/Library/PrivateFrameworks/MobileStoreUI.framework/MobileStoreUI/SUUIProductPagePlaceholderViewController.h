@class SUUIColorScheme, NSString, SUUIClientContext, SUUIProductPageHeaderViewController, UIScrollView, SUUIProductPagePlaceholderScrollView, UIActivityIndicatorView;
@protocol SUUIProductPageChildViewControllerDelegate;

@interface SUUIProductPagePlaceholderViewController : UIViewController <UIScrollViewDelegate, SUUIProductPageChildViewController> {
    SUUIProductPagePlaceholderScrollView *_scrollView;
    long long _style;
    UIActivityIndicatorView *_indicator;
}

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) SUUIColorScheme *colorScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SUUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id<SUUIProductPageChildViewControllerDelegate> delegate;

- (id)initWithStyle:(long long)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_addHeaderView;

@end
