@class NSString;

@interface DMFUser : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, nonatomic) unsigned long long dataQuota;
@property (readonly, nonatomic) unsigned long long dataUsed;
@property (readonly, nonatomic) BOOL hasDataToSync;
@property (readonly, nonatomic) BOOL isCurrentUser;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUsername:(id)a0 dataQuota:(unsigned long long)a1 dataUsed:(unsigned long long)a2 hasDataToSync:(BOOL)a3 isCurrentUser:(BOOL)a4;

@end
