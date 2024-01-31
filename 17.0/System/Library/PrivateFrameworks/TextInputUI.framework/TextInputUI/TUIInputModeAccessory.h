@class NSString;

@interface TUIInputModeAccessory : TUICursorAccessory <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *inputMode;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)additionalComponents;
- (id)initWithInputMode:(id)a0;

@end
