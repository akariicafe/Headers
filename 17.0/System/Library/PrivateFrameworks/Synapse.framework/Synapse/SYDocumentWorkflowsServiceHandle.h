@class NSString, SYDocumentWorkflowsRepository;

@interface SYDocumentWorkflowsServiceHandle : NSObject <SYDocumentWorkflowsServiceInterface>

@property (readonly, nonatomic) SYDocumentWorkflowsRepository *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_createOpenLastModifiedDocumentImpl;
- (id)_fallbackUserActivityForDocumentWithAttributes:(id)a0;
- (id)_fetchUserActivityWithRelatedUniqueIdentifier:(id)a0 error:(id *)a1;
- (void)fetchAttributesForDocumentsWithIndexKeys:(id)a0 completion:(id /* block */)a1;
- (void)fetchUserActivityForDocumentIndexKey:(id)a0 completion:(id /* block */)a1;
- (void)hasLastModifiedDocument:(id)a0 completion:(id /* block */)a1;
- (void)hasOriginalDocumentForFileAtURL:(id)a0 withAttributes:(id)a1 completion:(id /* block */)a2;
- (id)initWithRepository:(id)a0;
- (void)openLastModifiedDocument:(id)a0 completion:(id /* block */)a1;
- (void)returnToSenderDocument:(id)a0 withAttributes:(id)a1 shouldCreateNewMessage:(BOOL)a2 completion:(id /* block */)a3;
- (void)saveUserActivity:(id)a0 forDocumentIndexKey:(id)a1 sourceBundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)unlinkDocumentsWithRelatedUniqueIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)updateLinkedDocumentsWithCompletion:(id /* block */)a0;

@end
