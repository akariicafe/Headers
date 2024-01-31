@class SBHPortaledShadowedWidgetView, UIView, SBHAddWidgetSheetGalleryCollectionViewCell;

@interface SBHWidgetAddSheetAnimationController : _UISheetAnimationController

@property (retain, nonatomic) SBHAddWidgetSheetGalleryCollectionViewCell *sourceCell;
@property (retain, nonatomic) SBHPortaledShadowedWidgetView *portaledShadowedWidgetView;
@property (nonatomic) struct CGPoint { double x; double y; } fromPoint;
@property (retain, nonatomic) UIView *matchMoveView;

- (id)interruptibleAnimatorForTransition:(id)a0;
- (id)initWithSourceCell:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)interruptAnimation;

@end
