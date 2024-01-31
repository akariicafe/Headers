@interface TIHardwareKeyboardLayout : TIKeyboardLayout <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long keyboardType;

+ (void)flushLayoutCaches;

- (void)encodeWithCoder:(id)a0;
- (void)addString:(id)a0 forKeyCode:(unsigned long long)a1;
- (void)addExactString:(id)a0 forKeyCode:(unsigned long long)a1;
- (id)_ISOFrames;
- (id)_ANSIFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForKeyCode:(unsigned long long)a0;
- (id)initWithKeyboardType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)_JISFrames;
- (id)initWithCoder:(id)a0;

@end
