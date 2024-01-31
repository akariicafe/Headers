@class _UIFindNavigatorKeyboardPlacement, _UIFindNavigatorInlinePlacement;

@interface _UIFindNavigatorPlacement : NSObject

@property (nonatomic, getter=isShowing) BOOL showing;
@property (readonly, nonatomic) _UIFindNavigatorKeyboardPlacement *keyboardPlacement;
@property (readonly, nonatomic) _UIFindNavigatorInlinePlacement *inlinePlacement;

@end
