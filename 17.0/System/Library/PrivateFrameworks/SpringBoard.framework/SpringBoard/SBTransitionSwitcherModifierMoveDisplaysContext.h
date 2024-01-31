@class NSSet, SBSwitcherCoordinatedLayoutStateTransitionContext, SBSwitcherController;

@interface SBTransitionSwitcherModifierMoveDisplaysContext : NSObject

@property (readonly, nonatomic) SBSwitcherCoordinatedLayoutStateTransitionContext *coordinatedLayoutStateTransitionContext;
@property (readonly, nonatomic) SBSwitcherController *switcherController;
@property (readonly, copy, nonatomic) NSSet *movingDisplayItems;

+ (id)moveDisplaysContextWithCoordinatedLayoutStateTransitionContext:(id)a0 relativeToSwitcherController:(id)a1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fromFrameForDisplayItem:(id)a0;
- (id)initWithCoordinatedLayoutStateTransitionContext:(id)a0 switcherController:(id)a1;
- (BOOL)pertainsToAppLayout:(id)a0;
- (BOOL)pertainsToDisplayItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })toFrameForDisplayItem:(id)a0;

@end
