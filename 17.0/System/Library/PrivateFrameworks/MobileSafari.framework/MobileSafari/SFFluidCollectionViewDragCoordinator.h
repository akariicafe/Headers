@class SFFluidCollectionView, NSString, UIDragInteraction;

@interface SFFluidCollectionViewDragCoordinator : NSObject <UIDragInteractionDelegate> {
    UIDragInteraction *_dragInteraction;
}

@property (readonly, weak, nonatomic) SFFluidCollectionView *fluidCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void).cxx_destruct;
- (id)initWithFluidCollectionView:(id)a0;

@end
