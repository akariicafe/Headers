@class NSUUID, NSString;

@interface AATrustedContact : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *custodianID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isAcceptedAndShared;
@property (readonly, nonatomic) BOOL isIdMSConfirmed;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithID:(id)a0 status:(long long)a1 handle:(id)a2 firstName:(id)a3 lastName:(id)a4 displayName:(id)a5 isAcceptedAndShared:(BOOL)a6 isIdMSConfirmed:(BOOL)a7;

@end
