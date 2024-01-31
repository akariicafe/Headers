@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)retain;
- (id)init;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (id)autorelease;
- (BOOL)_tryRetain;
- (id)description;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;

@end
