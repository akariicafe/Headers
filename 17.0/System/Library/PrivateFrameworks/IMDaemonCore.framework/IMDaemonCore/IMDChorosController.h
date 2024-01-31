@class NSString, CTStewieDataClient;

@interface IMDChorosController : NSObject <CTStewieDataClientDelegate>

@property (retain, nonatomic) CTStewieDataClient *coreTelephonyStewieClient;
@property (nonatomic, getter=isStewieActive) BOOL stewieActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)supportedServices;
+ (id)generatePresentationForRoadsideQuestionnaire:(id)a0;
+ (long long)serviceFromChatIdentifier:(id)a0;
+ (id)outgoingSequenceNumberDefaultsKeyForService:(long long)a0;
+ (id)incomingSequenceNumberDefaultsKeyForService:(long long)a0;
+ (BOOL)supportsService:(long long)a0;
+ (id)chatIdentifierForEmergency;
+ (id)reportTypeKey;
+ (id)generatePresentationForEmergencyQuestionnaire:(id)a0;
+ (id)sharedController;
+ (id)generateCTStewieStartMessage:(id)a0 forService:(long long)a1 error:(id *)a2;
+ (id)conversationIDDefaultsKeyForService:(long long)a0;
+ (id)chatIdentifierForRoadside:(long long)a0;
+ (id)serviceTypeKey;
+ (id)generatePresentationForStewieQuestionnaire:(id)a0 forService:(long long)a1;
+ (id)chatSubjectForService:(long long)a0;
+ (id)nameForService:(long long)a0;
+ (id)roadsideProviderIDFromChatIdentifier:(id)a0;
+ (id)conversationIDToUUIDsDefaultsKeyForService:(long long)a0;
+ (BOOL)needToOpenChatForService:(long long)a0 questionnaireDictionary:(id)a1;

- (id)_generateStopTranscriptSharingStatusItemForChat:(id)a0;
- (id)init;
- (void)sendStewieMessage:(id)a0 forChat:(id)a1;
- (void)_openStewieChatWithChatIdentifier:(id)a0;
- (void)connectedServicesChanged:(long long)a0;
- (void)_processReceivedTextMessageForService:(long long)a0 chatIdentifier:(id)a1 conversationID:(long long)a2 sequenceNum:(long long)a3 text:(id)a4;
- (void)sendEmergencyQuestionnaire:(id)a0;
- (void)_processMessageSendFailure:(id)a0 forSession:(id)a1;
- (void)updateChatPropertiesIfRequiredForEmergencyChat:(id)a0;
- (void)sendQuestionnaire:(id)a0;
- (void)updateChatPropertiesIfRequiredForRoadsideChat:(id)a0;
- (void)processReceivedEmergencyMessageFromIMTool:(long long)a0 message:(id)a1;
- (void)updateChatPropertiesIfRequiredForChat:(id)a0 service:(long long)a1;
- (void)locationUpdateDelivered:(id)a0;
- (id)roadsideProviderForChatIdentifier:(id)a0;
- (BOOL)_isMessageStewieCompatible:(id)a0;
- (void)stateChanged:(id)a0;
- (void)_processMessageSent:(id)a0 forSession:(id)a1;
- (id)conversationIDToConversationUUIDMapForService:(long long)a0;
- (void)setConversationIDToConversationUUIDMap:(id)a0 forService:(long long)a1;
- (void).cxx_destruct;
- (id)_simNumber;
- (BOOL)_createChatIfNecessary:(id)a0 chatIdentifier:(id)a1 service:(long long)a2;
- (id)_generateLocationUpdateSentStatusItemForChat:(id)a0;
- (id)_stringKeyForConversationID:(long long)a0;
- (void)setConversationUUID:(id)a0 forConversationID:(long long)a1 service:(long long)a2;
- (void)stopTranscriptSharingWithChat:(id)a0;
- (void)messageReceived:(id)a0 withMetadata:(id)a1 completionBlock:(id /* block */)a2;
- (id)roadsideProviderForProviderId:(long long)a0;
- (id)conversationUUIDForConversationID:(long long)a0 service:(long long)a1;
- (void)locationUpdateSent;
- (void)openStewieChatWithContext:(id)a0;

@end
