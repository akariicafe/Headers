@class NSURLCredential, NSString, WBUAutoFillDisplayData, SFAutoFillOneTimeCode, SFSingleCreditCardData, WBSCreditCardData, SFCredentialIdentity, WBSSavedAccountMatch, WBSHideMyEmailRecord;

@interface _SFTextSuggestion : UITextSuggestion

@property (readonly, nonatomic) long long textSuggestionType;
@property (readonly, nonatomic) SFAutoFillOneTimeCode *oneTimeCode;
@property (readonly, nonatomic) NSString *generatedPassword;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSURLCredential *urlCredential;
@property (readonly, nonatomic) WBSSavedAccountMatch *savedAccountMatch;
@property (readonly, nonatomic) BOOL submitForm;
@property (readonly, nonatomic) WBUAutoFillDisplayData *singleDisplayData;
@property (readonly, nonatomic) WBSCreditCardData *creditCardData;
@property (readonly, nonatomic) SFSingleCreditCardData *singleCreditCardData;
@property (readonly, nonatomic) SFCredentialIdentity *credentialIdentity;
@property (readonly, nonatomic) WBSHideMyEmailRecord *emailRecord;

+ (BOOL)supportsSecureCoding;
+ (id)textSuggestionToProvisionHideMyEmailRecord;
+ (id)textSuggestionWithCredentialIdentity:(id)a0 submitForm:(BOOL)a1;
+ (id)textSuggestionWithCreditCardData:(id)a0;
+ (id)textSuggestionWithGeneratedPassword:(id)a0;
+ (id)textSuggestionWithHideMyEmailRecord:(id)a0;
+ (id)textSuggestionWithOneTimeCode:(id)a0;
+ (id)textSuggestionWithSavedAccountMatch:(id)a0 submitForm:(BOOL)a1;
+ (id)textSuggestionWithSingleCreditCardDataValue:(id)a0;
+ (id)textSuggestionWithSingleDisplayData:(id)a0;
+ (id)textSuggestionWithUsername:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTextSuggestionType:(long long)a0;

@end
