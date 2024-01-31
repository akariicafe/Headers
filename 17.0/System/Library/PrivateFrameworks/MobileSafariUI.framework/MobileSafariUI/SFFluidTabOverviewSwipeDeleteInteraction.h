@class NSString, NSIndexPath, UIPanGestureRecognizer;

@interface SFFluidTabOverviewSwipeDeleteInteraction : SFFluidCollectionViewInteraction <UIGestureRecognizerDelegate> {
    NSIndexPath *_interactionIndexPath;
    BOOL _canDelete;
}

@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (id)gestureRecognizers;
- (id)transformLayoutAttributes:(id)a0;
- (void)_didRecognizePan:(id)a0;

@end
