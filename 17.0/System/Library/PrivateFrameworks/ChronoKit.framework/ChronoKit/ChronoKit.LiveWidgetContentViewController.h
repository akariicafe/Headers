@interface ChronoKit.LiveWidgetContentViewController : ChronoKit.BaseWidgetContentViewController {
    void /* unknown type, empty encoding */ widget;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ _isSnapshotting;
    void /* unknown type, empty encoding */ hasAnimatableContent;
    void /* unknown type, empty encoding */ _areAnimationsPaused;
    void /* unknown type, empty encoding */ _animationsDisabledPreferenceObserver;
    void /* unknown type, empty encoding */ _cachedAnimationsDisabledPreference;
    void /* unknown type, empty encoding */ _rootViewModel;
}

@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
