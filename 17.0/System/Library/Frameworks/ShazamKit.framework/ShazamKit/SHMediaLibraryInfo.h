@class NSString;

@interface SHMediaLibraryInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identityToken;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) BOOL isEncrypted;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatus:(long long)a0 encrypted:(BOOL)a1;

@end
