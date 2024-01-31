@interface OKActionPan : OKAction <OKActionPanExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) struct CGPoint { double x; double y; } velocity;
@property (nonatomic) unsigned long long direction;

+ (id)panActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 translation:(struct CGPoint { double x0; double x1; })a3 velocity:(struct CGPoint { double x0; double x1; })a4 direction:(unsigned long long)a5 context:(id)a6;
+ (void)setupJavascriptContext:(id)a0;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
