@protocol _UIKeyShortcutHUDKeyListenerDelegate;

@interface _UIKeyShortcutHUDModifierKeyListener : NSObject

@property (weak, nonatomic) id<_UIKeyShortcutHUDKeyListenerDelegate> delegate;
@property (nonatomic) long long currentModifierFlags;

- (void)handleKeyboardEvent:(id)a0;
- (void).cxx_destruct;

@end
