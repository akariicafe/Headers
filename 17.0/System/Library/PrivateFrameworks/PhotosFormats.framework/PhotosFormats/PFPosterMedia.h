@class NSString, PFPosterEditConfiguration;

@interface PFPosterMedia : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mediaType;
@property (retain, nonatomic) NSString *subpath;
@property (retain, nonatomic) NSString *assetUUID;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) PFPosterEditConfiguration *editConfiguration;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssetUUID:(id)a0;

@end
