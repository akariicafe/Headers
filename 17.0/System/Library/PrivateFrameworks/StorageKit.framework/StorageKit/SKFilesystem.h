@class NSString, NSMutableDictionary, NSURL, NSBundle;

@interface SKFilesystem : NSObject

@property (class, retain) NSMutableDictionary *cachedFilesystems;

@property (retain) NSString *localizedName;
@property (retain) NSString *localizedKey;
@property (retain) NSString *type;
@property (retain) NSString *majorType;
@property (retain) NSString *dmPersonality;
@property BOOL isEncrypted;
@property BOOL defaultEffaceable;
@property BOOL isCaseSensitive;
@property BOOL isJournaled;
@property BOOL shouldShow;
@property unsigned long long minimumSize;
@property (retain) NSString *contentMask;
@property int sortPriority;
@property (retain) NSString *unlocalizedName;
@property (retain) NSString *unlocalizedEncryptedName;
@property (readonly) NSString *formatArgs;
@property (readonly) NSURL *formatExecutable;
@property (readonly) NSString *repairArgs;
@property (readonly) NSURL *repairExecutable;
@property (readonly) NSString *verificationArgs;
@property (readonly) NSString *liveVerificationArgs;
@property (readonly) NSURL *verificationExecutable;
@property (readonly) NSString *xmlOutputArg;
@property (readonly) NSBundle *bundle;
@property (readonly) BOOL isExtension;

+ (BOOL)_shouldShowFilesystemWithType:(id)a0 key:(id)a1 personality:(id)a2;
+ (id)_skfilesystemTypeWithPersonality:(id)a0;
+ (id)buildSpecialFilesystems;
+ (id)extensionFilesystems;
+ (id)fileSystems3rdPartyWithPersonalityKey:(id)a0 bundle:(id)a1 userVisibleName:(id)a2;
+ (id)fileSystemsAPFSWithPersonalityKey:(id)a0 bundle:(id)a1;
+ (id)fileSystemsHFSWithPersonalityKey:(id)a0 bundle:(id)a1 userVisibleName:(id)a2;
+ (id)filesystemFor:(id)a0 caseSensitive:(BOOL)a1;
+ (id)filesystemFor:(id)a0 caseSensitive:(BOOL)a1 encrypted:(BOOL)a2;
+ (id)filesystemsFromBundle:(id)a0;
+ (id)filesystemsWithBundle:(id)a0 filesystemPersonality:(id)a1 userVisibleName:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initEncryptedFSWithUnencryptedFS:(id)a0 localizedName:(id)a1 sortPriority:(int)a2;
- (id)initWithSKFilesystem:(id)a0 bundle:(id)a1 localizedName:(id)a2 localizedKey:(id)a3 caseSensitive:(BOOL)a4 encrypted:(BOOL)a5 personalityKey:(id)a6 sortPriority:(int)a7;
- (id)initWithSKFilesystem:(id)a0 bundle:(id)a1 localizedName:(id)a2 localizedKey:(id)a3 encrypted:(BOOL)a4 personalityKey:(id)a5 sortPriority:(int)a6;
- (id)initWithSpecialFilesystem:(id)a0 majorType:(id)a1 localizedName:(id)a2;
- (BOOL)isValidName:(id)a0 error:(id *)a1;

@end
