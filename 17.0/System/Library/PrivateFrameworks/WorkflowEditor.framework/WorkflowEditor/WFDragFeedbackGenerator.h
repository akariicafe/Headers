@class _UIDragSnappingFeedbackGenerator;

@interface WFDragFeedbackGenerator : NSObject

@property (nonatomic) long long activeDragSessions;
@property (retain, nonatomic) _UIDragSnappingFeedbackGenerator *feedbackGenerator;

- (void)userInteractionCancelled;
- (void)userInteractionStarted;
- (id)init;
- (id)initWithCollectionView:(id)a0;
- (void)dropTargetUpdated;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (void).cxx_destruct;
- (void)userInteractionEnded;
- (void)objectSnapped;
- (void)positionUpdated;
- (void)draggingStarted;
- (void)performFeedbackWithDelay:(double)a0 insideBlock:(id /* block */)a1;
- (void)draggingCancelled;
- (void)draggingItemDropped;
- (void)draggingItemSnapped;
- (void)draggingPositionUpdated;

@end
