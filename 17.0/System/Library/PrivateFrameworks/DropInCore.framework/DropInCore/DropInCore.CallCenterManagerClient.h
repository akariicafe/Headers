@interface DropInCore.CallCenterManagerClient : DropInCore.CallCenterManager {
    void /* unknown type, empty encoding */ hostPseudonym;
    void /* unknown type, empty encoding */ audioPowerManager;
    void /* unknown type, empty encoding */ logger;
}

- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 activeRemoteParticipantsChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (void).cxx_destruct;

@end
