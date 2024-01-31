@interface _UIKeyboardWindowScene : _UIScreenBasedWindowScene

+ (BOOL)autoInvalidates;
+ (BOOL)alwaysKeepContexts;
+ (BOOL)shouldAllowComponents;

- (id)_fixupInheritedSettings:(id)a0;
- (id)initWithScreen:(id)a0 session:(id)a1 lookupKey:(id)a2;
- (BOOL)_affectsScreenOrientation;

@end
