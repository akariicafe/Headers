@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *localRelativePath;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) NSURL *localURLForArchivedData;
@property (nonatomic) BOOL isBinary;
@property (nonatomic) BOOL autoArchived;
@property (retain, nonatomic) NSString *externalModificationTag;
@property (retain, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *fileNameRaw;
@property (retain, nonatomic) NSString *fileFormat;
@property (retain, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSURL *URLForPendingFileCopy;
@property (readonly, retain) NSString *contentType;
@property (readonly, nonatomic) NSURL *urlOnDisk;

+ (id)knownSingleValueKeysForComparison;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (id)_copyFileAtURLToTemporaryDirectory:(id)a0;
+ (BOOL)canonicalizedEqualityTestValue1:(id)a0 value2:(id)a1 key:(id)a2 object1:(id)a3 object2:(id)a4;
+ (id)createTempDestinationURLWithExtension:(id)a0;
+ (id)knownRelationshipWeakKeys;

- (id)initWithUUID:(id)a0;
- (BOOL)save:(id *)a0;
- (id)init;
- (void)assignIdentity:(id)a0;
- (id)URLString;
- (void)setFlags:(unsigned int)a0;
- (unsigned int)flags;
- (void)setUUID:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setURLString:(id)a0;
- (id)XPropertiesData;
- (BOOL)_flagValueWithMask:(unsigned int)a0;
- (void)_setFlagValue:(BOOL)a0 withMask:(unsigned int)a1;
- (void)assignNewIdentity;
- (long long)compareFileNames:(id)a0;
- (BOOL)copyLocalFileToNewSource;
- (id)duplicateWithNewIdentity;
- (id)initWithFilepath:(id)a0;
- (void)invalidateLocalFilePropertiesForNewCopiedFile;
- (void)markCopiedFileAsDownloaded;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)securityScopedLocalURLWrapper;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setLocalRelativePath:(id)a0;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)a0;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)a0;
- (void)setXPropertiesData:(id)a0;
- (BOOL)shouldSetQuarantineAttributesOnCopiedFile;
- (BOOL)validateWithOwner:(id)a0 error:(id *)a1;

@end
