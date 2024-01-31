@class NSString, NSMutableDictionary, NSCache;

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {
    NSMutableDictionary *_attachmentsData;
    NSCache *_attachmentsPlaceholderData;
    NSMutableDictionary *_attachmentsPasteboardData;
    NSMutableDictionary *_attachmentsUndoData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_commonInitWithDataProvider:(id)a0 forContentID:(id)a1;
- (id)_dataForAttachment:(id)a0;
- (void)addData:(id)a0 forContentID:(id)a1;
- (void)addDataItemProvider:(id)a0 forContentID:(id)a1;
- (id)dataForContentID:(id)a0;
- (void)fetchDataForAttachment:(id)a0 consumer:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
- (id)initWithAttachmentDataItemProvider:(id)a0 forContentID:(id)a1;
- (id)initWithData:(id)a0 forContentID:(id)a1;
- (id)messageForAttachment:(id)a0;
- (id)rawDataForContentID:(id)a0;
- (void)recordPasteboardDataForAttachments:(id)a0;
- (void)recordUndoDataForAttachments:(id)a0;
- (void)removeDataForAttachment:(id)a0;
- (id)storageLocationForAttachment:(id)a0 withMessage:(id)a1;

@end
