@class NSString;

@interface FMFindingUI.FMR1DebugView : UIView {
    void /* unknown type, empty encoding */ experienceType;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ debugLabel;
    void /* unknown type, empty encoding */ controlsView;
    void /* unknown type, empty encoding */ dotCountLabel;
    void /* unknown type, empty encoding */ dotCountSegmentedControl;
    void /* unknown type, empty encoding */ ecoModeLabel;
    void /* unknown type, empty encoding */ ecoModeSwitch;
    void /* unknown type, empty encoding */ debugModeWithoutBearingLabel;
    void /* unknown type, empty encoding */ debugModeWithoutBearingSwitch;
    void /* unknown type, empty encoding */ runTestsLabel;
    void /* unknown type, empty encoding */ runTestsSwitch;
    void /* unknown type, empty encoding */ debugModeObservation;
    void /* unknown type, empty encoding */ lastSamplingTimeIntervalForSKFPS;
    void /* unknown type, empty encoding */ sampleCountForSKFPS;
    void /* unknown type, empty encoding */ lastLoggedSKFPS;
    void /* unknown type, empty encoding */ lastSamplingTimeIntervalForARFPS;
    void /* unknown type, empty encoding */ sampleCountForARFPS;
    void /* unknown type, empty encoding */ lastLoggedARFPS;
    void /* unknown type, empty encoding */ autoTestsActionHandler;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)debugModeWithoutBearingAction;
- (void)dotCountSegmentedControlActionWithSender:(id)a0;
- (void)ecoModeAction;
- (void)labelTapActionWithSender:(id)a0;
- (void)runTestsAction;
- (void)showControlsToggleActionWithSender:(id)a0;

@end
