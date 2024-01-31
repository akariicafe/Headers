@class NSArray, NSString;

@interface LNRelevantContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *conditions;
@property (readonly) NSString *analyticsDescription;

- (id)init;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asCondition;
- (id)asCondition;

@end
