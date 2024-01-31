@class NSLock, NSString, NSMutableDictionary, EDAttachmentPersistenceManager, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MFAttachmentManager : NSObject <EFLoggable> {
    NSObject<OS_dispatch_queue> *_arrayAccessQueue;
    NSMutableDictionary *_providers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _providersLock;
    NSMutableDictionary *_attachments;
    NSMutableDictionary *_metadata;
    NSLock *_metaDataLock;
    NSObject<OS_dispatch_queue> *_imageScalingQueue;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EDAttachmentPersistenceManager *persistenceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (id)allManagers;
+ (id)supportedDocumentUTIs;

- (void)removeProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)loadAttachmentURL:(id)a0 forContextID:(id)a1;
- (void)_addSynapseAttributesToAttachment:(id)a0;
- (void)_cancelFetchForAttachment:(id)a0;
- (id)_contentIDForAttachment:(id)a0;
- (id)_dataProviderForAttachmentURL:(id)a0 error:(id *)a1;
- (void)_fetchCompletedForAttachment:(id)a0 error:(id)a1;
- (id)_fetchDataForAttachment:(id)a0 withProvider:(id)a1 request:(id)a2 syncLock:(id *)a3;
- (id)_filePathForAttachment:(id)a0;
- (BOOL)_setupAttachment:(id)a0 withMimeBody:(id)a1 error:(id *)a2;
- (void)addProvider:(id)a0 forBaseURL:(id)a1;
- (id)attachmentForCID:(id)a0;
- (id)attachmentForContentID:(id)a0;
- (id)attachmentForContentID:(id)a0 preferredSchemes:(id)a1;
- (id)attachmentForData:(id)a0 mimeType:(id)a1 fileName:(id)a2 contentID:(id)a3 context:(id)a4;
- (id)attachmentForItemProvider:(id)a0 mimeType:(id)a1 fileName:(id)a2 contentID:(id)a3 context:(id)a4;
- (id)attachmentForTextAttachment:(id)a0 error:(id *)a1;
- (id)attachmentForURL:(id)a0 error:(id *)a1;
- (id)attachmentForURL:(id)a0 withMimeBody:(id)a1 error:(id *)a2;
- (id)attachmentsForContext:(id)a0;
- (id)attachmentsForURLs:(id)a0 error:(id *)a1;
- (void)clearMetadataForAttachment:(id)a0;
- (id)fetchDataForAttachment:(id)a0;
- (void)fetchDataSynchronouslyForAttachment:(id)a0;
- (id)imageScalingQueue;
- (void)insertMessageAttachmentMetadataToPersistence:(id)a0 forMessage:(id)a1;
- (id)metadataForAttachment:(id)a0 forKey:(id)a1;
- (void)recordPasteboardAttachmentsForURLs:(id)a0 forContextID:(id)a1;
- (void)recordUndoAttachmentsForURLs:(id)a0 forContextID:(id)a1;
- (void)removeAttachmentForURL:(id)a0;
- (void)removeProviderForBaseURL:(id)a0;
- (void)setContentID:(id)a0 forAttachment:(id)a1;
- (void)setMetadataForAttachment:(id)a0 toValue:(id)a1 forKey:(id)a2;
- (BOOL)updateAttachment:(id)a0 withNewData:(id)a1;

@end
