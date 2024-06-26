@class MFMessageLibrary, MFMessageCriterion, NSDate;

@interface MFLibraryStore : MFMailMessageStore {
    MFMessageLibrary *_library;
    MFMessageCriterion *_criterion;
    unsigned long long _serverMessageCount;
    unsigned long long _fetchWindow;
}

@property (retain, nonatomic) NSDate *earliestReceivedDate;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (unsigned int)defaultLoadOptions;
+ (id)storeWithMailbox:(id)a0;
+ (BOOL)createEmptyStoreForPath:(id)a0;
+ (BOOL)storeAtPathIsWritable:(id)a0;
+ (id)storeWithCriterion:(id)a0;

- (id)initWithMailbox:(id)a0;
- (unsigned long long)unreadCount;
- (id)criterion;
- (void)dealloc;
- (id)URLString;
- (id)library;
- (unsigned long long)totalCount;
- (void)updateMetadata;
- (unsigned long long)growFetchWindow;
- (void)deleteMessagesOlderThanNumberOfDays:(int)a0 compact:(BOOL)a1;
- (void)setLibrary:(id)a0;
- (id)mailbox;
- (BOOL)shouldCancel;
- (unsigned long long)fetchWindow;
- (void)_addInvocationToQueue:(id)a0;
- (id)_cachedBodyDataContainerForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)_cachedBodyForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)_cachedHeaderDataForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)_cachedHeadersForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (unsigned long long)_calculateFetchWindowWithAdditionalMultiple:(BOOL)a0;
- (id)_copyDataFromMimePart:(id)a0 threshold:(unsigned int)a1 downloadIfNecessary:(BOOL)a2;
- (id)_fetchBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 downloadIfNecessary:(BOOL)a2 partial:(BOOL *)a3;
- (BOOL)_fetchDataForMimePart:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 consumer:(id)a3;
- (id)_fetchFullBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 downloadIfNecessary:(BOOL)a2 didDownload:(BOOL *)a3;
- (id)_fetchHeaderDataForMessage:(id)a0 downloadIfNecessary:(BOOL)a1;
- (unsigned long long)_fetchWindowMinimum;
- (unsigned long long)_fetchWindowMultiple;
- (void)_handleFlagsChangedForMessages:(id)a0 flags:(id)a1 oldFlagsByMessage:(id)a2;
- (id)_memberMessagesWithCompactionNotification:(id)a0;
- (void)_queueMessageFlagsChanged:(id)a0;
- (void)_queueMessagesAdded:(id)a0;
- (void)_queueMessagesWereCompacted:(id)a0;
- (void)_queueMessagesWillBeCompacted:(id)a0;
- (void)_setNeedsAutosave;
- (void)addCountsForMessages:(id)a0 shouldUpdateUnreadCount:(BOOL)a1;
- (unsigned long long)allNonDeletedCountIncludingServerSearch:(BOOL)a0 andThreadSearch:(BOOL)a1;
- (BOOL)allowsAppend;
- (id)bodyDataForMessage:(id)a0 isComplete:(BOOL *)a1 isPartial:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (BOOL)canCompact;
- (void)compactMessages:(id)a0;
- (id)copyMessagesMatchingCriterion:(id)a0 options:(unsigned int)a1;
- (id)copyMessagesWithRemoteIDs:(id)a0 options:(unsigned int)a1 inMailbox:(id)a2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)a0;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned int)a1;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned int)a1 generation:(unsigned long long *)a2;
- (id)dataForMimePart:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3 didDownload:(BOOL *)a4;
- (BOOL)dataForMimePart:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isComplete:(BOOL *)a2 withConsumer:(id)a3 downloadIfNecessary:(BOOL)a4 didDownload:(BOOL *)a5;
- (id)dataPathForMessage:(id)a0 part:(id)a1;
- (id)dateOfOldestNonIndexedNonSearchResultMessage;
- (void)deleteMessages:(id)a0 moveToTrash:(BOOL)a1;
- (void)doCompact;
- (unsigned long long)fetchWindowCap;
- (id)filterMessagesByMembership:(id)a0;
- (id)fullBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3 didDownload:(BOOL *)a4;
- (id)fullBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3 usePartDatas:(BOOL)a4 didDownload:(BOOL *)a5;
- (void)handleMessageFlagsChanged:(id)a0;
- (void)handleMessagesAdded:(id)a0 earliestReceivedDate:(id)a1;
- (void)handleMessagesCompacted:(id)a0;
- (void)handleMessagesWillBeCompacted:(id)a0;
- (BOOL)hasCompleteDataForMimePart:(id)a0;
- (BOOL)hasMessageForAccount:(id)a0;
- (id)initWithCriterion:(id)a0 mailbox:(id)a1 readOnly:(BOOL)a2;
- (void)invalidateFetchWindow;
- (void)messagesWereAdded:(id)a0 earliestReceivedDate:(id)a1;
- (id)newObjectCache;
- (void)openSynchronously;
- (void)purgeMessages:(id)a0;
- (id)serverSearchResults;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (id)setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (id)setFlagsLocallyFromDictionary:(id)a0 forMessages:(id)a1;
- (void)setNumberOfAttachments:(unsigned int)a0 isSigned:(BOOL)a1 isEncrypted:(BOOL)a2 forMessage:(id)a3;
- (BOOL)shouldGrowFetchWindow;
- (id)storeData:(id)a0 forMimePart:(id)a1 isComplete:(BOOL)a2;
- (unsigned long long)unreadCountMatchingCriterion:(id)a0;
- (void)willFetchMessages;
- (unsigned long long)indexOfMessage:(id)a0;
- (unsigned long long)appendMessages:(id)a0 unsuccessfulOnes:(id)a1 newMessageIDs:(id)a2 newMessages:(id)a3 flagsToSet:(id)a4;
- (id)copyMessagesMatchingText:(id)a0 options:(unsigned int)a1;
- (id)copyMessagesWithRemoteIDs:(id)a0 options:(unsigned int)a1;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)a0 limit:(unsigned int)a1;
- (id)dateOfNewestNonSearchResultMessage;
- (void)deleteBodyDataForMessage:(id)a0;
- (id)initWithCriterion:(id)a0;
- (id)initWithMailboxUid:(id)a0 readOnly:(BOOL)a1;
- (id)messageForMessageID:(id)a0 options:(unsigned int)a1;
- (id)messageWithLibraryID:(unsigned int)a0 options:(unsigned int)a1;
- (id)mutableCopyOfAllMessages;
- (unsigned long long)nonDeletedCountIncludingServerSearch:(BOOL)a0 andThreadSearch:(BOOL)a1;
- (void)purgeMessagesBeyondLimit:(unsigned long long)a0 keepingMessage:(id)a1;
- (void)setFlagsForAllMessagesFromDictionary:(id)a0;
- (void)updateUserInfoToLatestValues;
- (void)writeUpdatedMessageDataToDisk;

@end
