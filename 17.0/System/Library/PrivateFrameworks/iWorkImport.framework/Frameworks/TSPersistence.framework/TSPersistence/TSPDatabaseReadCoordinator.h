@class NSUUID, NSString, TSPObjectContext, NSURL, TSPFinalizeHandlerQueue, TSPDatabase, NSMutableDictionary, TSPDocumentLoadValidationPolicy, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface TSPDatabaseReadCoordinator : TSPReadCoordinatorBase <TSPDatabaseReaderDelegate, TSPReadCoordinator> {
    TSPObjectContext *_context;
    NSUUID *_baseObjectUUID;
    NSURL *_packageURL;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    TSPDatabase *_database;
    unsigned long long _databaseVersion;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMapTable *_dataDictionary;
    NSObject<OS_dispatch_queue> *_appRelativeDataQueue;
    NSMutableDictionary *_appRelativeDataDictionary;
}

@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSUUID *baseObjectUUID;
@property (readonly, nonatomic) BOOL isReadingFromDocument;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;

- (id)init;
- (id)context;
- (void).cxx_destruct;
- (id)dataForDatabaseObject:(id)a0 filename:(id)a1;
- (void)didUpdateLazyReferenceDelegate:(id)a0;
- (id)externalObjectForIdentifier:(long long)a0 componentIdentifier:(long long)a1 isReadFinished:(BOOL)a2;
- (id)createUpgradedOldAppBundleResourcePath:(id)a0;
- (id)dataForAppRelativePath:(id)a0 filename:(id)a1;
- (id)dataForLinkURL:(id)a0 filename:(id)a1;
- (id)dataForReadChannel:(id)a0 filename:(id)a1 linkURL:(id)a2;
- (id)databaseReader:(id)a0 wantsDataForAppRelativePath:(id)a1 filename:(id)a2;
- (id)databaseReader:(id)a0 wantsDataForDatabaseObjectIdentifier:(long long)a1 filename:(id)a2;
- (void)didReferenceExternalObject:(id)a0 withIdentifier:(long long)a1;
- (id)documentResourceInfoForAppRelativePath:(id)a0;
- (BOOL)endReading;
- (id)initWithContext:(id)a0 packageURL:(id)a1 finalizeHandlerQueue:(id)a2 error:(id *)a3;
- (void)readComponent:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)readRootObjectWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)reader:(id)a0 didFindExternalReferenceToObjectIdentifier:(long long)a1 componentIdentifier:(long long)a2 isWeak:(BOOL)a3 allowUnknownObject:(BOOL)a4 objectClass:(id)a5 objectProtocol:(id)a6 fromParentObject:(id)a7 completion:(id /* block */)a8;
- (void)reader:(id)a0 didFindExternalRepeatedReference:(id)a1 isWeak:(BOOL)a2 allowUnknownObject:(BOOL)a3 objectClass:(Class)a4 objectProtocol:(id)a5 fromParentObject:(id)a6 completion:(id /* block */)a7;
- (void)reader:(id)a0 didUnarchiveObject:(id)a1;
- (id)reader:(id)a0 wantsDataForIdentifier:(long long)a1;
- (long long)reader:(id)a0 wantsObjectIdentifierForUUID:(id)a1;
- (id)unarchivedObjectForIdentifier:(long long)a0 isReadFinished:(BOOL)a1;

@end
