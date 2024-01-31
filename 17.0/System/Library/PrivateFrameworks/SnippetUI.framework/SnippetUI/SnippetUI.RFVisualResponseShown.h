@interface SnippetUI.RFVisualResponseShown : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ instrumentationPayload;
    void /* unknown type, empty encoding */ patternId;
    void /* unknown type, empty encoding */ responseViewId;
    void /* unknown type, empty encoding */ instrumentationClient;
    void /* unknown type, empty encoding */ preferences;
    void /* unknown type, empty encoding */ remoteAssetManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)a0;
- (id)initWithCardData:(id)a0 responseViewId:(id)a1;

@end
