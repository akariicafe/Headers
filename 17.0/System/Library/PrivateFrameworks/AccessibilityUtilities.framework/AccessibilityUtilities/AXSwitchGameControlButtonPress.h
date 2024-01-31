@class NSDictionary;

@interface AXSwitchGameControlButtonPress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long button;
@property (nonatomic, getter=isToggle) BOOL toggle;
@property (nonatomic) float xMagnitude;
@property (nonatomic) float yMagnitude;
@property (nonatomic, getter=isJoystickPress) BOOL joystickPress;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;

@end
