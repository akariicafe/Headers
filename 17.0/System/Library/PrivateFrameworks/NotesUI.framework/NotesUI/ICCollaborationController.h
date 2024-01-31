@class ICCollaborationAnalyticsTracker, ICSelectorDelayer, UIImage, NSMutableDictionary;
@protocol ICCollaborationControllerDelegate, ICCollaborationAnalyticsDelegate;

@interface ICCollaborationController : NSObject

@property (class, readonly, nonatomic) ICCollaborationController *sharedInstance;
@property (class, readonly, nonatomic) UIImage *shareSheetNoteThumbnailImage;
@property (class, readonly, nonatomic) UIImage *shareSheetFolderThumbnailImage;

@property (retain, nonatomic) ICCollaborationAnalyticsTracker *collaborationAnalyticsTracker;
@property (readonly, nonatomic) ICSelectorDelayer *updateSharesDelayer;
@property (retain, nonatomic) NSMutableDictionary *ckShareIDToRootRecordID;
@property (weak, nonatomic) id<ICCollaborationControllerDelegate> collaborationControllerDelegate;
@property (weak, nonatomic) id<ICCollaborationAnalyticsDelegate> collaborationAnalyticsDelegate;

+ (id)containerForAccountID:(id)a0;
+ (void)acceptShareWithMetadata:(id)a0 managedObjectContext:(id)a1 completionHandler:(id /* block */)a2;
+ (void)acceptShareWithMetadata:(id)a0 attemptNumber:(id)a1 container:(id)a2 accountID:(id)a3 fetchObjectWithCompletionHandler:(id /* block */)a4;
+ (void)acceptShareWithMetadata:(id)a0 container:(id)a1 accountID:(id)a2 fetchObjectWithCompletionHandler:(id /* block */)a3;
+ (id)containerForUserRecordID:(id)a0;
+ (void)didFailToUpdateShareWithError:(id)a0;
+ (void)didSaveShare:(id)a0 accountID:(id)a1;
+ (void)didStopSharing:(id)a0 recordID:(id)a1 accountID:(id)a2;
+ (id)existingShareForObject:(id)a0 managedObjectContext:(id)a1;
+ (void)fetchAndAcceptShareMetadataWithURL:(id)a0 managedObjectContext:(id)a1 alertBlock:(id /* block */)a2 showObjectBlock:(id /* block */)a3;
+ (void)fetchShareIfNecessaryForObject:(id)a0 completionHandler:(id /* block */)a1;
+ (void)genericShareErrorAlert:(id /* block */)a0;
+ (id)highlightColorForUserID:(id)a0 inNote:(id)a1 isDark:(BOOL)a2;
+ (id)newShareForObject:(id)a0;
+ (id)objectForCKShareRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)objectForShare:(id)a0 accountID:(id)a1 context:(id)a2;
+ (void)postDidUpdateShareNotificationForObject:(id)a0;
+ (void)prepareShare:(id)a0 forObject:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
+ (void)processShareAcceptanceWithMetadata:(id)a0 managedObjectContext:(id)a1 alertBlock:(id /* block */)a2 showObjectBlock:(id /* block */)a3;
+ (void)registerShareForObject:(id)a0 itemProvider:(id)a1 generateThumbnails:(BOOL)a2;
+ (void)registerShareForObject:(id)a0 itemProvider:(id)a1 generateThumbnails:(BOOL)a2 sharePreparationHandler:(id /* block */)a3;
+ (void)removeShareIfNeededWithOwnedObject:(id)a0 countParticipants:(BOOL)a1 context:(id)a2 completionHandler:(id /* block */)a3;
+ (id)rootRecordForObject:(id)a0;
+ (void)saveActivityType:(id)a0 isCollaborationSelected:(BOOL)a1 error:(id)a2 completed:(BOOL)a3 forNote:(id)a4;
+ (void)saveServerShare:(id)a0 persistParticipantEvents:(BOOL)a1 accountID:(id)a2;
+ (void)saveShare:(id)a0 attemptNumber:(id)a1 forObject:(id)a2 accountID:(id)a3 container:(id)a4 qualityOfService:(long long)a5 retryPrepHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
+ (void)saveShare:(id)a0 forObject:(id)a1 accountID:(id)a2 container:(id)a3 qualityOfService:(long long)a4 retryPrepHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
+ (void)saveShare:(id)a0 forObject:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
+ (void)saveShare:(id)a0 withRootRecord:(id)a1 object:(id)a2 accountID:(id)a3 container:(id)a4 qualityOfService:(long long)a5 completionHandler:(id /* block */)a6;
+ (long long)shareStatusOfFolder:(id)a0 objectsForMakingDecision:(id)a1;
+ (BOOL)showCloudKitShareAcceptancePartialFailureAlertForError:(id)a0 alertBlock:(id /* block */)a1;
+ (void)showQuotaExceededAlertIfNeededWithRecordID:(id)a0 accountID:(id)a1;
+ (void)trackShare:(id)a0 forNote:(id)a1;
+ (void)updatePendingInvitationsInAccountWithID:(id)a0 receivedSince:(id)a1;
+ (void)updateRootRecordMapWithShare:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)managedObjectContextObjectsDidChange:(id)a0;
- (void)updateShares;

@end
