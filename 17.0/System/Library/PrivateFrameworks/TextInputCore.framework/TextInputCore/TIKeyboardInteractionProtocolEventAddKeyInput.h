@class NSString, TIKeyboardInput;

@interface TIKeyboardInteractionProtocolEventAddKeyInput : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>

@property (readonly, nonatomic) TIKeyboardInput *keyboardInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyInput:(id)a0 keyboardState:(id)a1;
- (void)sendTo:(id)a0;

@end
