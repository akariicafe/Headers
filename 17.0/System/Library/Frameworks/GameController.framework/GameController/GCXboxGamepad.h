@class GCControllerButtonInput;

@interface GCXboxGamepad : GCExtendedGamepad

@property (nonatomic) long long type;
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton1;
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton2;
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton3;
@property (readonly, nonatomic) GCControllerButtonInput *paddleButton4;
@property (readonly, nonatomic) GCControllerButtonInput *buttonShare;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)initializeExtraControllerElements;

@end
