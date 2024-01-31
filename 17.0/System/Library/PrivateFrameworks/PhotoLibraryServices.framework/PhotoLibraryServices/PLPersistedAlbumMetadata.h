@class NSData, NSString, NSURL, NSMutableOrderedSet, NSNumber, PLGenericAlbum;

@interface PLPersistedAlbumMetadata : NSObject

@property (retain, nonatomic) PLGenericAlbum *genericAlbum;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *kind;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic, getter=isPrototype) BOOL prototype;
@property (nonatomic, getter=isInTrash) BOOL inTrash;
@property (nonatomic) BOOL customSortAscending;
@property (nonatomic) int customSortKey;
@property (retain, nonatomic) NSString *customKeyAssetUUID;
@property (retain, nonatomic) NSMutableOrderedSet *assetUUIDs;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic) NSData *userQueryData;
@property (retain, nonatomic) NSString *importedByBundleIdentifier;
@property (retain, nonatomic) NSString *projectDocumentType;
@property (readonly, nonatomic) BOOL isFolder;
@property (nonatomic) BOOL allowsOverwrite;

+ (BOOL)isValidPath:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_readMetadata;
- (id)_fetchChildUUIDs;
- (void)_saveMetadata;
- (id)initWithPLGenericAlbum:(id)a0 pathManager:(id)a1;
- (id)initWithPersistedDataAtURL:(id)a0;
- (id)initWithTitle:(id)a0 uuid:(id)a1 cloudGUID:(id)a2 kind:(id)a3 assetUUIDs:(id)a4 persistedAlbumDataDirectory:(id)a5;
- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (void)persistAlbumData;
- (void)removePersistedAlbumData;
- (void)updateChildrenOrderingInAlbum:(id)a0 includePendingAssetChanges:(BOOL)a1;

@end
