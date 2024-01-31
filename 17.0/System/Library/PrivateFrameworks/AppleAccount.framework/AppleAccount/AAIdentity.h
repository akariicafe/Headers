@class NSUUID, NSString, NSData, NSValue;

@interface AAIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identityID;
@property (readonly, copy, nonatomic) NSString *givenName;
@property (readonly, copy, nonatomic) NSString *middleName;
@property (readonly, copy, nonatomic) NSString *familyName;
@property (readonly, copy, nonatomic) NSData *identityImage;
@property (readonly, copy, nonatomic) NSData *identityImageThumb;
@property (readonly, copy, nonatomic) NSValue *identityImageCropRect;
@property (readonly, copy, nonatomic) NSData *memojiData;
@property (readonly, copy, nonatomic) NSString *serviceID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithID:(id)a0 givenName:(id)a1 middleName:(id)a2 familyName:(id)a3 identityImage:(id)a4 identityImageThumb:(id)a5 identityImageCropRect:(id)a6 memojiData:(id)a7 serviceID:(id)a8;

@end
