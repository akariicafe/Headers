@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long fileId;
@property (readonly) struct fsid { int val[2]; } fsid;

+ (Class)versionedFileIdentifierClass;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFileId:(unsigned long long)a0 fsid:(struct fsid { int x0[2]; })a1;

@end
