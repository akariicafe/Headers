@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)complete;
+ (id)completeUntilFirstUserAuthentication;
+ (id)protectionWithType:(id)a0;
+ (id)none;
+ (id)completeUnlessOpen;

- (void)encodeWithCoder:(id)a0;
- (id)protectionType;
- (id)description;
- (id)initWithProtection:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)indicatesProtection;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
