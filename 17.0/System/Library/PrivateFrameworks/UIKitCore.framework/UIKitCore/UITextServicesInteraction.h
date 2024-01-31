@class _UITextServicesResponderProxy, UIResponder, _UITextServiceSession;

@interface UITextServicesInteraction : UITextInteraction <_UITextServicesResponderProxyDelegate> {
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    _UITextServiceSession *_translateSession;
}

@property (retain, nonatomic) _UITextServicesResponderProxy *responderProxy;
@property (readonly, nonatomic) UIResponder *responder;

- (void)_removeShareController;
- (void)_removeShortcutController;
- (void)_share:(id)a0;
- (void)finishSetup;
- (void)_define:(id)a0;
- (void)_addShortcut:(id)a0;
- (void)_translate:(id)a0;
- (void).cxx_destruct;
- (void)_beginSessionWithType:(long long)a0 sender:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;

@end
