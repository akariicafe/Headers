@class _UIContextMenuView;

@interface _UIContextMenuStackedHierarchyLayout : NSObject <_UIContextMenuHierarchyLayout>

@property (weak, nonatomic) _UIContextMenuView *menuView;

- (id)_metrics;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })encompassingSize;
- (id)initWithMenuView:(id)a0;
- (void)navigateDownFromNode:(id)a0 toNode:(id)a1 alongsideAnimations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)navigateUpFromNode:(id)a0 toNode:(id)a1 alongsideAnimations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)performLayoutForComputingPreferredContentSize:(BOOL)a0 withMaxContainerSize:(struct CGSize { double x0; double x1; })a1;

@end
