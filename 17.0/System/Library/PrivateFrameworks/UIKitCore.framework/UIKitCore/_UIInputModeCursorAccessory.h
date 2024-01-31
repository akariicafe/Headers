@class NSString;

@interface _UIInputModeCursorAccessory : _UICursorAccessory

@property (copy, nonatomic) NSString *inputModeIdentifier;
@property (copy, nonatomic) NSString *dictationLanguage;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)descriptionBuilder;
- (id)_inputModeCursorAccessory;

@end
