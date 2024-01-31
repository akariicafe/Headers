@protocol CSDateTimeLayoutAggregating, CSPersistentContentLayoutProviding;

@interface CSLayoutStrategy : NSObject

@property (weak, nonatomic) id<CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating> persistentLayout;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForDateTimeViewInScreenCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceCenteredX:(BOOL)a1;
- (double)_customListWidthForPage:(id)a0 startingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForListForPage:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (double)_listInsetXForPage:(id)a0;
- (unsigned long long)_listLayoutForPage:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })suggestedContentInsetsForListForPage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedVisibleFrameForSleeveInScreenCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceCenteredX:(BOOL)a1;
- (unsigned long long)_listWidthStrategyForPage:(id)a0;

@end
