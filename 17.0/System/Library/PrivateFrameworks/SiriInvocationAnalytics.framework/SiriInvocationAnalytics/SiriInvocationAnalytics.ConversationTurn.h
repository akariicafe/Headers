@interface SiriInvocationAnalytics.ConversationTurn : NSObject {
    void /* unknown type, empty encoding */ asrEvents;
    void /* unknown type, empty encoding */ flowEvents;
    void /* unknown type, empty encoding */ dimEvents;
    void /* unknown type, empty encoding */ ueiEvents;
    void /* unknown type, empty encoding */ mhEvents;
    void /* unknown type, empty encoding */ orchEvents;
    void /* unknown type, empty encoding */ turnID;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ domainSource;
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ conversationTurnType;
}

- (id)init;
- (void).cxx_destruct;
- (id)debugString;

@end
