@class WLSQLController, WLFeaturePayload, NSString;

@interface WLMessagesMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource> {
    struct sqlite3 { } *_database;
    NSString *_accountGuid;
}

@property (retain, nonatomic) WLSQLController *sqlController;
@property (weak, nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;
+ (id)_attachmentPersistentPathForGuid:(id)a0 fileName:(id)a1 mimeType:(id)a2 uti:(id)a3;

- (void)enable;
- (id)dataType;
- (id)contentType;
- (void)_closeDatabase;
- (void)setState:(id)a0;
- (void).cxx_destruct;
- (BOOL)_beginTransaction;
- (BOOL)_openDatabase;
- (BOOL)_commitTransaction;
- (BOOL)_performSimpleQuery:(id)a0;
- (BOOL)_insertMessage:(id)a0;
- (id)_messageAccountGUIDWithMessage:(id)a0;
- (void)addWorkingTime:(unsigned long long)a0;
- (id)_chatPropertiesDataWithMessage:(id)a0;
- (id)importWillBegin;
- (long long)_attachmentDateWithMessage:(id)a0;
- (id)_chatAccountIDWithMessage:(id)a0;
- (id)_chatAccountLoginWithMessage:(id)a0;
- (id)_chatDisplayNameWithMessage:(id)a0;
- (id)_chatGUIDWithGroupRoomName:(id)a0;
- (id)_chatGUIDWithNonGroupMessage:(id)a0;
- (id)_chatGroupIDWithNonGroupMessage:(id)a0;
- (long long)_chatIDForHandleIDs:(id)a0 groupRoomName:(id)a1 groupID:(id)a2 message:(id)a3;
- (id)_chatIdentifierWithNonGroupMessage:(id)a0;
- (id)_chatLastAddressedHandleWithMessage:(id)a0;
- (id)_chatServiceWithMessage:(id)a0;
- (long long)_chatStateWithMessage:(id)a0;
- (long long)_chatStyleWithMessage:(id)a0;
- (id)_databaseFilename;
- (long long)_handleIDFromNonGroupMessageHandleIDs:(id)a0;
- (id)_handleIDsForMessage:(id)a0;
- (BOOL)_insertChatHandleJoinRowWithChatID:(long long)a0 handleID:(long long)a1 duplicateMightExist:(BOOL)a2;
- (BOOL)_insertChatMessageJoinRowWithChatID:(long long)a0 messageID:(long long)a1 date:(long long)a2;
- (BOOL)_insertMessageAttachmentJoinRowWithMessageID:(long long)a0 attachmentID:(long long)a1;
- (long long)_insertMessageRowWithMessage:(id)a0 handleIDs:(id)a1 groupRoomName:(id)a2;
- (long long)_insertRowWithAttachment:(id)a0 filePath:(id)a1 forMessage:(id)a2;
- (id)_messageAccountWithMessage:(id)a0;
- (id)_messageAttributedBodyDataWithMessage:(id)a0;
- (long long)_messageDateDeliveredWithMessage:(id)a0;
- (long long)_messageDateReadWithMessage:(id)a0;
- (long long)_messageDateWithMessage:(id)a0;
- (long long)_messageErrorWithMessage:(id)a0;
- (id)_messageGroupTitleWithMessage:(id)a0;
- (BOOL)_messageIsFromMeWithMessage:(id)a0;
- (id)_messageServiceCenterWithMessage:(id)a0;
- (id)_messageServiceWithMessage:(id)a0;
- (id)_messageSubjectWithMessage:(id)a0;
- (long long)_messageVersionWithMessage:(id)a0;
- (id)_otherPartyAddressWithNonGroupMessage:(id)a0;
- (id)_ourAddressWithMessage:(id)a0;
- (BOOL)_rollbackTransaction;
- (long long)_senderHandleIDFromReceviedGroupMessageHandleIDs:(id)a0;
- (id)_serviceStringWithMessage:(id)a0;
- (id)_sortedHandleIDs:(id)a0;
- (id)_uncanonicalizedIDWithMessage:(id)a0;
- (id)_uniqueHandleStringsWithMessage:(id)a0;
- (void)_updateClient;
- (BOOL)accountBased;
- (void)deleteData;
- (void)deleteFromTable:(id)a0;
- (void)estimateItemSizeForSummary:(id)a0 account:(id)a1;
- (id)importDidEnd;
- (void)importRecordData:(id)a0 summary:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (id)initWithSQLController:(id)a0;
- (BOOL)isValidTableName:(id)a0;
- (void)performPreImportPhaseForSummary:(id)a0 data:(id)a1;
- (void)setEstimatedDataSize:(unsigned long long)a0;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;

@end
