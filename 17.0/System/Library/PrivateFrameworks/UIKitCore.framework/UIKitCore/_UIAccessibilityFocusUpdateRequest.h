@interface _UIAccessibilityFocusUpdateRequest : _UIFocusUpdateRequest

@property (nonatomic) long long options;

- (BOOL)requiresNextFocusedItem;
- (BOOL)shouldPlayFocusSound;

@end
