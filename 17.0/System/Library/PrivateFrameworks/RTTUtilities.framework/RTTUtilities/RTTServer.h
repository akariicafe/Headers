@class NSObject, NSMutableDictionary, NSLock, RBSAssertion;
@protocol OS_dispatch_queue;

@interface RTTServer : HCServer {
    NSLock *_dataResponseBlocksLock;
    NSMutableDictionary *_databaseResponseBlocks;
    NSObject<OS_dispatch_queue> *_commonRequestQueue;
}

@property (copy, nonatomic) id /* block */ actionCompletionBlock;
@property (retain, nonatomic) RBSAssertion *assertionInCallService;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)contactIsTTYContact:(id)a0;
- (void).cxx_destruct;
- (void)setTTYDictionaryAvailability:(BOOL)a0;
- (void)resetConnection;
- (void)handleMessageError:(id)a0 destructive:(BOOL)a1;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)sendMessageWithPayload:(id)a0 andIdentifier:(unsigned long long)a1;
- (void)shouldRestartOnInterruption:(id /* block */)a0;
- (void)terminateConnectionAndNotify:(BOOL)a0;
- (void)registerResponseBlock:(id /* block */)a0 forUUID:(id)a1;
- (id)_createSandboxUrlForVoicemailMessage:(id)a0;
- (void)_managerAXPIDState:(BOOL)a0;
- (void)_registerForServerSettingsUpdates;
- (void)_takeStackshot;
- (void)cancelCallPromptDisplay;
- (BOOL)deleteConversationWithCallUID:(id)a0;
- (void)displayCallPromptForContact:(id)a0 withCompletion:(id /* block */)a1;
- (void)findConversationForCallUID:(id)a0 andResult:(id /* block */)a1;
- (BOOL)isEmergencyNumber:(id)a0;
- (void)primeRTTServer;
- (void)registerForRemoteUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (void)registerForServiceUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (void)registerForUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (void)sendConversationUpdate:(id)a0;
- (void)sendString:(id)a0 forCallUID:(id)a1;
- (void)sendTranscription:(id)a0 forCallUUID:(id)a1 isNew:(BOOL)a2;
- (void)setShouldSuppressIncomingNotification:(BOOL)a0;
- (void)setSystemOutputAudioMuted:(BOOL)a0 withCallID:(id)a1;
- (void)setViewControllerIsVisible:(BOOL)a0 withCallID:(id)a1;
- (id)valueForTTYSetting:(id)a0;

@end
