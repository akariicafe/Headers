@class NSString, NSMutableDictionary, NSArray, IDSService;
@protocol SKAMessagingProvidingDelegate, SKAPushManaging;

@interface SKAMessagingProvider : NSObject <IDSServiceDelegate, SKAMessagingProviding>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSMutableDictionary *registeredIDSDeviceChangedObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAMessagingProvidingDelegate> delegate;
@property (readonly, nonatomic) NSArray *idsDevices;

+ (id)logger;
+ (id)_noValidIDSDetintationError;

- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (id)deviceTokenForTokenURI:(id)a0;
- (id)tokenURI;
- (id)initWithDelegate:(id)a0 serviceIdentifier:(id)a1 pushManager:(id)a2 queue:(id)a3;
- (void)signPayload:(id)a0 completion:(id /* block */)a1;
- (void)service:(id)a0 didHintCheckingTransportLogWithReason:(long long)a1;
- (BOOL)sendMessage:(id)a0 toHandles:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(BOOL)a3 identifier:(id *)a4 error:(id *)a5;
- (BOOL)_keysharingIsDisabledByServer;
- (BOOL)_selfSharingIsDisabledByServer;
- (void)isHandleMessageable:(id)a0 completion:(id /* block */)a1;
- (BOOL)isHandleAvailableToMessageFrom:(id)a0;
- (BOOL)sendMessage:(id)a0 toHandle:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(BOOL)a3 identifier:(id *)a4 error:(id *)a5;
- (id)deviceToken;
- (id)handleForTokenURI:(id)a0;
- (void).cxx_destruct;
- (void)verifySignedPayload:(id)a0 matchesPayload:(id)a1 fromTokenURI:(id)a2 completion:(id /* block */)a3;
- (id)selfAddressedURIForURI:(id)a0;
- (BOOL)isFromIDFromSelfAccount:(id)a0;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)a0;
- (BOOL)sendMessageToSelfDevices:(id)a0 limitToPresenceCapable:(BOOL)a1 identifier:(id *)a2 error:(id *)a3;
- (void)isHandleMessageableForPresence:(id)a0 completion:(id /* block */)a1;
- (BOOL)isValidURI:(id)a0;
- (id)registerIDSDeviceChangedObserver:(id /* block */)a0;
- (void)unregisterIDSDeviceChangedObserver:(id)a0;

@end
