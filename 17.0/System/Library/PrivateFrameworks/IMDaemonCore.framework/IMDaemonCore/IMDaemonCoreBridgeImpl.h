@interface IMDaemonCoreBridgeImpl : NSObject

+ (void)updateChatUsingSyncData:(id)a0;
+ (void)updateTransfer:(id)a0;
+ (void)addTransfer:(id)a0 forGUID:(id)a1;
+ (void)updateStamp;
+ (void)addItem:(id)a0 toParentChatID:(id)a1 updatedLastMessageCount:(unsigned long long)a2;
+ (id)ckRecordWithT1Info:(id)a0;
+ (id)ckRecordWithT2Info:(id)a0;
+ (id)createMessageItemWithRecordRef:(struct _IMDMessageRecordStruct { } *)a0 handle:(id)a1;
+ (id)fileTransferForGUID:(id)a0;
+ (id)fileTransferWithGUID:(id)a0;
+ (void)handleMessageUpdateWithCKRecord:(id)a0;
+ (BOOL)isBackwardCompatibilityForItem:(id)a0 parentChatID:(id)a1;
+ (BOOL)isCompatibleWithMiCForItem:(id)a0;
+ (void)moveMessagePartForGUID:(id)a0 deleteDate:(id)a1 partBody:(id)a2;
+ (BOOL)registerGuid:(id)a0 forLocalURL:(id)a1;
+ (void)reloadDatabase;
+ (void)removeTransferFromBackup:(id)a0;
+ (void)setSortIDForItem:(id)a0 parentChatID:(id)a1;
+ (BOOL)shouldStoreMessageForItem:(id)a0;
+ (BOOL)storeAttachmentWithTransfer:(id)a0 withChatGUID:(id)a1;
+ (void)storeAttachmentWithTransfer:(id)a0 withMessageGUID:(id)a1;
+ (void)storeAttachmentsForMessage:(id)a0;
+ (void)updateLegacyTransferIfNeeded:(id)a0;

@end
