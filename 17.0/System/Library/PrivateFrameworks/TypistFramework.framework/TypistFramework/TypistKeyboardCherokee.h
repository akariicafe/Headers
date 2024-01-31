@class NSDictionary;

@interface TypistKeyboardCherokee : TypistKeyboard

@property (retain, nonatomic) NSDictionary *vowelKeyMap;
@property (retain, nonatomic) NSDictionary *baseCharacters;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (id)addAccentKeyAction:(id)a0;
- (id)generateBaseKeyMap:(id)a0;
- (id)generateKeyplaneSwitchTable:(id)a0;
- (id)getPostfixKey:(id)a0;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;

@end
