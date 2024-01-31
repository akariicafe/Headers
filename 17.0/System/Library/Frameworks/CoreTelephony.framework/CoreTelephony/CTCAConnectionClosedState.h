@class NSDate;

@interface CTCAConnectionClosedState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long reason;
@property (retain, nonatomic) NSDate *closedAt;
@property (nonatomic) unsigned long long wasActiveServices;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
