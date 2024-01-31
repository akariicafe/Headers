@class SBHAddWidgetSheetAppCollectionViewCellConfigurator, MTMaterialView;
@protocol SBIconListLayoutProvider, SBIconViewProviding, SBHAddWidgetSheetViewControllerDelegate;

@interface SBHAddWidgetSheetViewControllerBase : UIViewController

@property (nonatomic) struct SBHPadAddWidgetSheetMetrics { double sheetMargin; double leadingPadding; double sidebarWidth; double gutterPadding; double trailingPadding; double topPadding; double widgetScaleFactor; struct CGSize { double width; double height; } scaledWidgetSize; unsigned long long widgetColumns; struct CGSize { double width; double height; } detailWidgetPadding; double detailAddButtonTopSpacing; double detailAddButtonBottomSpacing; double detailPageControlTopSpacing; } addWidgetSheetMetrics;
@property (readonly, nonatomic) long long widgetWrapperViewControllerBackgroundType;
@property (weak, nonatomic) id<SBHAddWidgetSheetViewControllerDelegate> delegate;
@property (readonly, nonatomic) struct SBHWidgetFilteringParameters { unsigned long long families; BOOL includesNonStackable; BOOL requiresRemovableBackground; } allowedWidgets;
@property (nonatomic) BOOL allowsFakeWidgets;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (retain, nonatomic) SBHAddWidgetSheetAppCollectionViewCellConfigurator *appCellConfigurator;
@property (retain, nonatomic) MTMaterialView *externalBackgroundView;
@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (nonatomic) unsigned long long addWidgetSheetLocation;
@property (nonatomic) unsigned long long addWidgetSheetWidgetBackgroundType;

- (void).cxx_destruct;
- (id)initWithListLayoutProvider:(id)a0 iconViewProvider:(id)a1 allowedWidgets:(struct SBHWidgetFilteringParameters { unsigned long long x0; BOOL x1; BOOL x2; })a2 appCellIconImageCache:(id)a3 addWidgetSheetStyle:(unsigned long long)a4;
- (id)initWithListLayoutProvider:(id)a0 iconViewProvider:(id)a1 allowedWidgets:(struct SBHWidgetFilteringParameters { unsigned long long x0; BOOL x1; BOOL x2; })a2 appCellConfigurator:(id)a3 addWidgetSheetStyle:(unsigned long long)a4;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredInsetsForSheetPresentationInInterfaceOrientation:(long long)a0;

@end
