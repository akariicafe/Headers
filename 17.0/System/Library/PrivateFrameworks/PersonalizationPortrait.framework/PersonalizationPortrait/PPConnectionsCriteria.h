@class NSString;

@interface PPConnectionsCriteria : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char locationField;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLocationField:(unsigned char)a0 bundleIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;

@end
