@interface _UIModifierKeyCursorAccessory : _UICursorAccessory

@property (nonatomic) long long modifierType;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)descriptionBuilder;
- (id)_modifierKeyCursorAccessory;

@end
