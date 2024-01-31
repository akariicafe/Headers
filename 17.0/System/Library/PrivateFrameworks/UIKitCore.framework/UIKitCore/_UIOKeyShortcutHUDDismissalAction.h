@class _UIKeyShortcutHUDDismissalResponse;

@interface _UIOKeyShortcutHUDDismissalAction : _UIOClientAction

@property (readonly, nonatomic) _UIKeyShortcutHUDDismissalResponse *response;

- (id)initWithResponse:(id)a0;
- (void)handleClientActionToOverlayService:(id)a0;

@end
