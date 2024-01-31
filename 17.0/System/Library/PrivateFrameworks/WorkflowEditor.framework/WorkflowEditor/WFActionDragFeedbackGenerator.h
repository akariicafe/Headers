@class NSDate;

@interface WFActionDragFeedbackGenerator : WFDragFeedbackGenerator

@property (retain, nonatomic) NSDate *lastDragStartDate;
@property (nonatomic) BOOL initializedReorderSound;
@property (nonatomic) unsigned int reorderSound;

- (void)dealloc;
- (void).cxx_destruct;
- (void)draggingStarted;
- (void)draggingActionsEnteredDeletionZone:(id)a0;
- (void)draggingInsertedActions:(id)a0 intoWorkflow:(id)a1 atIndex:(unsigned long long)a2;
- (void)draggingItemSnapped;
- (void)draggingMovedActions:(id)a0 fromIndexes:(id)a1 toIndexes:(id)a2 inWorkflow:(id)a3;
- (void)draggingRemovedActions:(id)a0;
- (void)playReorderSound;

@end
