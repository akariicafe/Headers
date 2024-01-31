@class NSString;

@interface PSDisplay : NSObject <NSCopying, NSSecureCoding> {
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:(id)a0;

- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithHardwareIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
