@class WLWelcomeController, NSString, NSObject, NSDateComponentsFormatter;
@protocol OS_dispatch_source;

@interface WLTransferringViewController : WLOnboardingProgressViewController <OBSetupAssistantSupport> {
    WLWelcomeController *_welcomeController;
    NSObject<OS_dispatch_source> *_remainingDownloadTimeUpdateTimer;
    NSDateComponentsFormatter *_remainingDownloadTimeFormatter;
    double _remainingDownloadTime;
    NSString *_transferProgressDescription;
    unsigned long long _completedOperationCount;
    unsigned long long _totalOperationCount;
    NSString *_importProgressDescription;
}

@property (nonatomic) BOOL showCancelButton;
@property (nonatomic) BOOL isImporting;
@property (copy, nonatomic) id /* block */ cancellationBlock;
@property (copy, nonatomic) id /* block */ viewWillDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)setProgressText:(id)a0;
- (void)_cancelRemainingDownloadTimeUpdateTimer;
- (id)initWithSourceDevice:(id)a0 welcomeController:(id)a1;
- (void)setCompletedOperationCount:(unsigned long long)a0 totalOperationCount:(unsigned long long)a1;
- (void)setRemainingDownloadTime:(double)a0;
- (void)showActivityIndicatorView;
- (void)updateProgressText;

@end
