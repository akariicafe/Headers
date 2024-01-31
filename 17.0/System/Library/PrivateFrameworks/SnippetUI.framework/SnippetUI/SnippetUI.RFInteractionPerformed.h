@interface SnippetUI.RFInteractionPerformed : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ actionName;
    void /* unknown type, empty encoding */ command;
    void /* unknown type, empty encoding */ interactionType;
    void /* unknown type, empty encoding */ componentType;
    void /* unknown type, empty encoding */ componentName;
    void /* unknown type, empty encoding */ componentIndex;
    void /* unknown type, empty encoding */ invocation;
    void /* unknown type, empty encoding */ instrumentationClient;
}

@property (nonatomic, readonly) BOOL requiresNewTurn;

- (id)init;
- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)a0;

@end
