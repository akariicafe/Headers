@class UILayoutGuide, SBHWidgetWrapperViewController, NSString, UIView;
@protocol SBHWidgetDragHandling, SBHAddWidgetDetailsSheetPageViewControllerDelegate;

@interface SBHAddWidgetDetailsSheetPageViewController : UIViewController <SBHWidgetWrapperViewControllerDelegate>

@property (retain, nonatomic) UIView *referenceView;
@property (nonatomic) double scale;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (readonly, nonatomic) SBHWidgetWrapperViewController *widgetWrapperViewController;
@property (weak, nonatomic) id<SBHAddWidgetDetailsSheetPageViewControllerDelegate> delegate;
@property (nonatomic, getter=isJumpAnimationInProgress) BOOL jumpAnimationInProgress;
@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (nonatomic) struct SBHPadAddWidgetSheetMetrics { double sheetMargin; double leadingPadding; double sidebarWidth; double gutterPadding; double trailingPadding; double topPadding; double widgetScaleFactor; struct CGSize { double width; double height; } scaledWidgetSize; unsigned long long widgetColumns; struct CGSize { double width; double height; } detailWidgetPadding; double detailAddButtonTopSpacing; double detailAddButtonBottomSpacing; double detailPageControlTopSpacing; } addWidgetSheetMetrics;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } wrapperViewTransform;
@property (readonly, weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)_createConstraints;
- (void)_createViews;
- (id)backgroundViewMatchingMaterialBeneathWrapperViewController:(id)a0;
- (void)configureBackgroundView:(id)a0 matchingMaterialBeneathWrapperViewController:(id)a1;
- (void)updateParallaxEffectInReferenceView:(id)a0;
- (void)_createSizeConstraintsForWrapperView:(id)a0;
- (void)_pauseLayer:(id)a0;
- (void)_resumeLayer:(id)a0;
- (void)_updateWidgetScale;
- (struct CGSize { double x0; double x1; })_widgetPadding;
- (id)initWithWidgetWrapperViewController:(id)a0;

@end
