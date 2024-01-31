@class NSString, PXTilingControllerDefaultComposition, NSHashTable, NSArray, PXTilingControllerComposition, NSMutableArray;
@protocol PXTilingScrollController;

@interface PXTilingControllerCompositionEngine : NSObject <PXTilingScrollControllerUpdateDelegate, PXTilingControllerObserver, PXTilingControllerCompositionObserver, PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput> {
    BOOL _isPerformingChanges;
    BOOL _isUpdatingComposition;
    struct { BOOL scrollControllerMetrics; BOOL composition; } _needsUpdateFlags;
}

@property (readonly, weak, nonatomic) id<PXTilingScrollController> _scrollController;
@property (readonly, nonatomic) NSHashTable *_tilingControllers;
@property (readonly, nonatomic) NSHashTable *_compositions;
@property (retain, nonatomic, setter=_setComposition:) PXTilingControllerComposition *_composition;
@property (readonly, nonatomic) PXTilingControllerDefaultComposition *_defaultComposition;
@property (nonatomic, setter=_setReferenceSize:) struct CGSize { double width; double height; } _referenceSize;
@property (nonatomic, setter=_setContentInset:) struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
@property (readonly, nonatomic) NSMutableArray *_invalidationContexts;
@property (readonly, nonatomic) NSMutableArray *_tilingControllersRequestingFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } referenceSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (readonly, nonatomic) NSArray *tilingControllersRequestingFocus;
@property (readonly, nonatomic) NSArray *invalidationContexts;

+ (id)compositionEngineForScrollController:(id)a0 createIfNeeded:(BOOL)a1;

- (id)init;
- (void)_performChanges:(id /* block */)a0;
- (BOOL)_needsUpdate;
- (void)_beginUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)_endUpdate;
- (void)tilingScrollControllerDidUpdate:(id)a0;
- (void)setTilingControllerNeedsUpdate:(id)a0;
- (id)_initWithScrollController:(id)a0;
- (void)_invalidateComposition;
- (void)_invalidateScrollControllerMetrics;
- (BOOL)_updateCompositionIfNeeded;
- (void)_updateScrollControllerMetricsIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundsForTilingController:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromTilingController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromTilingController:(id)a1;
- (id)convertScrollInfo:(id)a0 fromTilingController:(id)a1;
- (struct CGPoint { double x0; double x1; })originForTilingController:(id)a0;
- (struct CGPoint { double x0; double x1; })preferredOriginForTilingController:(id)a0;
- (void)registerComposition:(id)a0;
- (void)registerTilingController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollBoundsForTilingController:(id)a0;
- (id)scrollInfoForTilingController:(id)a0;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scrollInfo:(id)a2;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 forTilingController:(id)a1;
- (void)setReferenceSize:(struct CGSize { double x0; double x1; })a0 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 forTilingController:(id)a2;
- (void)setTilingControllerCompositionNeedsUpdate:(id)a0 withContext:(id)a1;
- (void)tilingController:(id)a0 invalidatedWithContext:(long long)a1;
- (void)unregisterComposition:(id)a0;
- (void)unregisterTilingController:(id)a0;

@end
