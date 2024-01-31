@class NSString, UILabel, UIActivityIndicatorView;
@protocol VSLoadingViewControllerDelegate;

@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController>

@property (class, readonly) NSString *defaultLoadingTitle;
@property (class, readonly) double layoutSpacing;

@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSString *loadingTitle;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<VSLoadingViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signingOutTitle;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_cancelButtonPressed:(id)a0;
- (void)updateAnimating;

@end
