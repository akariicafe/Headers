@class NSString, WFIcon, NSData;

@interface WFConfiguredStaccatoAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) NSString *associatedBundleIdentifier;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) WFIcon *previewIcon;
@property (readonly, copy, nonatomic) NSData *shortcutsMetadata;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)tintColor;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 sectionIdentifier:(id)a1 associatedBundleIdentifier:(id)a2 name:(id)a3 systemImageName:(id)a4 shortcutsMetadata:(id)a5;
- (BOOL)isSystemStaccatoAction;

@end
