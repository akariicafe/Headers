@class NSString;

@interface CHSTimelineReloadRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL allowCostOverride;

+ (id)new;

- (id)init;
- (id)initWithKind:(id)a0 extensionBundleIdentifier:(id)a1 reason:(id)a2 allowCostOverride:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
