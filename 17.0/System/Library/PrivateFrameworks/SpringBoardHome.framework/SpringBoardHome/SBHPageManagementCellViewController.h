@class SBIcon, NSString, SBIconListView, _UILegibilitySettings, NSArray, UIView, SBHPageManagementCellView, SBFolder, MTMaterialView, UIGestureRecognizer;
@protocol SBLeafIconDataSource, SBHPageManagementCellViewControllerDelegate;

@interface SBHPageManagementCellViewController : UIViewController <UIGestureRecognizerDelegate, SBIconViewCustomImageViewControlling> {
    struct SBHPageManagementCellMetrics { struct CGSize { double width; double height; } fullListViewSize; struct CGSize { double width; double height; } scaledListViewSize; struct UIEdgeInsets { double top; double left; double bottom; double right; } foregroundInsets; struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundInsets; double listViewVerticalPositionAdjustment; double toggleButtonDiameter; double toggleButtonVerticalMargin; } _metrics;
    BOOL _toggleButtonAllowed;
}

@property (readonly, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) SBIconListView *listView;
@property (readonly, nonatomic) MTMaterialView *listBackgroundView;
@property (readonly, nonatomic) MTMaterialView *toggleButtonBackgroundView;
@property (readonly, nonatomic) SBFolder *folder;
@property (readonly, nonatomic) SBHPageManagementCellView *pageManagementCellView;
@property (weak, nonatomic) id<SBHPageManagementCellViewControllerDelegate> delegate;
@property (nonatomic) BOOL scalesListView;
@property (nonatomic) double toggleButtonAlpha;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (copy, nonatomic) id /* block */ backgroundViewProvider;
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

- (void)cancelGestures;
- (id)sourceView;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)listViewTapped:(id)a0;
- (void)cleanUpListView;
- (id)initWithListView:(id)a0 listBackgroundView:(id)a1 toggleButtonBackgroundView:(id)a2 folder:(id)a3 metrics:(struct SBHPageManagementCellMetrics { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; double x4; double x5; double x6; })a4 toggleButtonAllowed:(BOOL)a5;
- (id)listHighlightView;
- (void)setListHighlighted:(BOOL)a0;

@end
