@class _UIDragSnappingFeedbackGenerator;

@interface PXDragHapticFeedbackGenerator : NSObject

@property (readonly, nonatomic) _UIDragSnappingFeedbackGenerator *reorderFeedbackGenerator;
@property (nonatomic) BOOL reorderFeedbackEnabled;

- (id)initWithContentView:(id)a0;
- (id)init;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (void).cxx_destruct;
- (void)performFeedback;

@end
