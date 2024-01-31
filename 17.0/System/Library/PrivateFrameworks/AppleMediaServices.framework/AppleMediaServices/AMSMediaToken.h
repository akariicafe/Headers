@class NSString, NSDate;

@interface AMSMediaToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double lifetime;
@property (readonly, copy, nonatomic) NSString *tokenString;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2;
- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2 valid:(BOOL)a3;
- (BOOL)isExpired;
- (double)percentageOfLifetimeRemaining;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)invalidCopy;
- (BOOL)isEqual:(id)a0;
- (BOOL)willExpireWithin:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
