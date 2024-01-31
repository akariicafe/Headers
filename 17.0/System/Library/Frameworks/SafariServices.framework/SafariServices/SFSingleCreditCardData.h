@class NSString;

@interface SFSingleCreditCardData : WBSSingleCreditCardData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *headerText;
@property (readonly, copy, nonatomic) NSString *displayText;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHeaderText:(id)a0 displayText:(id)a1 type:(long long)a2 value:(id)a3;

@end
