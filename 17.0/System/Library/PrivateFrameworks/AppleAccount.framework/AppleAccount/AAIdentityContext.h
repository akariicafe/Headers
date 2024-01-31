@class NSUUID, NSString, NSData, NSValue;

@interface AAIdentityContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identityID;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSData *thumbImageData;
@property (copy, nonatomic) NSValue *imageCropRect;
@property (copy, nonatomic) NSData *memojiMetadata;
@property (copy, nonatomic) NSString *serviceID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
