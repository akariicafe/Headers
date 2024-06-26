@class SKFilesystem, NSString, SKDiskPrivateCache, NSNumber, NSObject;

@interface SKDisk : NSObject

@property (retain, nonatomic) NSNumber *diskObjectID;
@property (retain) NSObject *daDisk;
@property (readonly) BOOL isIOMediaDisk;
@property (readonly) BOOL isVirtualDiskType;
@property (retain) NSString *role;
@property (retain) NSString *type;
@property (retain) NSString *filesystemType;
@property BOOL isValid;
@property (retain) NSString *volumeName;
@property (retain) NSString *volumeUUID;
@property (retain) NSString *mediaUUID;
@property (retain) NSString *mountPoint;
@property unsigned long long freeSpace;
@property unsigned long long purgeableSpace;
@property unsigned long long availableSpace;
@property unsigned long long totalSpace;
@property (retain) NSString *diskIdentifier;
@property BOOL isDiskImage;
@property BOOL isInternal;
@property BOOL isWholeDisk;
@property BOOL isPhysicalDisk;
@property BOOL canPartitionDisk;
@property BOOL isLocked;
@property BOOL supportsRepair;
@property BOOL supportsVerify;
@property BOOL isCaseSensitive;
@property BOOL supportsJournaling;
@property BOOL isJournaled;
@property (retain) NSString *ioContent;
@property unsigned long long unformattedSize;
@property unsigned long long childCount;
@property unsigned long long startLocation;
@property (retain) SKFilesystem *filesystem;
@property BOOL isOSInternal;
@property BOOL isPartitionDisk;
@property BOOL isWritable;
@property unsigned int ownerUID;
@property (readonly) BOOL isExternal;
@property (retain, nonatomic) SKDiskPrivateCache *privateCache;
@property (readonly) NSString *contentDiskIdentifier;

+ (void)sortWithDisks:(id)a0;

- (id)children;
- (void)updateWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)redactedDescription;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (BOOL)cleanupWithError:(id *)a0;
- (BOOL)unmountWithOptions:(id)a0 error:(id *)a1;
- (void)expireCacheWithOptions:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (BOOL)mountWithCompletionBlock:(id /* block */)a0;
- (BOOL)rename:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)_DAVolumeUUIDForDiskIdentifier:(id)a0;
- (BOOL)canBoot;
- (BOOL)ejectWithError:(id *)a0;
- (void)expireCacheWithCompletionBlock:(id /* block */)a0;
- (id)minimalDictionaryRepresentation;
- (id)_DAVolumeUUIDForDisk:(id)a0;
- (id)cachedWholeDiskByIdentifier;
- (BOOL)canBeErasedToRole:(id)a0;
- (BOOL)canResize;
- (BOOL)ejectWithCompletionBlock:(id /* block */)a0;
- (void)expireCache;
- (id)formattableFilesystems;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;
- (BOOL)matchesDictionary:(id)a0;
- (BOOL)mountWithOptions:(id)a0 withCompletionBlock:(id /* block */)a1;
- (BOOL)mountWithOptionsDictionary:(id)a0 error:(id *)a1;
- (BOOL)mountWithOptionsDictionary:(id)a0 withCompletionBlock:(id /* block */)a1;
- (BOOL)mountWithParams:(id)a0 error:(id *)a1;
- (void)recacheWithOptions:(unsigned long long)a0;
- (id)supportedFilesystems;
- (BOOL)unmountWithCompletionBlock:(id /* block */)a0;
- (BOOL)unmountWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (id)wholeDiskIdentifier;

@end
