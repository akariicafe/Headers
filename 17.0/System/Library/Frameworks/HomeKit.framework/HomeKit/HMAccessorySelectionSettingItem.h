@class HMAccessorySelectionSetting, NSString, NSUUID;

@interface HMAccessorySelectionSettingItem : NSObject <NSCopying, NSSecureCoding> {
    unsigned char _identifierUUIDBytes[16];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) HMAccessorySelectionSetting *setting;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *localizedTitle;

- (id)init;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
