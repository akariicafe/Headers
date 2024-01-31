@class ICTableVersionedDocument, ICTable;

@interface ICAttachmentTableModel : ICAttachmentModel

@property (retain, nonatomic) ICTableVersionedDocument *tableDocument;
@property (readonly, nonatomic) ICTable *table;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)tableFromAttributedString:(id)a0 managedObjectContext:(id)a1 replicaID:(id)a2;

- (void).cxx_destruct;
- (id)localizedFallbackTitle;
- (BOOL)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
- (id)mergeableDataForCopying:(id *)a0;
- (void)replaceChildInlineAttachment:(id)a0 withText:(id)a1;
- (id)stringsAtRow:(unsigned long long)a0;
- (void)writeMergeableData;
- (void)addMergeableDataToCloudKitRecord:(id)a0 approach:(long long)a1 mergeableFieldState:(id)a2;
- (void)attachmentAwakeFromFetch;
- (void)attachmentDidRefresh:(BOOL)a0;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentWillTurnIntoFault;
- (BOOL)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (void)mergeTablePrimitiveData;
- (void)persistPendingChanges;
- (BOOL)providesTextContentInNote;
- (void)regenerateTextContentInNote;
- (void)removeTimestampsForReplicaID:(id)a0;
- (id)searchableTextContentInNote;
- (id)textContentInNote;
- (void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)a0;
- (void)updateAttachmentByMergingWithTableData:(id)a0;
- (void)willMarkAttachmentForDeletion;
- (void)writeCurrentTimestampToMergeableFieldStateIfNecessary:(id)a0;

@end
