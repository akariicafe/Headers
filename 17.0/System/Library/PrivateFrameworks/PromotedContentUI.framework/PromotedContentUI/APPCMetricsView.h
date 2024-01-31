@class APPrivacyMarker;
@protocol APPCDiagnosticMetricsHelping;

@interface APPCMetricsView : UIView <APPCMetricRegister> {
    void /* unknown type, empty encoding */ startsCollapsed;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ frameObserver;
    void /* unknown type, empty encoding */ currentlyViewable;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ promotedContent;
    void /* unknown type, empty encoding */ debugView;
    void /* unknown type, empty encoding */ forcedReadiness;
    void /* unknown type, empty encoding */ wasTapped;
    void /* unknown type, empty encoding */ isBackgrounded;
    void /* unknown type, empty encoding */ impressionSent;
    void /* unknown type, empty encoding */ timingTracking;
    void /* unknown type, empty encoding */ visibilityChecker;
    void /* unknown type, empty encoding */ needToSendOnScreen;
    void /* unknown type, empty encoding */ slotPosition;
    void /* unknown type, empty encoding */ adContentPosition;
    void /* unknown type, empty encoding */ currentOrientation;
    void /* unknown type, empty encoding */ debugOverlay;
    void /* unknown type, empty encoding */ visibilityCheckingView;
    void /* unknown type, empty encoding */ offsetObserver;
    void /* unknown type, empty encoding */ isCollapsedInternal;
    void /* unknown type, empty encoding */ lastTimeVisibilityCheckFrame;
    void /* unknown type, empty encoding */ readinessObserver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_debugViewEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_debugVisibilityColorsEnabled;
    void /* unknown type, empty encoding */ visibleThresholds;
    void /* unknown type, empty encoding */ reportedVisibilityThresholds;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ visibleThresholdsLock;
    void /* unknown type, empty encoding */ viewCollapsedState;
    void /* unknown type, empty encoding */ lastCollapsedState;
    void /* unknown type, empty encoding */ policyCheckCompleted;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ interactionPresentationDelegate;
@property (nonatomic) void /* unknown type, empty encoding */ ready;
@property (nonatomic, readonly) APPrivacyMarker *privacyMarkerView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } privacyMarkerFrame;
@property (nonatomic, weak) void /* unknown type, empty encoding */ readyDelegate;
@property (nonatomic, readonly) id<APPCDiagnosticMetricsHelping> diagnosticMetricHelper;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, retain) void /* unknown type, empty encoding */ promotedContentInfo;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } metricsViewEdgeInsets;

- (void)collapse;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)a0;
- (void)removeHandler;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)appWillResignActive:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)appBackgrounded:(id)a0;
- (void)appForegrounded:(id)a0;
- (void)expand;
- (BOOL)safeCollapseAndReturnError:(id *)a0;
- (BOOL)safeExpandAndReturnError:(id *)a0;
- (void)unloadAdViewIfRequired;
- (void)willEnterforeground;

@end
