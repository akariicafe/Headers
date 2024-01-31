@class NSString;

@interface PKTransactionSearchQuery : PKSearchQuery

@property (retain, nonatomic) NSString *passUniqueIdentifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)domain;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 keyboardLanguage:(id)a1 passUniqueIdentifier:(id)a2;

@end
