@class NSString, NSMutableSet, NSXPCConnection;

@interface DAManager : NSObject {
    NSMutableSet *_activeSessions;
    NSXPCConnection *_clientConnection;
    NSString *_serviceName;
}

+ (BOOL)updateHydraKey:(id)a0 session:(id)a1 seid:(id)a2 encryptedSEData:(id)a3 outError:(id *)a4;
+ (id)createHomeKey:(id)a0 seid:(id)a1 readerIdentifier:(id)a2 readerPublicKey:(id)a3 outError:(id *)a4;
+ (id)getHydraEncryptionCert:(id)a0 session:(id)a1 seid:(id)a2 outError:(id *)a3;
+ (void)rejectSharingInvitation:(id)a0 completionHandler:(id /* block */)a1;
+ (id)sharedManager;
+ (id)createHydraKey:(id)a0 seid:(id)a1 serverParameters:(id)a2 outError:(id *)a3;
+ (BOOL)isSupported;
+ (void)listKeysWithSession:(id)a0 seid:(id)a1 callback:(id /* block */)a2;
+ (void)handleSharingMessage:(id)a0 forInvitationIdentifier:(id)a1 fromMailboxIdentifier:(id)a2 completionHandler:(id /* block */)a3;
+ (BOOL)isCarKeySupportedForManufacturer:(id)a0 brand:(id)a1 ppid:(id)a2 error:(id *)a3;

- (id)createSharingSessionWithDelegate:(id)a0;
- (id)init;
- (void)registerFriendSideInvitationUnusableHandler:(id /* block */)a0;
- (id)createPairingSessionWithDelegate:(id)a0;
- (void)registerSession:(id)a0;
- (void)unregisterSession:(id)a0;
- (id)connection;
- (void)registerCrossPlatformTestMessageOverIDSHandler:(id /* block */)a0;
- (void)sendCrossPlatformTestData:(id)a0 toIdsIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)createManagementSessionWithDelegate:(id)a0;
- (void)registerFriendSideSharingTestCompletion:(id /* block */)a0;
- (void)registerCrossPlatformTestMessageSendHandler:(id /* block */)a0;
- (void)registerFriendSidePasscodeRetryRequestTestHandler:(id /* block */)a0;
- (void)unregisterSharingTestHandlers;
- (void)registerFriendSideSharingTestInvitationUUIDHandler:(id /* block */)a0;
- (void)registerOwnerSideInvitationRequestHandler:(id /* block */)a0;
- (void)registerOwnerSideSharingTestInvitations:(id)a0 callback:(id /* block */)a1;

@end
