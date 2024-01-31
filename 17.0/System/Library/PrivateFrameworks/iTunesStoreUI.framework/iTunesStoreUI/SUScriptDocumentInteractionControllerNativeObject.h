@class NSString;

@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate> {
    BOOL _didPickApplication;
    BOOL _isVisible;
    id /* block */ _presentationBlock;
    BOOL _redisplayAfterRotation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)documentInteractionController:(id)a0 willBeginSendingToApplication:(id)a1;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)a0;
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)a0;
- (BOOL)_isAffectedByWindowNotification:(id)a0;
- (void)_windowDidRotateNotification:(id)a0;
- (void)_windowWillRotateNotification:(id)a0;
- (void)destroyNativeObject;
- (void)presentUsingBlock:(id /* block */)a0;
- (void)setupNativeObject;

@end
