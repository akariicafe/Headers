@class LNDeferredLocalizedString;

@interface LNBasicDialog : LNDialog <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNDeferredLocalizedString *fullString;
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *supportingString;
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *printedString;
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *spokenString;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFullString:(id)a0 supportingString:(id)a1 localeIdentifier:(id)a2;
- (id)initWithPrintedString:(id)a0 spokenString:(id)a1 localeIdentifier:(id)a2;

@end
