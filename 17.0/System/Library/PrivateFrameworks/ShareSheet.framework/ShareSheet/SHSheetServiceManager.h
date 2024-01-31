@class UISUIActivityViewControllerConfiguration, SFShareSheetSlotManager, SHSheetSession, NSString;
@protocol SHSheetServiceManagerDelegate;

@interface SHSheetServiceManager : NSObject <SFShareSheetSlotManagerDelegate, SHSheetHostService, SFCollaborationCreationDelegate, SFCollaborationService>

@property (readonly, nonatomic) SFShareSheetSlotManager *slotManager;
@property (retain, nonatomic) UISUIActivityViewControllerConfiguration *hostConfiguration;
@property (nonatomic) BOOL updateAfterConnection;
@property (readonly, nonatomic) SHSheetSession *session;
@property (weak, nonatomic) id<SHSheetServiceManagerDelegate> delegate;
@property (readonly, nonatomic) long long connectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInterrupted;
- (id)init;
- (void)dealloc;
- (void)update;
- (void)applicationWillEnterForeground;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)setConnectionState:(long long)a0;
- (void)requestCollaborativeModeForContentIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleConnectionCompletion;
- (void)_invalidateSlotManagerIfNeeded;
- (void)_sendConfiguration:(id)a0;
- (void)connectWithSession:(id)a0;
- (void)createSharingURLForCollaborationRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)a0;
- (void)deleteSharingURL:(id)a0 containerSetupInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)didPerformInServiceActivityWithIdentifier:(id)a0 completed:(BOOL)a1 items:(id)a2 error:(id)a3;
- (void)didUpdateAirDropTransferWithChange:(id)a0;
- (void)favoriteUserDefaultsActivity:(BOOL)a0 withIdentifier:(id)a1 activityCategory:(long long)a2;
- (void)isShareOwnerForFileURL:(id)a0 share:(id)a1 completionHandler:(id /* block */)a2;
- (void)isShareOwnerOrAdminForFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)longPressShareActivityWithIdentifier:(id)a0;
- (void)performActionActivityWithIdentifier:(id)a0;
- (void)performActivityInHostWithUUID:(id)a0;
- (void)performAirDropActivityInHostWithNoContentView:(BOOL)a0;
- (void)performEditAction;
- (void)performExtensionActivityInHostWithBundleID:(id)a0 request:(id)a1;
- (void)performPersonSuggestionWithIdentifier:(id)a0;
- (void)performShareActivityWithIdentifier:(id)a0;
- (void)performShortcutActivityInHostWithBundleID:(id)a0 singleUseToken:(id)a1;
- (void)performUserDefaultsActivityWithIdentifier:(id)a0 activityCategory:(long long)a1;
- (void)performUserDefaultsWithFavoritesProxies:(id)a0 suggestionProxies:(id)a1 orderedUUIDs:(id)a2 activityCategory:(long long)a3;
- (void)provideFeedbackForPeopleSugestionIdentifier:(id)a0;
- (void)removePersonSuggestionWithIdentifier:(id)a0;
- (void)reportActivityWithSessionID:(id)a0 presentationMs:(unsigned long long)a1 totalShareTimeMs:(unsigned long long)a2 activityType:(id)a3 success:(BOOL)a4;
- (void)requestAddParticipantsAllowedForURL:(id)a0 share:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestDefaultShareModeCollaborationForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSharedURLForFileOrFolderURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveCollaborativeMode:(id)a0 forContentIdentifier:(id)a1;
- (void)shareStatusForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)toggleUserDefaultsActivityWithIdentifier:(id)a0 activityCategory:(long long)a1;
- (void)updateUserDefaultsFavorites:(id)a0 activityCategory:(long long)a1;
- (void)willPerformInServiceActivityWithRequest:(id)a0 completion:(id /* block */)a1;

@end
