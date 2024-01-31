@class NSLock, NSString, NSIndexPath, NSObject, NSMutableArray, NSPointerArray, NSMutableSet, RTTUtterance;
@protocol OS_dispatch_queue;

@interface RTTUIConversationControllerCoordinator : NSObject <AXHeardServerDelegate> {
    NSObject<OS_dispatch_queue> *_utteranceRequestQueue;
    NSPointerArray *_conversationControllers;
    NSLock *_realtimeSendLock;
    struct __CTServerConnection { } *_ctConnection;
    NSMutableSet *_registeredCalls;
    NSString *_latestCallScreeningTranscriptionID;
}

@property (retain, nonatomic) NSMutableArray *utteranceBuffer;
@property (nonatomic) BOOL processingUtteranceBuffer;
@property (readonly, nonatomic) NSIndexPath *inProgressRealTimeIndexPath;
@property (readonly, nonatomic) RTTUtterance *inProgressRealTimeUtterance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)hearingServerDidDie:(id)a0;
- (void)processCallScreeningTranscription:(id)a0 transcriptionID:(id)a1 callUUID:(id)a2;
- (void)_sendNewUtteranceString:(id)a0 atIndex:(unsigned long long)a1 forCellPath:(id)a2 call:(id)a3;
- (void)addConversationController:(id)a0;
- (id)conversationControllers;
- (void)processUtteranceQueue;
- (BOOL)realtimeTextDidChange:(id)a0 forUtterance:(id)a1 lastRowPath:(id)a2;
- (void)registerForCallUpdates:(id)a0;
- (void)sendNewUtteranceString:(id)a0 controller:(id)a1;
- (id)viewControllerForCallUUID:(id)a0;

@end
