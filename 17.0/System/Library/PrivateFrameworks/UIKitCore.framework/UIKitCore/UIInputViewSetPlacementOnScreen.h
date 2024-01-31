@interface UIInputViewSetPlacementOnScreen : UIInputViewSetPlacement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)showsInputOrAssistantViews;
- (BOOL)showsInputViews;
- (BOOL)inputViewWillAppear;
- (BOOL)showsKeyboard;

@end
