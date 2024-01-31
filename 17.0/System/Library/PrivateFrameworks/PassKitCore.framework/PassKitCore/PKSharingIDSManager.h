@class NSArray, NSString, NSHashTable, NSMutableDictionary, NSObject, IDSService;
@protocol PKSharingIDSManagerDataSource, OS_dispatch_queue;

@interface PKSharingIDSManager : NSObject <IDSServiceDelegate> {
    NSHashTable *_delegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegatesLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_sharingDestinations;
    IDSService *_service;
}

@property (readonly, nonatomic) NSArray *delegates;
@property (weak, nonatomic) id<PKSharingIDSManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIDSService:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_cloudStoreZoneShareInvitationRequestInvitationData:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)init;
- (void)dealloc;
- (void)_deviceSharingCapabiltiesRequestReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)removeCloudStoreZoneInvitation:(id)a0 forHandle:(id)a1 completion:(id /* block */)a2;
- (void)removeDelegate:(id)a0;
- (id)_primaryAppleIDSharingDestination:(id)a0;
- (void)_cloudStoreZoneShareInvitationRequestRemoved:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_remoteRegistrationRequestReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (void)sendRemoteRegistrationRequestResult:(unsigned long long)a0 forHandle:(id)a1 completion:(id /* block */)a2;
- (void)addDelegate:(id)a0;
- (id)_handlerConfigurationForInvitation:(id)a0 forHandle:(id)a1;
- (void)sendCloudStoreZoneInvitation:(id)a0 forHandle:(id)a1 invitationError:(id)a2 completion:(id /* block */)a3;
- (void)_sendMessageWithProtobuf:(id)a0 destination:(id)a1 handleUserDetails:(id)a2 currentUserDetails:(id)a3 completion:(id /* block */)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)sendRemoteRegistrationRequest:(id)a0 forHandle:(id)a1 completion:(id /* block */)a2;
- (void)requestCloudStoreZoneInvitationData:(id)a0 forHandle:(id)a1 completion:(id /* block */)a2;
- (void)sendCloudStoreZoneInvitationResponse:(id)a0 completion:(id /* block */)a1;
- (void)_remoteRegistrationRequestResultReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_cloudStoreZoneShareInvitationRequestReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_sendCloudStoreInvitationRequest:(id)a0 handleUserDetails:(id)a1 currentUserDetails:(id)a2 type:(unsigned short)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)_canPerformIDSMessageForSharingGroup:(unsigned long long)a0 handleUserDetails:(id)a1 currentUserDetails:(id)a2 error:(id *)a3;
- (id)_idsIDForHandle:(id)a0;
- (void)_sharingDestinationForHandles:(id)a0 completion:(id /* block */)a1;
- (void)_deviceSharingCapabilitiesRequestResultReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initWithTargetQueue:(id)a0;
- (id)_sanitizedHandleWithFromID:(id)a0;
- (id)_sanitizedHande:(id)a0;
- (void)_cloudStoreZoneShareInvitationResponseReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_registerListeners;
- (void)sendDeviceSharingCapabilitiesRequestForHandle:(id)a0 completion:(id /* block */)a1;

@end
