@class NSUUID;

@interface HDObjectAuthorizationRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *objectUUID;
@property (copy, nonatomic) NSUUID *sourceUUID;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) long long status;
@property (nonatomic) double modificationDate;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
