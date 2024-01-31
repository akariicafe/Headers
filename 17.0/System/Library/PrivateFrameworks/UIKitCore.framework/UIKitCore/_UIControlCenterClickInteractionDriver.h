@interface _UIControlCenterClickInteractionDriver : _UILongPressTimeoutClickInteractionDriver

+ (BOOL)prefersCancelsTouchesInView;

- (id)init;
- (double)clickDownDuration;
- (double)clickTimeoutDuration;

@end
