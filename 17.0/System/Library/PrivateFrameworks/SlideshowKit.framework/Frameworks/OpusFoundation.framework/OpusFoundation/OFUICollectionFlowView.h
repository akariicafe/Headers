@class NSString, NSIndexPath, NSMutableArray;
@protocol OFUICollectionFlowViewDragging;

@interface OFUICollectionFlowView : UICollectionView <OFUIWindowDraggingDestination, OFUIWindowDraggingAutoscroll> {
    NSMutableArray *_draggingPasteboardTypes;
    BOOL _isDragging;
    BOOL _isAnimating;
}

@property (retain, nonatomic) NSIndexPath *draggingSelectionIndexPath;
@property (nonatomic) id<OFUICollectionFlowViewDragging> draggingDelegate;
@property (retain, nonatomic) NSIndexPath *draggingEmptyIndexPath;
@property (nonatomic) float mergeRectInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isFrameVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerDraggingPasteboardType:(id)a0;
- (float)_autoscrollDistanceForProximityToEdge:(float)a0;
- (void)_cleanupDragging:(id)a0;
- (BOOL)_isFrameEntirelyVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prepareDragging:(id)a0;
- (void)autoscroll:(float)a0;
- (float)autoscrollDistance:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canAutoscroll;
- (void)concludeDragOperation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })draggingDestination:(id)a0 originalFrameForItem:(id)a1;
- (void)draggingDestinationEnded:(id)a0 cancelled:(BOOL)a1;
- (unsigned long long)draggingDestinationEntered:(id)a0;
- (void)draggingDestinationExited:(id)a0;
- (unsigned long long)draggingDestinationUpdated:(id)a0;
- (void)draggingDestinationWillEnd:(id)a0 cancelled:(BOOL)a1;
- (id)draggingPasteboardTypes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewFlowLayout:(id)a1;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)setDraggingEmptyIndexPath:(id)a0 session:(id)a1;
- (void)unregisterAllDraggingPasteboardType;

@end
