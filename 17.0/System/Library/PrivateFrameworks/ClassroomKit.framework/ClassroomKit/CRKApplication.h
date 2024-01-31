@class NSString, NSData;

@interface CRKApplication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSData *badgeIconData;
@property (copy, nonatomic) NSString *shortVersionString;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
