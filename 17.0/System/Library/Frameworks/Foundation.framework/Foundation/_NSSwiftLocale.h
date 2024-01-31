@class NSString, NSCharacterSet;

@interface _NSSwiftLocale : _NSLocaleBridge {
    void /* unknown type, empty encoding */ locale;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *languageIdentifier;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *regionCode;
@property (nonatomic, readonly) NSString *scriptCode;
@property (nonatomic, readonly) NSString *variantCode;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) NSString *collationIdentifier;
@property (nonatomic, readonly) NSString *decimalSeparator;
@property (nonatomic, readonly) NSString *groupingSeparator;
@property (nonatomic, readonly) NSString *currencySymbol;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSString *collatorIdentifier;
@property (nonatomic, readonly) NSString *quotationBeginDelimiter;
@property (nonatomic, readonly) NSString *quotationEndDelimiter;
@property (nonatomic, readonly) NSString *alternateQuotationBeginDelimiter;
@property (nonatomic, readonly) NSString *alternateQuotationEndDelimiter;
@property (nonatomic, readonly) NSCharacterSet *exemplarCharacterSet;
@property (nonatomic, readonly) BOOL usesMetricSystem;

- (void)encodeWithCoder:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedStringForLanguageCode:(id)a0;
- (id)localizedStringForCurrencyCode:(id)a0;
- (BOOL)_doesNotRequireSpecialCaseHandling;
- (id)_localeWithNewCalendarIdentifier:(id)a0;
- (id)_numberingSystem;
- (id)_prefForKey:(id)a0;
- (id)localizedStringForCalendarIdentifier:(id)a0;
- (id)localizedStringForCollationIdentifier:(id)a0;
- (id)localizedStringForCollatorIdentifier:(id)a0;
- (id)localizedStringForCountryCode:(id)a0;
- (id)localizedStringForCurrencySymbol:(id)a0;
- (id)localizedStringForLocaleIdentifier:(id)a0;
- (id)localizedStringForScriptCode:(id)a0;
- (id)localizedStringForVariantCode:(id)a0;

@end
