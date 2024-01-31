@class UIWindow, NSString, NSProgress, PXActivityProgressViewController, UIAlertController, UIView;

@interface PXActivityProgressController : NSObject {
    PXActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
    UIView *_containerView;
    UIView *_dimmingView;
    UIView *_progressContainerView;
    double _whenDidShow;
    BOOL _didShow;
    BOOL _didHide;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL showCheckmarkOnCompletion;
@property (nonatomic) BOOL shouldAutoDisplay;
@property (nonatomic) BOOL shouldUseProgressText;
@property (weak, nonatomic) UIWindow *window;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)_cancel;
- (id)init;
- (void)setFractionCompleted:(double)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)hideAnimated:(BOOL)a0 allowDelay:(BOOL)a1;
- (void)showAnimated:(BOOL)a0 allowDelay:(BOOL)a1;
- (void)_didFinishHiding;
- (id)_newProgressContainerView;
- (void)_updateFractionCompletedFromProgress;
- (void)_updatePrimaryText;
- (void)_updateSecondaryText;

@end
