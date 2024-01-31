@class NSString, NSUUID, NSDictionary, NSDate;

@interface AKPCSAuthContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *webSessionIdentifier;
@property (readonly, copy, nonatomic) NSUUID *webSessionID;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWebSessionID:(id)a0 expiryDate:(id)a1 userInfo:(id)a2;
- (id)initWithWebSessionIdentifier:(id)a0 expiryDate:(id)a1 userInfo:(id)a2;

@end
