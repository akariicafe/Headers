@class NSMutableDictionary, NSString, NSArray, MSPSharedTripStorageController, MSPSharedTripSharingIdentity, MSPSharedTripGroupSession, IDSService;
@protocol MSPSharedTripAvailabiltyDelegate, MSPSharedTripRelayDelegate;

@interface MSPSharedTripRelay : NSObject <IDSServiceDelegate> {
    IDSService *_sharingService;
    NSString *_clientID;
    NSString *_displayName;
    MSPSharedTripGroupSession *_sharingETAGroupSession;
    NSMutableDictionary *_sharedTripGroupIDSSessions;
    NSMutableDictionary *_packetBuckets;
}

@property (readonly, nonatomic) BOOL hasValidIDSAccount;
@property (readonly, nonatomic) NSString *sharingName;
@property (readonly, nonatomic) NSString *sharingHandle;
@property (readonly, nonatomic) NSArray *accountAliases;
@property (retain, nonatomic) MSPSharedTripStorageController *storageController;
@property (readonly, nonatomic) MSPSharedTripSharingIdentity *sharingIdentity;
@property (weak, nonatomic) id<MSPSharedTripRelayDelegate> delegate;
@property (weak, nonatomic) id<MSPSharedTripAvailabiltyDelegate> availabilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (id)init;
- (void)dealloc;
- (void)_handleCommand:(id)a0 fromID:(id)a1;
- (void)stopSharing;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 fromID:(id)a3 hasBeenDeliveredWithContext:(id)a4;
- (void)_handleChunk:(id)a0 fromID:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (void).cxx_destruct;
- (id)startSharingGroupSessionWithTripIdentifer:(id)a0;
- (void)_handleIncomingMessage:(id)a0 info:(id)a1 fromID:(id)a2 receivingHandle:(id)a3 receivingAccountIdentifier:(id)a4;
- (id)removeSharingWith:(id)a0;
- (void)_fetchDisplayName;
- (void)service:(id)a0 account:(id)a1 receivedGroupSessionParticipantUpdate:(id)a2;
- (void)_removeFinishedSession:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)groupSessionForIdentifier:(id)a0;
- (void)_startService;

@end
