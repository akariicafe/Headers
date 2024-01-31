@interface SiriInteractive.SnippetController : NSObject <VRXInteractionDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ modal;
    void /* unknown type, empty encoding */ _scene;
    void /* unknown type, empty encoding */ _cancellables;
}

- (void)didEndEditing;
- (void)willBeginEditing;
- (void)performAceCommand:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
