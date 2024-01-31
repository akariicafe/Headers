@interface ConversationKit.ConduitLagunaNoticeManager : NSObject <TUNeighborhoodActivityConduitDelegate, TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ pushBannerInfo;
    void /* unknown type, empty encoding */ callCenter;
}

- (id)init;
- (void)neighborhoodActivityConduit:(id)a0 tvDeviceAppeared:(id)a1;
- (void)neighborhoodActivityConduit:(id)a0 tvDeviceDisappeared:(id)a1;
- (void).cxx_destruct;
- (void)neighborhoodActivityConduit:(id)a0 splitSessionStarted:(id)a1;
- (void)neighborhoodActivityConduit:(id)a0 splitSessionEnded:(id)a1;
- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1 fromOldConversation:(id)a2;
- (void)neighborhoodActivityConduit:(id)a0 suggestionUpdated:(id)a1;

@end
