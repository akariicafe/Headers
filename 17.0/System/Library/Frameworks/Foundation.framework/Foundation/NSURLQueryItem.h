@class NSString;

@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSString *value;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)queryItemWithName:(id)a0 value:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
