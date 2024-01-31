@class WFContextualAction, LNDisplayRepresentation, LNAction;

@interface WFFocusConfigurationUIState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL isUIValid;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) LNDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) WFContextualAction *contextualAction;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEnabled:(BOOL)a0 uiValidity:(BOOL)a1 action:(id)a2 displayRepresentation:(id)a3;
- (id)initWithEnabled:(BOOL)a0 uiValidity:(BOOL)a1 contextualAction:(id)a2;

@end
