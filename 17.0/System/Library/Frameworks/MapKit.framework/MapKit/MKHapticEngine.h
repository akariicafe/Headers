@class UINotificationFeedbackGenerator, UIImpactFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

@interface MKHapticEngine : NSObject {
    UINotificationFeedbackGenerator *_notificationGenerator;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _UIDragSnappingFeedbackGenerator *_dragSnappingGenerator;
    BOOL _isDragging;
}

- (id)init;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (void).cxx_destruct;
- (void)prepare;
- (void)playFailure;
- (void)playSuccess;

@end
