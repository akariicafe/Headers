@class NSData, NSString;

@interface BBImage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundlePath;

+ (id)imageWithData:(id)a0;
+ (id)imageWithName:(id)a0 inBundlePath:(id)a1;
+ (id)imageWithName:(id)a0 inBundle:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 path:(id)a1 name:(id)a2 bundlePath:(id)a3;

@end
