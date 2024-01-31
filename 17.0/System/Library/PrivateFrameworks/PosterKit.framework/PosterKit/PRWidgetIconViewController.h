@class SBIcon, NSString, _UILegibilitySettings, PRComplicationDescriptor, NSArray, UIView, MTVisualStylingProvider, BSUIVibrancyConfiguration, CHUISWidgetHostViewController;
@protocol SBLeafIconDataSource, UITraitChangeRegistration;

@interface PRWidgetIconViewController : UIViewController <BSInvalidatable, SBIconViewCustomImageViewControlling> {
    id<UITraitChangeRegistration> _userInterfaceStyleTraitChangeRegistration;
    MTVisualStylingProvider *_platterVisualStylingProvider;
    UIView *_backgroundView;
    unsigned long long _contentType;
}

@property (readonly, nonatomic) PRComplicationDescriptor *complicationDescriptor;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly, nonatomic) CHUISWidgetHostViewController *widgetHostViewController;
@property (nonatomic) BOOL useMaterialBackground;
@property (nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden;
@property (nonatomic, getter=isWidgetInteractionDisabled) BOOL widgetInteractionDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleBounds;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (nonatomic) BOOL showsSquareCorners;

- (void)_updateBackgroundView;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)sourceView;
- (void)viewDidLoad;
- (void)invalidate;
- (void)_createBackgroundView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)initWithComplicationDescriptor:(id)a0;
- (id)_platterVisualStylingProvider;
- (void)_updatePlatterStylingIfNeeded;
- (id)initWithComplicationDescriptor:(id)a0 contentType:(unsigned long long)a1;

@end
