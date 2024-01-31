@class NSDate;

@interface ICAgeVerifier : NSObject <NSCopying>

@property (nonatomic) long long status;
@property (readonly, nonatomic, getter=isExplicitContentAllowed) BOOL explicitContentAllowed;
@property (readonly, nonatomic) NSDate *verificationExpirationDate;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExpirationDate:(id)a0;
- (void)runAgeVerification;

@end
