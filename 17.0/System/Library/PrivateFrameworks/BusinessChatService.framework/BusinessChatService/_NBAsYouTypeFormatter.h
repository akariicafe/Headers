@class NSString, NSMutableString, NSRegularExpression, _NBPhoneNumberUtil, NSMutableArray, _NBPhoneMetaData;

@interface _NBAsYouTypeFormatter : NSObject

@property (retain, nonatomic) NSString *currentOutput_;
@property (retain, nonatomic) NSString *currentFormattingPattern_;
@property (retain, nonatomic) NSString *defaultCountry_;
@property (retain, nonatomic) NSString *nationalPrefixExtracted_;
@property (retain, nonatomic) NSMutableString *formattingTemplate_;
@property (retain, nonatomic) NSMutableString *accruedInput_;
@property (retain, nonatomic) NSMutableString *prefixBeforeNationalNumber_;
@property (retain, nonatomic) NSMutableString *accruedInputWithoutFormatting_;
@property (retain, nonatomic) NSMutableString *nationalNumber_;
@property (retain, nonatomic) NSRegularExpression *DIGIT_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *NATIONAL_PREFIX_SEPARATORS_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *CHARACTER_CLASS_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *STANDALONE_DIGIT_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *ELIGIBLE_FORMAT_PATTERN_;
@property (nonatomic) BOOL ableToFormat_;
@property (nonatomic) BOOL inputHasFormatting_;
@property (nonatomic) BOOL isCompleteNumber_;
@property (nonatomic) BOOL isExpectingCountryCallingCode_;
@property (nonatomic) BOOL shouldAddSpaceAfterNationalPrefix_;
@property (retain, nonatomic) _NBPhoneNumberUtil *phoneUtil_;
@property (nonatomic) unsigned long long lastMatchPosition_;
@property (nonatomic) unsigned long long originalPosition_;
@property (nonatomic) unsigned long long positionToRemember_;
@property (retain, nonatomic) NSMutableArray *possibleFormats_;
@property (retain, nonatomic) _NBPhoneMetaData *currentMetaData_;
@property (retain, nonatomic) _NBPhoneMetaData *defaultMetaData_;
@property (readonly, nonatomic) BOOL isSuccessfulFormatting;

- (void)clear;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)inputStringAndRememberPosition:(id)a0;
- (id)removeLastDigit;
- (BOOL)ableToExtractLongerNdd_;
- (id)appendNationalNumber_:(id)a0;
- (id)attemptToChooseFormattingPattern_;
- (id)attemptToChoosePatternWithPrefixExtracted_;
- (BOOL)attemptToExtractCountryCallingCode_;
- (BOOL)attemptToExtractIdd_;
- (id)attemptToFormatAccruedDigits_;
- (BOOL)createFormattingTemplate_:(id)a0;
- (void)getAvailableFormats_:(id)a0;
- (id)getFormattingTemplate_:(id)a0 numberFormat:(id)a1;
- (id)getMetadataForRegion_:(id)a0;
- (unsigned long long)getRememberedPosition;
- (id)initWithRegionCode:(id)a0;
- (id)initWithRegionCode:(id)a0 bundle:(id)a1;
- (id)inputAccruedNationalNumber_;
- (id)inputDigit:(id)a0;
- (id)inputDigitAndRememberPosition:(id)a0;
- (id)inputDigitHelper_:(id)a0;
- (id)inputDigitWithOptionToRememberPosition_:(id)a0 rememberPosition:(BOOL)a1;
- (id)inputString:(id)a0;
- (BOOL)isDigitOrLeadingPlusSign_:(id)a0;
- (BOOL)isFormatEligible_:(id)a0;
- (BOOL)isNanpaNumberWithNationalPrefix_;
- (BOOL)maybeCreateNewTemplate_;
- (void)narrowDownPossibleFormats_:(id)a0;
- (id)normalizeAndAccrueDigitsAndPlusSign_:(id)a0 rememberPosition:(BOOL)a1;
- (id)removeLastDigitAndRememberPosition;
- (id)removeNationalPrefixFromNationalNumber_;

@end
