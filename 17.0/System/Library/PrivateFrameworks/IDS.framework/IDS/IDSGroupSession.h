@class NSString, NSSet, _IDSGroupSession;

@interface IDSGroupSession : NSObject {
    _IDSGroupSession *_internal;
}

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) unsigned int sessionEndedReason;
@property (readonly, nonatomic) NSSet *requiredCapabilities;
@property (readonly, nonatomic) NSSet *requiredLackOfCapabilities;

+ (void)augmentConnectionGroupNetworkParameters:(id)a0;
+ (id)augmentNetworkParametersForSession:(id)a0 participantID:(unsigned long long)a1 parameters:(id)a2;
+ (id)augmentNetworkParametersForSessionAlias:(id)a0 participantIDAlias:(unsigned long long)a1 salt:(id)a2 parameters:(id)a3;
+ (id)createEndpointForSessionIDAlias:(id)a0 topic:(id)a1 participantIDAlias:(unsigned long long)a2 salt:(id)a3;
+ (id)createGroupDescriptorForSessionIDAlias:(id)a0 topic:(id)a1 salt:(id)a2;
+ (id)keyValueDeliveryForSessionID:(id)a0;
+ (void)requestNWConnectionWithDataBlob:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestNWConnectionforIDSGroupSessionBroadcastParameter:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void)setPreferences:(id)a0;
- (void)dealloc;
- (id)_internal;
- (unsigned int)state;
- (void)invalidate;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (id)_internal_sessionWithValidityCheck;
- (id)broadcastParameterForService:(id)a0;
- (unsigned long long)createAliasForLocalParticipantIDWithSalt:(id)a0;
- (void)createAliasForLocalParticipantIDWithSalt:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)createAliasForParticipantID:(unsigned long long)a0 salt:(id)a1;
- (void)createAliasForParticipantID:(unsigned long long)a0 salt:(id)a1 completionHandler:(id /* block */)a2;
- (void)createSessionIDAliasWithSalt:(id)a0 completionHandler:(id /* block */)a1;
- (void)getParticipantIDForAlias:(unsigned long long)a0 salt:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAccount:(id)a0 destinations:(id)a1 options:(id)a2;
- (void)joinWithOptions:(id)a0;
- (id)keyValueDelivery;
- (void)leaveGroupSession;
- (void)leaveGroupSessionWithOptions:(id)a0;
- (void)manageDesignatedMembers:(id)a0 withType:(unsigned short)a1;
- (unsigned long long)participantIDForAlias:(unsigned long long)a0 salt:(id)a1;
- (void)reconnectUPlusOneSession;
- (void)registerPluginWithOptions:(id)a0;
- (void)removeParticipants:(id)a0;
- (void)requestActiveParticipants;
- (void)requestDataBlobForParticipantIDs:(id)a0;
- (void)requestDataCryptorForTopic:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestEncryptionKeyForParticipants:(id)a0;
- (void)requestURIsForParticipantIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)sessionIDAliasWithSalt:(id)a0;
- (void)setCallScreeningMode:(BOOL)a0;
- (void)setParticipantInfo:(id)a0;
- (void)setRequiredCapabilities:(id)a0 requiredLackOfCapabilities:(id)a1;
- (id)unicastConnectorWithDataMode:(long long)a0;
- (id)unicastParameterForParticipantID:(unsigned long long)a0 dataMode:(long long)a1 connectionIndex:(unsigned long long)a2;
- (id)unicastParameterForParticipantIDAlias:(unsigned long long)a0 salt:(id)a1 dataMode:(long long)a2 connectionIndex:(unsigned long long)a3;
- (void)unregisterPluginWithOptions:(id)a0;
- (void)updateMembers:(id)a0 withContext:(id)a1 messagingCapabilities:(id)a2 triggeredLocally:(BOOL)a3;
- (void)updateMembers:(id)a0 withContext:(id)a1 triggeredLocally:(BOOL)a2;
- (void)updateParticipantData:(id)a0 withContext:(id)a1;
- (void)updateParticipantType:(unsigned short)a0 members:(id)a1 withContext:(id)a2 triggeredLocally:(BOOL)a3;

@end
