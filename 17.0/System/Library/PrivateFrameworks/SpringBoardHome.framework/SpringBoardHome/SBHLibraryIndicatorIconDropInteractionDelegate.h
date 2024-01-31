@class SBIconView, UIDropInteraction, NSString;
@protocol SBHLibraryIndicatorIconDropInteractionContextProviding;

@interface SBHLibraryIndicatorIconDropInteractionDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, UIDropInteractionDelegate>

@property (readonly, nonatomic) UIDropInteraction *dropInteraction;
@property (readonly, weak, nonatomic) SBIconView *libraryIndicatorIconView;
@property (weak, nonatomic) id<SBHLibraryIndicatorIconDropInteractionContextProviding> contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)targetItemForSpringLoadingInteractionInView:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 forDropSession:(id)a2;
- (id)targetViewForSpringLoadingEffectForView:(id)a0;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (id)_iconIdentifierForDragItem:(id)a0;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void).cxx_destruct;
- (id)_iconModel;
- (BOOL)_canPerformDropForAnyItemInSession:(id)a0;
- (BOOL)_canPerformDropForDragItem:(id)a0;
- (BOOL)_canPerformDropForDraggedIcon:(id)a0;
- (id)_draggedItemIdentifiersInSession:(id)a0;
- (void)_handleSpringLoadedInteractionDidActivateWithContext:(id)a0;
- (void)_notifyDidPerformDropForSession:(id)a0;
- (void)_updateIndicatorIconViewForSession:(id)a0 isActive:(BOOL)a1;
- (id)initWithLibraryIndicatorIconView:(id)a0;

@end
