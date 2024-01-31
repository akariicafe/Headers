@class NSString, NSData, LNAction;

@interface DNDAppAction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) LNAction *rawAction;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSData *encodedAction;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

+ (BOOL)runtimeIsSupported:(id *)a0;
+ (id)appActionFromDictionaryRepresentation:(id)a0;
+ (BOOL)archivingIsSupported:(id *)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)effectiveBundleIdentifier;
- (id)action;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAction:(id)a0 bundleIdentifier:(id)a1 actionIdentifier:(id)a2 encodedAction:(id)a3 enabled:(BOOL)a4;
- (id)initWithAction:(id)a0 enabled:(BOOL)a1;
- (id)initWithEncodedAction:(id)a0 actionIdentifier:(id)a1 bundleIdentifier:(id)a2 enabled:(BOOL)a3;

@end
