@class NSDictionary;

@interface IMCloudKitSyncStatistics : NSObject

@property (nonatomic) unsigned long long syncedChatCount;
@property (nonatomic) unsigned long long totalChatCount;
@property (nonatomic) unsigned long long syncedAttachmentCount;
@property (nonatomic) unsigned long long totalAttachmentCount;
@property (nonatomic) unsigned long long syncedMessageCount;
@property (nonatomic) unsigned long long totalMessageCount;
@property (nonatomic) unsigned long long totalRecordCount;
@property (nonatomic) unsigned long long syncedRecordCount;
@property (retain, nonatomic) NSDictionary *serverCounts;
@property (retain, nonatomic) NSDictionary *syncStoreCounts;
@property (nonatomic) unsigned long long serverChatTotalCount;
@property (nonatomic) unsigned long long serverChatLiveCount;
@property (nonatomic) unsigned long long serverMessageTotalCount;
@property (nonatomic) unsigned long long serverMessageLiveCount;
@property (nonatomic) unsigned long long serverAttachmentTotalCount;
@property (nonatomic) unsigned long long serverAttachmentLiveCount;
@property (nonatomic) unsigned long long serverMessageUpdateTotalCount;
@property (nonatomic) unsigned long long serverMessageUpdateLiveCount;
@property (nonatomic) unsigned long long serverRecoverableMessageTotalCount;
@property (nonatomic) unsigned long long serverRecoverableMessageLiveCount;
@property (nonatomic) unsigned long long syncStoreWritableChatCount;
@property (nonatomic) unsigned long long syncStoreWrittenChatCount;
@property (nonatomic) unsigned long long syncStoreWritableMessageCount;
@property (nonatomic) unsigned long long syncStoreWrittenMessageCount;
@property (nonatomic) unsigned long long syncStoreWritableAttachmentCount;
@property (nonatomic) unsigned long long syncStoreWrittenAttachmentCount;
@property (nonatomic) unsigned long long syncStoreWritableMessageUpdateCount;
@property (nonatomic) unsigned long long syncStoreWrittenMessageUpdateCount;
@property (nonatomic) unsigned long long syncStoreWritableRecoverableMessageCount;
@property (nonatomic) unsigned long long syncStoreWrittenRecoverableMessageCount;
@property (nonatomic) unsigned long long currentSyncStatus;
@property (readonly, nonatomic) double percentSynced;

+ (id)_createSyncStatisticsDictionary:(long long)a0 messageSyncCount:(long long)a1 chatCount:(long long)a2 chatSyncCount:(long long)a3 attachmentCount:(long long)a4 attachmentSyncCount:(long long)a5;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)a0 syncType:(long long)a1 count:(double)a2 max:(double)a3;
+ (double)calculatePercentageOfTotal:(double)a0 count:(double)a1;
+ (id)percentStringFromDouble:(double)a0;
+ (id)percentStringFromTotal:(double)a0 count:(double)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_statsString:(id)a0 count:(long long)a1 total:(long long)a2;
- (id)_syncStatisticsDictionary;
- (id)initWithStatisticsDictionary:(id)a0;

@end
