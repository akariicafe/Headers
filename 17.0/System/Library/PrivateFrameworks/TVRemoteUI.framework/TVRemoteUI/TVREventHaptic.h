@class UINotificationFeedbackGenerator, UISelectionFeedbackGenerator, UIImpactFeedbackGenerator;

@interface TVREventHaptic : NSObject {
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UINotificationFeedbackGenerator *_notificationFeedbackGenerator;
}

- (void).cxx_destruct;
- (void)playImpactEventHaptic;
- (void)playSelectionEventHaptic;
- (void)playSuccessEventHaptic;

@end
