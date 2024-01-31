@class NSString;

@interface AXEventGameControllerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double directionPadUp;
@property (nonatomic) double directionPadDown;
@property (nonatomic) double directionPadLeft;
@property (nonatomic) double directionPadRight;
@property (nonatomic) double faceButtonA;
@property (nonatomic) double faceButtonB;
@property (nonatomic) double faceButtonX;
@property (nonatomic) double faceButtonY;
@property (nonatomic) double shoulderButtonR1;
@property (nonatomic) double shoulderButtonR2;
@property (nonatomic) double shoulderButtonL1;
@property (nonatomic) double shoulderButtonL2;
@property (nonatomic) double leftJoystickX;
@property (nonatomic) double leftJoystickY;
@property (nonatomic) double leftJoystickButton;
@property (nonatomic) double rightJoystickX;
@property (nonatomic) double rightJoystickY;
@property (nonatomic) double rightJoystickButton;
@property (nonatomic) double menuButton;
@property (nonatomic) double viewButton;
@property (nonatomic) double homeButton;
@property (readonly, nonatomic) BOOL rightJoystickActive;
@property (readonly, nonatomic) BOOL leftJoystickActive;
@property (readonly, nonatomic) BOOL isJoystickPressed;
@property (readonly, nonatomic) BOOL isDirectionPadPressed;
@property (readonly, nonatomic) BOOL isFaceButtonPressed;
@property (readonly, nonatomic) BOOL isShoulderButtonPressed;
@property (readonly, nonatomic) BOOL isKeyboardTypeButtonPressed;
@property (readonly, nonatomic) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessibilityEventRepresentationTabularDescription;

@end
