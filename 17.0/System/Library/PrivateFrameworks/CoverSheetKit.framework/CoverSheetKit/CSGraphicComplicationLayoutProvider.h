@interface CSGraphicComplicationLayoutProvider : NSObject

+ (id)complicationLayoutForElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 draggedElement:(id)a2 draggedElementPosition:(struct CGPoint { double x0; double x1; })a3;
+ (double)interComplicationSpacing;
+ (double)complicationHeight;
+ (double)complicationEdgeInset;
+ (long long)sidebarGridHeight;
+ (id)complicationLayoutForElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (id)complicationLayoutForElements:(id)a0 layoutStyle:(long long)a1 containerSize:(struct CGSize { double x0; double x1; })a2 draggedElement:(id)a3 draggedElementPosition:(struct CGPoint { double x0; double x1; })a4;
+ (long long)insertionIndexForElement:(id)a0 withExistingElements:(id)a1;
+ (long long)_insertionIndexForElement:(id)a0 withExistingElements:(id)a1 proposedInsertionIndex:(long long)a2;
+ (id)_sidebarFramesForLayoutElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (id)_rowFramesForLayoutElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)complicationContainerHeight;
+ (BOOL)canAddElement:(id)a0 toElements:(id)a1 layoutStyle:(long long)a2;
+ (id)_framesForLayoutElements:(id)a0 layoutStyle:(long long)a1 containerSize:(struct CGSize { double x0; double x1; })a2;
+ (BOOL)canAddElement:(id)a0 toElements:(id)a1;
+ (double)interComplicationSpacingExcludingInnerInset;
+ (id)complicationLayoutForElements:(id)a0 layoutStyle:(long long)a1 containerSize:(struct CGSize { double x0; double x1; })a2;
+ (double)containerEdgeInset;
+ (double)gridUnitSize;
+ (BOOL)_isMaglevApplicable;

@end
