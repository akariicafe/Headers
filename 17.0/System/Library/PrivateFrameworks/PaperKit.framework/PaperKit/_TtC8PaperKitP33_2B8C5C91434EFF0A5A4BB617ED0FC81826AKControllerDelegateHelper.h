@interface _TtC8PaperKitP33_2B8C5C91434EFF0A5A4BB617ED0FC81826AKControllerDelegateHelper : NSObject <AKControllerDelegateProtocol>

- (id)init;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromModelToOverlayWithPageIndex:(long long)a1 forAnnotationController:(id)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromOverlayToModelWithPageIndex:(long long)a1 forAnnotationController:(id)a2;
- (void)installDrawingGestureRecognizer:(id)a0 forPageAtIndex:(long long)a1 forAnnotationController:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPageRectWithPageIndex:(long long)a0 forAnnotationController:(id)a1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)a0 atScale:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 onOverlayAtPageIndex:(long long)a3 forAnnotationController:(id)a4;
- (id)popoverPresentingViewControllerForAnnotationController:(id)a0;
- (id)undoManagerForAnnotationController:(id)a0;
- (void)uninstallDrawingGestureRecognizer:(id)a0 forPageAtIndex:(long long)a1 forAnnotationController:(id)a2;
- (void)updateDrawingGestureRecognizer:(id)a0 forPageAtIndex:(long long)a1 withPriority:(BOOL)a2 forAnnotationController:(id)a3;

@end
