@class NSData, NSDate;

@interface ICDelegateToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 data:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)expiresBeforeDate:(id)a0;
- (id)initWithType:(long long)a0 data:(id)a1 expirationDate:(id)a2;

@end
