@class UIColor, SUUIClientContext, NSString, SUUILoadingView, SUUIColorScheme;

@interface SUUILoadingViewController : UIViewController

@property (retain, nonatomic) SUUILoadingView *loadingView;
@property (readonly, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) NSString *loadingText;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) SUUIColorScheme *spinnerColorScheme;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_initializeLoadingView;
- (id)initWithClientContext:(id)a0;

@end
