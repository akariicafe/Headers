@class NSArray, NSMutableDictionary, IMPowerAssertion, NSDate, NSMutableArray;

@interface IMAVCallManager : NSObject {
    IMPowerAssertion *_powerAssertion;
    NSMutableArray *_chatArray;
    NSMutableArray *_acChatProxyArray;
    NSMutableArray *_avChatProxyArray;
    NSMutableDictionary *_guidToACChatProxyMap;
    NSMutableDictionary *_guidToAVChatProxyMap;
    NSDate *_lastCallStateChange;
    int _avToken;
    int _acToken;
    unsigned int _avCallState;
    unsigned int _acCallState;
    unsigned int _globalCallState;
}

@property (readonly, nonatomic) NSArray *_FTCalls;
@property (readonly, nonatomic) unsigned int callState;
@property (readonly, nonatomic) BOOL hasActiveCall;
@property (readonly, nonatomic) NSArray *calls;

+ (id)sharedInstance;

- (void)_setAVCallState:(unsigned int)a0;
- (BOOL)_hasActiveFaceTimeCall;
- (id)init;
- (void)_addAVChatProxy:(id)a0;
- (unsigned int)_callState;
- (id)_copyMutableFTCalls;
- (void)_setACCallState:(unsigned int)a0;
- (void)_addACChatProxy:(id)a0;
- (void)_postStateChangeNamed:(id)a0 fromState:(unsigned int)a1 toState:(unsigned int)a2 postType:(BOOL)a3 type:(unsigned int)a4;
- (void)_setACCallState:(unsigned int)a0 quietly:(BOOL)a1;
- (id)_mutableFTCalls;
- (void)_addIMAVChatToChatList:(id)a0;
- (BOOL)_hasActiveAudioCall;
- (unsigned int)_callStateForType:(unsigned int)a0;
- (id)_activeAudioCall;
- (void)_setAVCallState:(unsigned int)a0 quietly:(BOOL)a1;
- (void)_updateAVCallState;
- (id)_activeFaceTimeCall;
- (void)_updateAVChatProxyWithInfo:(id)a0;
- (void)_postStateChangeIfNecessary;
- (void)_updateOverallChatState;
- (void)_removeIMAVChatFromChatList:(id)a0;
- (id)_nonRetainingChatList;
- (void).cxx_destruct;
- (id)_calls;
- (void)_updateACChatProxyWithInfo:(id)a0;
- (void)_updateACCallState;
- (void)_sendProxyUpdate;

@end
