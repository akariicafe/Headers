@class NSRegularExpression;

@interface TypistKeyboardTibetan : TypistKeyboard

@property (retain, nonatomic) NSRegularExpression *subjoinedExpression;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;
- (id)tryAlternateVariationsOfKey:(id)a0;

@end
