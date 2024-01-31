@class UIDropInteraction, NSString, NSArray, SFFluidCollectionView, NSIndexPath;
@protocol SFFluidCollectionShadowUpdateToken;

@interface SFFluidCollectionViewDropCoordinator : NSObject <UIDropInteractionDelegate, SFFluidCollectionViewDropCoordinator> {
    UIDropInteraction *_dropInteraction;
    id<SFFluidCollectionShadowUpdateToken> _shadowDeleteToken;
    NSArray *_shadowDeletedDragItems;
    id<SFFluidCollectionShadowUpdateToken> _shadowInsertToken;
}

@property (readonly, weak, nonatomic) SFFluidCollectionView *fluidCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSIndexPath *destinationIndexPath;

- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void).cxx_destruct;
- (void)_clearAllShadowUpdatesForSession:(id)a0;
- (void)_clearShadowDeletesForSession:(id)a0;
- (void)_clearShadowInsertForSession:(id)a0;
- (id)_destinationIndexPathForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_getValueWithDragDelegateObjectsForSession:(id)a0 block:(id /* block */)a1;
- (void)_performWithDragDelegateObjectsForSession:(id)a0 block:(id /* block */)a1;
- (id)initWithFluidCollectionView:(id)a0;

@end
