@class NSString, NSMutableDictionary, NSURL, NSMutableSet;

@interface FSMimic : NSObject <FSNodePropertyProviding, NSSecureCoding> {
    NSURL *_url;
    NSMutableDictionary *_baseProperties;
    NSMutableDictionary *_resourceValues;
    NSMutableSet *_relativePathsThatExist;
    unsigned int _hfsType;
    unsigned int _creator;
    struct { unsigned char HFSTypesSet : 1; unsigned char HFSTypesUnavailable : 1; } _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canIssueIO;
@property (readonly, nonatomic, getter=isDirectory) BOOL directory;
@property (readonly, nonatomic, getter=isBusyDirectory) BOOL busyDirectory;
@property (readonly, nonatomic, getter=isExecutableModeFile) BOOL executableModeFile;
@property (readonly, nonatomic, getter=isExecutable) BOOL executable;
@property (readonly, nonatomic, getter=isResolvable) BOOL resolvable;
@property (readonly, nonatomic, getter=isSymbolicLink) BOOL symbolicLink;
@property (readonly, nonatomic, getter=isAliasFile) BOOL aliasFile;
@property (readonly, nonatomic, getter=isSideFault) BOOL sideFault;
@property (readonly, nonatomic) BOOL hasPackageBit;
@property (readonly, nonatomic, getter=isRegularFile) BOOL regularFile;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL hasHiddenExtension;
@property (readonly, nonatomic, getter=isVolume) BOOL volume;
@property (readonly, nonatomic, getter=isMountTrigger) BOOL mountTrigger;
@property (readonly, nonatomic, getter=isSecuredSystemContent) BOOL securedSystemContent;
@property (readonly, nonatomic, getter=isOnDiskImage) BOOL onDiskImage;
@property (readonly, nonatomic, getter=isOnLocalVolume) BOOL onLocalVolume;
@property (readonly, getter=isAVCHDCollection) BOOL AVCHDCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basePropertyClasses;
+ (void)checkSelectors;
+ (id)resourceValueClassesWithNull;

- (id)sideFaultResourceValuesWithError:(id *)a0;
- (id)initWithURL:(id)a0;
- (BOOL)isTrashFolder;
- (id)nameWithError:(id *)a0;
- (id)canonicalPathWithError:(id *)a0;
- (BOOL)getInodeNumber:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)getOwnerUID:(unsigned int *)a0 error:(id *)a1;
- (BOOL)getFileSystemRepresentation:(char[1024])a0 error:(id *)a1;
- (BOOL)getLength:(unsigned long long *)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)pathWithError:(id *)a0;
- (BOOL)getFileIdentifier:(unsigned long long *)a0 error:(id *)a1;
- (id)URL;
- (BOOL)getDeviceNumber:(int *)a0 error:(id *)a1;
- (id)extensionWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)getResourceValue:(id *)a0 forKey:(id)a1 options:(unsigned char)a2 error:(id *)a3;
- (BOOL)childNodeWithRelativePathExists:(id)a0;
- (BOOL)getCachedResourceValueIfPresent:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)getHFSType:(unsigned int *)a0 creator:(unsigned int *)a1 error:(id *)a2;
- (BOOL)getContentModificationDate:(double *)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)getVolumeIdentifier:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)getCreationDate:(double *)a0 error:(id *)a1;
- (BOOL)isDataContainer;
- (void)askedForMissingResourceKey:(id)a0;
- (void)askedForMissingSelector:(SEL)a0;
- (BOOL)getDeviceRefNum:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)hasObjectValueForSelector:(SEL)a0;
- (BOOL)hasResourceValueForKey:(id)a0;
- (BOOL)isInTrash;
- (BOOL)isOnTimeMachineVolume;
- (void)noteExtantChildNodeWithRelativePath:(id)a0;
- (void)setHFSType:(unsigned int)a0 creator:(unsigned int)a1;
- (void)setHFSTypesUnavailable;
- (void)setObjectValue:(id)a0 forSelector:(SEL)a1;
- (void)setResourceValue:(id)a0 forKey:(id)a1;

@end
