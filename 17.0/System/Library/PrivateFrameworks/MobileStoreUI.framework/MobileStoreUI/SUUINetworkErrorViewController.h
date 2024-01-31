@class SUUIProductPageHeaderViewController, SUUIClientContext, NSString, NSError, UIScrollView;
@protocol SUUINetworkErrorDelegate;

@interface SUUINetworkErrorViewController : UIViewController <SUUIProductPageChildViewController>

@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (weak, nonatomic) id<SUUINetworkErrorDelegate> delegate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SUUIProductPageHeaderViewController *headerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplayError:(id)a0;

- (id)initWithError:(id)a0;
- (id)init;
- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (void)_networkTypeChanged:(id)a0;

@end
