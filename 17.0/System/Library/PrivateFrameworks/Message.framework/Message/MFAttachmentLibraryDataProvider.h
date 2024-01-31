@class EDAttachmentPersistenceManager, NSString, MFMailMessageLibrary;

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProviderProtocol>

@property (retain, nonatomic) EDAttachmentPersistenceManager *persistenceManager;
@property (weak) MFMailMessageLibrary *messageLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLibrary:(id)a0;
- (void).cxx_destruct;
- (struct _MFAttachmentDataFetchResult { BOOL x0; id x1; BOOL x2; })_fetchDataForAttachment:(id)a0 consumer:(id)a1 progress:(id)a2;
- (void)fetchDataForAttachment:(id)a0 consumer:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
- (id)messageForAttachment:(id)a0;
- (id)storageLocationForAttachment:(id)a0 withMessage:(id)a1;

@end
