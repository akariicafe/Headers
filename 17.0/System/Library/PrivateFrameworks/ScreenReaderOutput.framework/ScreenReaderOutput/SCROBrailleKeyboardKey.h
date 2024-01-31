@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *keyString;
@property (nonatomic) unsigned int modifiers;
@property (nonatomic) unsigned int keyCode;
@property (nonatomic) unsigned int virtualKeyCode;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
