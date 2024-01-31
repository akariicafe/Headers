@class NSString, LNAppShortcutDynamicOptionsProviderReference;

@interface LNAppShortcutOptionsCollection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) LNAppShortcutDynamicOptionsProviderReference *optionsProviderReference;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalizedTitle:(id)a0 systemImageName:(id)a1 optionsProviderReference:(id)a2;

@end
