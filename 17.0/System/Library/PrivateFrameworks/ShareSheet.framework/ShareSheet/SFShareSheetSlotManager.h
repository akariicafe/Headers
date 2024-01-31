@class NSString, NSXPCConnection;
@protocol SFShareSheetSlotManagerDelegate;

@interface SFShareSheetSlotManager : NSObject <SFShareSheetSlotObserverProtocol, NSXPCConnectionDelegate> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<SFShareSheetSlotManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldEscapeXpcTryCatch;
- (void)connectionEstablished;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)invalidated;
- (void)connectionInterrupted;
- (id)init;
- (void)interrupted;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)invalidate;
- (void)activate;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxy;
- (id)machServiceName;
- (void)requestCollaborativeModeForContentIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)activityViewControllerDidEnterBackgroundWithSessionID:(id)a0;
- (void)activityViewControllerPerformEditActionsWithSessionID:(id)a0;
- (void)activityViewControllerPerformedActivityWithSessionID:(id)a0 presentationMs:(unsigned long long)a1 totalShareTimeMs:(unsigned long long)a2 activityType:(id)a3 success:(BOOL)a4;
- (void)activityViewControllerWillEnterForegroundWithSessionID:(id)a0;
- (void)activityViewControllerWithSessionID:(id)a0 didLongPressShareActivityWithIdentifier:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 favoritedActivity:(BOOL)a1 withIdentifier:(id)a2 activityCategory:(long long)a3;
- (void)activityViewControllerWithSessionID:(id)a0 provideFeedbackForPeopleSuggestionWithIdentifier:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 removedPersonWithIdentifier:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 selectedActionWithIdentifier:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 selectedActivityWithIdentifier:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 selectedDefaultActivityWithIdentifier:(id)a1 activityCategory:(long long)a2;
- (void)activityViewControllerWithSessionID:(id)a0 selectedPersonWithIdentifier:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 toggledActivityWithIdentifier:(id)a1 activityCategory:(long long)a2;
- (void)activityViewControllerWithSessionID:(id)a0 updatedFavoritesProxies:(id)a1 activityCategory:(long long)a2;
- (void)connectToDaemonWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)connectUIServiceToDaemonWithSessionID:(id)a0;
- (void)createSharingURLForCollaborationRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)a0;
- (void)deleteSharingURL:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)didPerformInServiceActivityWithIdentifier:(id)a0 completed:(BOOL)a1 items:(id)a2 error:(id)a3;
- (void)didUpdateAirDropTransferWithChange:(id)a0;
- (void)ensureConnectionEstablished;
- (void)ensureXPCStarted;
- (void)isShareOwnerOrAdminForFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)performActivityInHostWithUUID:(id)a0;
- (void)performAirDropActivityInHostWithNoContentView:(BOOL)a0;
- (void)performExtensionActivityInHostWithBundleID:(id)a0 request:(id)a1;
- (void)performShortcutActivityInHostWithBundleID:(id)a0 singleUseToken:(id)a1;
- (void)performUserDefaultsWithFavoritesProxies:(id)a0 suggestionProxies:(id)a1 orderedUUIDs:(id)a2 activityCategory:(long long)a3;
- (void)requestAddParticipantsAllowedForURL:(id)a0 share:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestConfigurationWithSessionID:(id)a0 completion:(id /* block */)a1;
- (void)requestDefaultShareModeCollaborationForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSharedURLForFileOrFolderURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveCollaborativeMode:(id)a0 forContentIdentifier:(id)a1;
- (void)sendConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)shareStatusForFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)willPerformInServiceActivityWithRequest:(id)a0 completion:(id /* block */)a1;

@end
