@class NSLock, NSString, CXCallObserver, DKDiagnosticContext, CAGradientLayer, NSProgress, _UILegibilityLabel, DKMutableDiagnosticResult;

@interface DKDiagnosticViewController : UIViewController <CXCallObserverDelegate, DKDiagnostic_Internal, NSExtensionRequestHandling, DKDiagnostic>

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) DKDiagnosticContext *context;
@property (retain, nonatomic) NSLock *finishedLock;
@property (retain, nonatomic) _UILegibilityLabel *pressHomeLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL shouldShowPressHomeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isSetup) BOOL setup;
@property (retain, nonatomic) DKMutableDiagnosticResult *result;
@property (nonatomic, getter=isFinished) BOOL finished;

- (id)init;
- (void)start;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)createGradientLayer;
- (void)displayPressHomeLabelFor:(double)a0;
- (void)monitorIncomingCall;
- (void)resetGradientAndLabelBefore:(BOOL)a0;

@end
