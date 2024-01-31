@protocol UIFocusEnvironment, UIFocusItemScrollableContainer, UIFocusItem;

@interface _UIFocusScrollBoundaryMetrics : NSObject

@property (readonly, nonatomic) id<UIFocusItem> focusItem;
@property (readonly, nonatomic) id<UIFocusEnvironment> owningEnvironment;
@property (readonly, nonatomic) id<UIFocusItemScrollableContainer> scrollableContainer;
@property (readonly, nonatomic) BOOL shouldSearchX;
@property (readonly, nonatomic) BOOL shouldSearchY;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } localFocusedRect;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } localFocusedCenter;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } minContentOffset;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } maxContentOffset;
@property (nonatomic) BOOL isMinX;
@property (nonatomic) BOOL isMaxX;
@property (nonatomic) BOOL isMinY;
@property (nonatomic) BOOL isMaxY;

- (void).cxx_destruct;
- (BOOL)checkOtherRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_checkScrollableBounds;
- (BOOL)checkOtherFocusItem:(id)a0;
- (BOOL)consumeOtherMetrics:(id)a0;
- (BOOL)hasDisprovedAllRelevantAssumptions;
- (id)initWithFocusItem:(id)a0 owningEnvironment:(id)a1 scrollableContainer:(id)a2;
- (id)initWithFocusItem:(id)a0 scrollView:(id)a1;

@end
