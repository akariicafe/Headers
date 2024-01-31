@class _UIContextMenuView;

@interface _UIContextMenuCascadedHierarchyLayout : NSObject <_UIContextMenuHierarchyLayout>

@property (weak, nonatomic) _UIContextMenuView *menuView;
@property (nonatomic) BOOL isAnimatingMenuAddition;

- (id)_metrics;
- (void).cxx_destruct;
- (struct CAPoint3D { double x0; double x1; double x2; })_submenuOffsetForCascadingLeft:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cascadingAreaBounds;
- (struct CGSize { double x0; double x1; })encompassingSize;
- (id)initWithMenuView:(id)a0;
- (void)navigateDownFromNode:(id)a0 toNode:(id)a1 alongsideAnimations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)navigateUpFromNode:(id)a0 toNode:(id)a1 alongsideAnimations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)performLayoutForComputingPreferredContentSize:(BOOL)a0 withMaxContainerSize:(struct CGSize { double x0; double x1; })a1;

@end
