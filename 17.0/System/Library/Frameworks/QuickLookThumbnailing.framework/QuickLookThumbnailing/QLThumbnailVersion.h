@class NSString, NSData, NSDate;

@interface QLThumbnailVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *generatorID;
@property (copy) NSString *generatorVersion;
@property (copy) NSDate *modificationDate;
@property (copy) NSData *versionIdentifier;
@property unsigned long long fileSize;
@property (copy) NSString *filenameExtension;
@property (readonly, getter=isDefaultVersion) BOOL defaultVersion;
@property (readonly, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property unsigned long long ino;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getGeneratorID:(id *)a0 version:(id *)a1;
- (id)initWithFPItem:(id)a0 automaticallyGenerated:(BOOL)a1;
- (id)initWithFPItem:(id)a0 generatorID:(id)a1 generatorVersion:(id)a2;
- (id)initWithFileURL:(id)a0 automaticallyGenerated:(BOOL)a1;
- (id)initWithFileURL:(id)a0 generatorID:(id)a1 generatorVersion:(id)a2;
- (id)initWithModificationDate:(id)a0 fileSize:(unsigned long long)a1 filenameExtension:(id)a2 versionIdentifier:(id)a3 ino:(unsigned long long)a4 generatorID:(id)a5 generatorVersion:(id)a6;
- (BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)a0;

@end
