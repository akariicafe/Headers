@class NSString;

@interface _UICursorAccessory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (nonatomic) double preferredWidth;
@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic, getter=isLarge) BOOL large;
@property (nonatomic) unsigned long long style;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionBuilder;
- (id)_deleteCursorAccessory;
- (id)_dictationCursorAccessory;
- (id)_inputModeCursorAccessory;
- (id)_modifierKeyCursorAccessory;

@end
