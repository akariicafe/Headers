@class NSArray, AXElementNamesStyleProvider, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface AXElementNamesView : AXCyclingView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsForLastReload;
@property (nonatomic) BOOL didUpdateItems;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingFacility;
@property (retain, nonatomic) AXElementNamesStyleProvider *styleProvider;
@property (readonly, nonatomic) NSMutableArray *containers;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_reloadViews;
- (void)_adjustLabelPositionForView:(id)a0 toAvoidCollidingWithView:(id)a1;
- (void)_arrangeNameViews:(id)a0 withinContainer:(id)a1;
- (id)viewsInCycle;

@end
