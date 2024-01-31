@class NSDictionary;

@interface TypistKeyboardTamil : TypistKeyboard

@property (retain, nonatomic) NSDictionary *joinedVowelForms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (id)getPostfixKey:(id)a0;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;

@end
