@class NSString;

@interface ATXTimeContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long contextType;
@property (readonly, copy, nonatomic) NSString *title;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToATXTimeContext:(id)a0;

@end
