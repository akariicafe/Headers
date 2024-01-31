@class FCContentManifest;

@interface FCContentArchive : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) FCContentManifest *manifest;

+ (id)archiveWithAVAsset:(id)a0;
+ (id)archiveWithAVAssetKey:(id)a0;
+ (id)archiveWithAsset:(id)a0 remoteURL:(id)a1 filePath:(id)a2;
+ (id)archiveWithAssetWrappingKey:(id)a0 wrappingKeyID:(id)a1;
+ (id)archiveWithChildArchives:(id)a0;
+ (id)archiveWithPersistedArchivePath:(id)a0;
+ (id)archiveWithRecord:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)unarchiveIntoContentContext:(id)a0;

@end
