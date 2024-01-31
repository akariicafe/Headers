@class NSString, WFContextualActionIcon;

@interface WFAutoShortcutEntityInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WFContextualActionIcon *icon;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 subtitle:(id)a1 icon:(id)a2;

@end
