@interface _UIFocusBehavior_CarPlayTouchpad : _UIFocusBehavior_CarPlay

+ (id)sharedInstance;

- (BOOL)shouldEnableFocusOnSelect;
- (BOOL)supportsIndirectPanningMovement;
- (BOOL)refinesIndexBarTargetContentOffset;

@end
