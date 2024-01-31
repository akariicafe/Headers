@class NSLayoutConstraint, NSTimer, UIVisualEffectView, UIView, UIPanGestureRecognizer, UIViewController;
@protocol SFToastViewControllerDelegate;

@interface SFToastViewController : UIViewController {
    UIView *_contentContainerView;
    double _contentOffset;
    NSTimer *_dismissalTimer;
    UIPanGestureRecognizer *_panRecognizer;
    double _remainingToastDuration;
    UIVisualEffectView *_backgroundVisualEffectView;
    NSLayoutConstraint *_contentPreferredWidthConstraint;
    NSLayoutConstraint *_contentPreferredHeightConstraint;
    NSLayoutConstraint *_contentTopConstraint;
}

@property (readonly, nonatomic) UIViewController *contentViewController;
@property (weak, nonatomic) id<SFToastViewControllerDelegate> delegate;
@property (nonatomic) double toastDuration;

- (void)updateViewConstraints;
- (void)viewWillAppear:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_didReceivePan:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (void)_scheduleToastTimerIfNeeded;

@end
