@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
    BOOL _shouldSuppressMask;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)iconNamed:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;
+ (id)iconAtPath:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconAtPath:(id)a0;
+ (id)iconNamed:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconForSystemImageNamed:(id)a0;

- (id)systemImageName;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)applicationIdentifier;
- (BOOL)shouldSuppressMask;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1 shouldSuppressMask:(BOOL)a2;
- (id)description;
- (id)path;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
