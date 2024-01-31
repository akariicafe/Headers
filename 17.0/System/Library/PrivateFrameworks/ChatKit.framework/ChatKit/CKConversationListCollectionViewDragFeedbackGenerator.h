@interface CKConversationListCollectionViewDragFeedbackGenerator : _UIDragSnappingFeedbackGenerator

- (void)dropTargetUpdated;
- (void)draggedObjectLanded;
- (void)objectSnapped;
- (void)positionUpdated;

@end
