@class NSString, NSURL;

@interface RMManagementChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *accountDescription;
@property (readonly, copy, nonatomic) NSString *organizationDescription;
@property (readonly, copy, nonatomic) NSURL *enrollmentURL;
@property (readonly, copy, nonatomic) NSString *enrollmentToken;
@property (readonly, nonatomic) BOOL isEnrolled;

- (unsigned long long)hash;
- (BOOL)isEqualToChannel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 accountIdentifier:(id)a2 accountDescription:(id)a3 organizationDescription:(id)a4 enrollmentURL:(id)a5 enrollmentToken:(id)a6 isEnrolled:(BOOL)a7;

@end
