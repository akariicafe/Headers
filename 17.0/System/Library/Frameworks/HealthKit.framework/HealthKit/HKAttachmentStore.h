@class NSString, HKTaskServerProxyProvider, HKHealthStore, NSMutableDictionary;

@interface HKAttachmentStore : NSObject <_HKXPCExportable, HKAttachmentStoreClientInterface> {
    NSMutableDictionary *_attachmentDataHandlersByIdentifier;
    NSMutableDictionary *_dataStreamProgressByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (id)exportedInterface;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)addAttachmentToObject:(id)a0 name:(id)a1 contentType:(id)a2 URL:(id)a3 metadata:(id)a4 completion:(id /* block */)a5;
- (BOOL)_validateInputWithObject:(id)a0 contentType:(id)a1 URL:(id)a2 error:(id *)a3;
- (void)addAttachmentWithName:(id)a0 contentType:(id)a1 URL:(id)a2 toObjectWithIdentifier:(id)a3 schemaIdentifier:(id)a4 attachmentMetadata:(id)a5 referenceMetadata:(id)a6 completion:(id /* block */)a7;
- (void)addReferenceWithAttachment:(id)a0 toObjectWithIdentifier:(id)a1 schemaIdentifier:(id)a2 metadata:(id)a3 completion:(id /* block */)a4;
- (void)attachmentReferencesForObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)clientRemote_streamDataForAttachment:(id)a0 dataChunk:(id)a1 error:(id)a2 done:(BOOL)a3;
- (void)getAttachmentsForObject:(id)a0 completion:(id /* block */)a1;
- (void)getDataChunkForAttachment:(id)a0 chunkSize:(unsigned long long)a1 offset:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)getDataForAttachment:(id)a0 completion:(id /* block */)a1;
- (void)removeAttachment:(id)a0 fromObject:(id)a1 completion:(id /* block */)a2;
- (void)removeReference:(id)a0 schemaIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)streamDataForAttachment:(id)a0 dataHandler:(id /* block */)a1;

@end
