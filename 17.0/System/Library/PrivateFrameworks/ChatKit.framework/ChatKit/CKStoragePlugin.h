@class NSDate, IMDirectoryContentsSizes, NSArray, IMMessageDirectoryContents, NSString, PSSpecifier, NSDictionary, STStorageOptionTip, STStorageActionTip, NSObject, IMCloudKitHooks;
@protocol OS_dispatch_queue;

@interface CKStoragePlugin : STStoragePlugin <STStorageOptionTipDelegate>

@property (retain, nonatomic) STStorageOptionTip *cachedAutoDeleteMessagesTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByAutoDeletingMessages;
@property (nonatomic) double lastQuerySpaceSavedByAutoDeletingMessagesTime;
@property (retain, nonatomic) STStorageActionTip *cachedReviewLargeConversationsTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByReviewingLargeConversations;
@property (nonatomic) double lastQuerySpaceSavedByReviewingLargeConversationsTime;
@property (retain, nonatomic) STStorageActionTip *cachedReviewLargeAttachmentsTip;
@property (nonatomic) BOOL cachedAttachmentsTakeUpSignificantSpace;
@property (retain, nonatomic) NSDate *cachedAttachmentsTakeUpSignificantSpaceDate;
@property (retain, nonatomic) STStorageOptionTip *cachedMessagesOniCloudTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByDeletingNonSyncedAttachments;
@property (nonatomic) double lastQuerySpaceSavedByNonSyncedDeletingAttachments;
@property (retain, nonatomic) NSArray *appSpecifiers;
@property (retain, nonatomic) NSArray *cloudAppSpecifiers;
@property (retain, nonatomic) NSDictionary *spaceTakenByAttachmentClass;
@property (retain, nonatomic) IMCloudKitHooks *cloudKitHooks;
@property (readonly, nonatomic) IMMessageDirectoryContents *messageDirectoryContents;
@property (readonly, nonatomic) IMDirectoryContentsSizes *messageDirectorySizes;
@property (readonly, nonatomic) PSSpecifier *initialAppSpecifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_representedApp;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)messageDatabaseSize;
- (unsigned long long)_spaceSavedByAutoDeleteMessages;
- (void)_iCloudHooksSetEnabledReturned:(id)a0;
- (unsigned long long)_totalSpaceOfLargeConversations;
- (void)calculateDirectorySizesIfNeeded;
- (BOOL)_attachmentsTakeUpMoreSpaceThanBytes:(unsigned long long)a0;
- (BOOL)_attachmentsTakeUpSignificantSpace;
- (id)_autoDeleteMessagesTip;
- (BOOL)_cloudKitEnabled;
- (void)_displayICloudErrorMessage;
- (void)_enableAutoDeleteMessages;
- (void)_enableMessagesOniCloud;
- (BOOL)_forceShowingAutoDeleteMessagesTip;
- (BOOL)_forceShowingReviewLargeAttachmentsTip;
- (void)_iCloudHooksValuesChanged:(id)a0;
- (void)_loadAppSpecifiers;
- (void)_loadAttachmentSizes;
- (void)_loadTips;
- (void)_loadiCloudAppSpecifiers;
- (id)_messagesOniCloudTip;
- (long long)_purgeableDiskSpace;
- (void)_refreshMessageOniCloudTipIfNeeded;
- (id)_reviewLargeAttachmentsTip;
- (BOOL)_shouldDisplayAutoDeleteMessagesTip;
- (BOOL)_shouldDisplayReviewLargeAttachmentsTip;
- (unsigned long long)_spaceSavedByDeletingNonSyncedAttachments;
- (unsigned long long)_spaceSavedByReviewingLargeConversations;
- (id)_spaceTakenForSpecifier:(id)a0;
- (long long)_totalSpaceOfAttachments;
- (id)cloudDocumentSpecifiers;
- (id)documentAppIdentifiers;
- (id)documentSpecifiersForApp:(id)a0;
- (void)enableOptionForTip:(id)a0;
- (id)externDataSizeAppIdentifiers;
- (long long)externDataSizeForApp:(id)a0;

@end
