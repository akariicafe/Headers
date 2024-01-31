@class NSData, NSString;

@interface PLProjectAlbum : PLManagedAlbum

@property (copy, nonatomic) NSData *projectData;
@property (copy, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSString *projectExtensionIdentifier;
@property (copy, nonatomic) NSString *projectRenderUuid;

+ (id)entityName;
+ (id)validKindsForPersistence;
+ (BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)a0 error:(id *)a1;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1 documentType:(id)a2 projectExtensionIdentifier:(id)a3;

- (BOOL)supportsAssetOrderKeys;
- (void)willSave;
- (void)prepareForDeletion;
- (id)payloadForChangedKeys:(id)a0;
- (void)awakeFromInsert;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (id)duplicateProjectPreviewImageData:(id)a0 error:(id *)a1;
- (id)projectPreviewImageData;
- (BOOL)setProjectPreviewImageData:(id)a0 error:(id *)a1;
- (id)_previewImageFilename;

@end
