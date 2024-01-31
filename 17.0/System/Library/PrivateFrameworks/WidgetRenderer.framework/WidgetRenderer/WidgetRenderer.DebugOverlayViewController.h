@interface WidgetRenderer.DebugOverlayViewController : UIViewController {
    void /* unknown type, empty encoding */ debugView;
    void /* unknown type, empty encoding */ debugText;
    void /* unknown type, empty encoding */ animationsPaused;
    void /* unknown type, empty encoding */ isSnapshotting;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)_didExitAlwaysOn;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_willEnterAlwaysOn;

@end
