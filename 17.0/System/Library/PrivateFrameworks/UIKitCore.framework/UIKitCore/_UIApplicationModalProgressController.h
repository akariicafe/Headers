@class NSTimer, NSString, _UIProgressView, UIWindowScene, UIWindow, UIAlertController, NSProgress, UIViewController;

@interface _UIApplicationModalProgressController : NSObject {
    BOOL _disableButtonAction;
    _UIProgressView *_progressView;
    UIWindowScene *_weakScene;
}

@property (nonatomic, getter=_isPresented, setter=_setPresented:) BOOL presented;
@property (retain, nonatomic, getter=_window, setter=_setWindow:) UIWindow *window;
@property (retain, nonatomic, getter=_sourceViewController, setter=_setSourceViewController:) UIViewController *sourceViewController;
@property (retain, nonatomic, getter=_alertController, setter=_setAlertController:) UIAlertController *alertController;
@property (copy, nonatomic, getter=_dismissalHandler, setter=_setDismissalHandler:) id /* block */ dismissalHandler;
@property (copy, nonatomic, getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:) id /* block */ preDisplayTestBlock;
@property (retain, nonatomic, getter=_progress, setter=_setProgress:) NSProgress *progress;
@property (retain, nonatomic, getter=_showTimer, setter=_setShowTimer:) NSTimer *showTimer;
@property (retain, nonatomic, getter=_hideTimer, setter=_setHideTimer:) NSTimer *hideTimer;
@property (nonatomic, getter=_displayStartTime, setter=_setDisplayStartTime:) double displayStartTime;
@property (retain, nonatomic) NSProgress *urlProgress;
@property (nonatomic) double displayDelaySeconds;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

+ (id)sharedInstance;
+ (id)instanceForScene:(id)a0;

- (id)init;
- (void)_reset;
- (void).cxx_destruct;
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(BOOL)a0;
- (void)_dismissButtonAction:(id)a0;
- (void)_hideImmediatelyWasDismissedByUser:(BOOL)a0;
- (void)_hideTimerAction:(id)a0;
- (BOOL)_shouldAnimatePresentation;
- (void)_showTimerAction:(id)a0;
- (void)displayForCopyingFileAtURL:(id)a0 toURL:(id)a1 sourceViewController:(id)a2 completionHandler:(id /* block */)a3;
- (void)displayForDownloadingURL:(id)a0 copyToURL:(id)a1 sourceViewController:(id)a2 completionHandler:(id /* block */)a3;
- (void)displayForDownloadingURL:(id)a0 sourceViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)displayWithTitle:(id)a0 message:(id)a1 progress:(id)a2 buttonTitle:(id)a3 sourceViewController:(id)a4 preDisplayTestBlock:(id /* block */)a5 dismissalHandler:(id /* block */)a6;
- (void)hideAfterDelay:(double)a0 forceCompletion:(BOOL)a1 replacementDismissalHandler:(id /* block */)a2;
- (void)hideAfterMinimumUptimeWithDismissalHandler:(id /* block */)a0;
- (void)reconfigureWithTitle:(id)a0 message:(id)a1 progress:(id)a2 buttonTitle:(id)a3 dismissalHandler:(id /* block */)a4;

@end
