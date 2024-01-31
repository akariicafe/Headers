@class NSString, NSSet, PLCloudMasterMediaMetadata, NSDate, PLMomentShare, CPLScopedIdentifier;

@interface PLCloudMaster : PLManagedObject <PLSyncableMaster>

@property (retain, nonatomic) NSString *cloudMasterGUID;
@property (retain, nonatomic) NSString *sourceMasterForDuplicationIdentifier;
@property (retain, nonatomic) NSString *sourceMasterForDuplicationScopeIdentifier;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) short fullSizeJPEGSource;
@property (retain, nonatomic) NSDate *importDate;
@property (retain, nonatomic) NSString *uniformTypeIdentifier;
@property (retain, nonatomic) NSString *originalFilename;
@property (nonatomic) short originalOrientation;
@property (retain, nonatomic) NSString *importSessionID;
@property (copy, nonatomic) NSString *originatingAssetIdentifier;
@property (nonatomic) short placeholderState;
@property (nonatomic) short importedBy;
@property (retain, nonatomic) NSString *importedByBundleIdentifier;
@property (retain, nonatomic) NSString *importedByDisplayName;
@property (nonatomic) NSString *codecName;
@property (nonatomic) short videoFrameRate;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *resources;
@property (retain, nonatomic) NSSet *transientModernResources;
@property (retain, nonatomic) NSString *mediaMetadataType;
@property (retain, nonatomic) PLCloudMasterMediaMetadata *mediaMetadata;
@property (retain, nonatomic) PLMomentShare *momentShare;
@property (retain, nonatomic) CPLScopedIdentifier *sourceMasterForDuplicationCPLScopedIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) id localID;

+ (id)entityName;
+ (id)cloudMasterWithGUID:(id)a0 inMomentShare:(id)a1 prefetchResources:(BOOL)a2 inManagedObjectContext:(id)a3;
+ (id)_originalTypes;
+ (unsigned long long)fullSizeJPEGSourceForUTI:(id)a0 andImageDimensions:(struct CGSize { double x0; double x1; })a1;
+ (id)insertIntoPhotoLibrary:(id)a0 withCloudMasterGUID:(id)a1 inMomentShare:(id)a2;
+ (id)cloudMastersByScopedIdentifiers:(id)a0 relationshipKeyPathsForPrefetching:(id)a1 inLibrary:(id)a2;
+ (void)deleteOrphanedMastersWithManagedObjectContext:(id)a0;
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)a0;
+ (void)resetCloudMastersStateInManagedObjectContext:(id)a0;
+ (void)deleteMasterIfNecessary:(id)a0 inLibrary:(id)a1;
+ (id)listOfSyncedProperties;
+ (id)cloudMasterWithScopedIdentifier:(id)a0 prefetchResources:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)cloudMastersWithScopedIdentifiers:(id)a0 relationshipKeyPathsForPrefetching:(id)a1 inLibrary:(id)a2;

- (id)allMasterResources;
- (void)awakeFromInsert;
- (id)payloadID;
- (void)applyPropertiesFromCPLMasterChange:(id)a0;
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;
- (void)updateImportedByBundleIdentifier:(id)a0;
- (BOOL)hasResourcesOtherThanForAssetUuid:(id)a0;
- (BOOL)allOriginalsAreUploaded;
- (id)rm_cloudResourceForResourceType:(unsigned long long)a0 forAssetUuid:(id)a1;
- (id)cplPropertyRecord;
- (id)rm_applyResourcesFromCPLMasterChange:(id)a0 inPhotoLibrary:(id)a1;
- (id)scopedIdentifier;
- (id)sourceMasterForDuplicationCPLScopedIdentifier;
- (unsigned long long)sizeOfOriginal;
- (id)rm_assetUUIDToCloudResources;
- (void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)a0 inPhotoLibrary:(id)a1;
- (id)cplFullRecord;
- (id)cplMasterPropertyChangeForAsset:(id)a0;
- (void)_promptForNilScopeIdentifierRadar;
- (void)setSourceMasterForDuplicationCPLScopedIdentifier:(id)a0;
- (id)originalFilenameForResourceType:(unsigned long long)a0 filePath:(id)a1;
- (BOOL)allOriginalsAreLocallyAvailableForAssetUuid:(id)a0 useOriginalAltInsteadOfOriginal:(BOOL)a1;
- (void)updateImportedByDisplayName:(id)a0;
- (id)rm_cloudResourcesForResourceType:(unsigned long long)a0;
- (id)payloadsForChangedKeys:(id)a0;

@end
