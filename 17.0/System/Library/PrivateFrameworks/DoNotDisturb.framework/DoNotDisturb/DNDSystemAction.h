@class NSString, WFToggleSettingContextualAction, WFReverseContextualAction;

@interface DNDSystemAction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) WFToggleSettingContextualAction *action;
@property (readonly, retain, nonatomic) WFReverseContextualAction *reverseAction;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

+ (BOOL)runtimeIsSupported:(id *)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAction:(id)a0 enabled:(BOOL)a1;
- (id)initWithAction:(id)a0 reverseAction:(id)a1 enabled:(BOOL)a2;

@end
