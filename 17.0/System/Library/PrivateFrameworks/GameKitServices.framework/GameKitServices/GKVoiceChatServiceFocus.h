@class NSString, NSMutableArray;

@interface GKVoiceChatServiceFocus : GKVoiceChatServicePrivate {
    NSMutableArray *outgoingCallDictList;
    NSMutableArray *incomingCallDictList;
    long long incomingUID;
    int packetsPerBundle;
}

@property (copy, nonatomic) NSString *currentFocus;
@property int packetsPerBundle;
@property BOOL hasMic;

+ (id)defaultVoiceChatService;

- (id)init;
- (void)dealloc;
- (void)setFocus:(BOOL)a0;
- (void)receivedData:(id)a0 fromParticipantID:(id)a1;
- (BOOL)acceptCallID:(unsigned int)a0 error:(id *)a1;
- (void)denyCallID:(unsigned int)a0;
- (BOOL)startVoiceChatWithParticipantID:(id)a0 error:(id *)a1;
- (void *)remoteVideoLayer;
- (void)setChatMode:(int)a0;
- (void)setIsUsingSuppression:(BOOL)a0;
- (void)setQualityDelegate:(id)a0;
- (void)setRemoteVideoLayer:(void *)a0;
- (void)setShouldTimeoutPackets:(BOOL)a0;
- (void)setSpeakingDelegate:(id)a0;
- (void)setTalkingPeersLimit:(unsigned int)a0;
- (void)updatedConnectedPeers:(id)a0;
- (void)updatedMutedPeers:(id)a0 forParticipantID:(id)a1;
- (void)videoConference:(id)a0 didStartSession:(BOOL)a1 withCallID:(unsigned int)a2 error:(id)a3;
- (void)videoConference:(id)a0 didStopWithCallID:(unsigned int)a1 error:(id)a2;
- (void *)localVideoLayer;
- (double)remoteFramerate;
- (id)dictionaryForCallID:(unsigned int)a0 isIncomingDictonary:(BOOL)a1;
- (id)dictionaryForNonce:(long long)a0 participantID:(id)a1 isIncomingDictonary:(BOOL)a2;
- (id)dictionaryForParticipantID:(id)a0 isIncomingDictonary:(BOOL)a1;
- (id)incomingDictionaryMatchingOriginalCallID:(unsigned int)a0 participantID:(id)a1;
- (BOOL)isAudioPausedToParticipantID:(id)a0;
- (double)localBitrate;
- (id)localDisplayNameForCallID:(unsigned int)a0;
- (double)localFramerate;
- (id)openOutgoingDictionaryForParticipantID:(id)a0;
- (void)pauseAudio:(BOOL)a0 toParticipantID:(id)a1;
- (BOOL)processCancelDict:(id)a0;
- (BOOL)processFocusChange:(id)a0 fromParticipantID:(id)a1;
- (BOOL)processFocusDict:(id)a0 fromParticipantID:(id)a1;
- (BOOL)processInviteDictionary:(id)a0 fromParticipantID:(id)a1;
- (BOOL)processInviteDictionaryForTie:(id)a0 fromParticipantID:(id)a1;
- (BOOL)processReplyDict:(id)a0;
- (double)remoteBitrate;
- (void)remoteCancelled:(id)a0;
- (void)remoteCancelledProc:(id)a0;
- (id)remoteDisplayNameForCallID:(unsigned int)a0;
- (void)sendFocusChange:(BOOL)a0;
- (void)setLocalVideoLayer:(void *)a0;
- (void)stopVoiceChatProc:(id)a0;
- (void)stopVoiceChatProc:(id)a0 participantDidCancel:(BOOL)a1;

@end
