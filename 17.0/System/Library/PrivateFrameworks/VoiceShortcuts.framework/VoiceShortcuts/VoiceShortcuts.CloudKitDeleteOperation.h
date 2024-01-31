@interface VoiceShortcuts.CloudKitDeleteOperation : WFStateMachine {
    void /* unknown type, empty encoding */ recordId;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ reason;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ subject;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)transitionToState:(id)a0 withReason:(id)a1;

@end
