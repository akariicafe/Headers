@class MFInvocationQueue, NSMutableArray;

@interface MFAttachmentComposeManager : MFAttachmentManager {
    MFInvocationQueue *_defaultDownloadQueue;
    NSMutableArray *_composeAttachmentURLs;
}

- (void)dealloc;
- (void)_fetchInvocationCallUsingBlock:(id /* block */)a0;
- (void)loadAttachmentURL:(id)a0 forContextID:(id)a1;
- (void)_callProgressBlockForAttachmentURL:(id)a0 withBytes:(unsigned long long)a1 expectedSize:(unsigned long long)a2;
- (id)_composeAttachmentDataProviderForContext:(id)a0;
- (id)_queueForAttachment:(id)a0;
- (id)attachmentForData:(id)a0 mimeType:(id)a1 fileName:(id)a2 contentID:(id)a3 context:(id)a4;
- (id)attachmentsForContext:(id)a0;
- (void)recordPasteboardAttachmentsForURLs:(id)a0 forContextID:(id)a1;
- (void)recordUndoAttachmentsForURLs:(id)a0 forContextID:(id)a1;
- (void)removeAttachmentForURL:(id)a0;
- (BOOL)updateAttachment:(id)a0 withNewData:(id)a1;
- (id)_fetchDataForAttachment:(id)a0 withProvider:(id)a1 syncLock:(id *)a2;

@end
