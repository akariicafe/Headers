@class NSDictionary;

@interface TypistKeyboardHawaiian : TypistKeyboard

@property (retain, nonatomic) NSDictionary *kahakoKeys;
@property (retain, nonatomic) NSDictionary *kahakoDiacriticKey;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0 options:(id)a1;
- (id)addAccentKeyAction:(id)a0;
- (id)getPostfixKey:(id)a0;
- (void)preprocessing;
- (id)setupKeyboardInfo:(id)a0 options:(id)a1;
- (void)setupSentenceBoundryStrings;

@end
