@class UIScrollView, NSString;
@protocol SXTextTangierInteractiveCanvasControllerDataSource;

@interface SXTextTangierInteractiveCanvasController : TSWPInteractiveCanvasController

@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL mightScrollToTop;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<SXTextTangierInteractiveCanvasControllerDataSource> dataSource;
@property (nonatomic) BOOL forceLayoutAndRenderOnThread;
@property (copy, nonatomic) NSString *selectedText;

+ (void)createCanvasWithDelegate:(id)a0 outICC:(id *)a1 outLayerHost:(id *)a2 iccClass:(Class)a3 layerHostClass:(Class)a4;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)teardown;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)hitRep:(struct CGPoint { double x0; double x1; })a0 withGesture:(id)a1 passingTest:(id /* block */)a2;
- (void)setSelection:(id)a0 onModel:(id)a1 withFlags:(unsigned long long)a2;
- (id)closestRepToPoint:(struct CGPoint { double x0; double x1; })a0 forStorage:(id)a1;
- (void)endUISession;
- (id)i_topLevelLayersForTiling;
- (BOOL)p_currentlyScrolling;
- (BOOL)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(BOOL)a0;
- (id)topLevelRepsForHitTesting;
- (void)willEndEditingText;

@end
