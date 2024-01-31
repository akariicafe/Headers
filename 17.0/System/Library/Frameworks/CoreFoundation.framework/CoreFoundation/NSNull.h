@interface NSNull : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)null;

- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)retain;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (id)autorelease;
- (id)description;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
