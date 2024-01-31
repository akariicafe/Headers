@class _UILegibilitySettings, NSArray, NSString, SBIcon, UIView, UIViewController;
@protocol SBLeafIconDataSource, BSInvalidatable;

@interface SBIconViewCustomImageViewController : UIViewController <SBIconViewCustomImageViewControlling> {
    id<BSInvalidatable> _stateCaptureInvalidatable;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (readonly, nonatomic) SBIcon *icon;
@property (readonly, nonatomic) id<SBLeafIconDataSource> visiblyActiveDataSource;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL wantsEditingDisplayStyle;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (copy, nonatomic) id /* block */ backgroundViewProvider;
@property (copy, nonatomic) id /* block */ backgroundViewConfigurator;
@property (nonatomic) BOOL forcesEdgeAntialiasing;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) BOOL wantsLabelHidden;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) unsigned long long imageViewAlignment;
@property (nonatomic) unsigned long long pauseReasons;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } minimumPreferredEdgeInsetsForContextMenu;
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } snapshotViewCenter;
@property (readonly, nonatomic) double snapshotViewScaleFactor;
@property (readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long x0; unsigned long long x1; } approximateLayoutPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (nonatomic) BOOL showsSquareCorners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupStateCapture;
- (void)_configureBackgroundViewIfNecessary;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)sourceView;
- (void)viewDidLoad;
- (void)_configureBackgroundViewIfNecessary:(id)a0;
- (id)contentView;
- (id)_createBackgroundView;
- (id)sbh_underlyingAvocadoHostViewControllers;
- (void)_teardownStateCapture;
- (void).cxx_destruct;
- (void)evaluateBackground;
- (void)_createBackgroundViewIfNecessary:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (void)_updateEdgeAntialiasing;
- (BOOL)_needsBackgroundView;
- (void)_teardownBackgroundView;
- (void)_teardownBackgroundView:(id)a0;
- (BOOL)sbh_isCustomIconImageViewController;

@end
