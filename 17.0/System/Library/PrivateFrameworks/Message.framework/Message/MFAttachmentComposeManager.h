@class MFInvocationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MFAttachmentComposeManager : MFAttachmentManager {
    MFInvocationQueue *_defaultDownloadQueue;
    NSMutableArray *_composeAttachmentURLs;
    NSObject<OS_dispatch_queue> *_composeAttachmentsQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_fetchInvocationCallUsingBlock:(id /* block */)a0;
- (void)loadAttachmentURL:(id)a0 forContextID:(id)a1;
- (void)_callProgressBlockForAttachmentURL:(id)a0 withBytes:(long long)a1 expectedSize:(long long)a2;
- (id)_composeAttachmentDataProviderForContext:(id)a0;
- (id)_contentIDWithoutBracket:(id)a0;
- (id)_fetchDataForAttachment:(id)a0 withProvider:(id)a1 request:(id)a2 syncLock:(id *)a3;
- (id)_providerForURL:(id)a0;
- (id)_queueForAttachment:(id)a0;
- (id)attachmentForCID:(id)a0;
- (id)attachmentForData:(id)a0 mimeType:(id)a1 fileName:(id)a2 contentID:(id)a3 context:(id)a4;
- (id)attachmentForItemProvider:(id)a0 mimeType:(id)a1 fileName:(id)a2 contentID:(id)a3 context:(id)a4;
- (id)attachmentsForContext:(id)a0;
- (void)recordPasteboardAttachmentsForURLs:(id)a0 forContextID:(id)a1;
- (void)recordUndoAttachmentsForURLs:(id)a0 forContextID:(id)a1;
- (void)removeAttachmentForURL:(id)a0;
- (BOOL)updateAttachment:(id)a0 withNewData:(id)a1;

@end
