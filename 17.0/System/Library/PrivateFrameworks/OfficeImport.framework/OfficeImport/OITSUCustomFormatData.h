@class NSString, NSArray, NSIndexSet;

@interface OITSUCustomFormatData : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSArray *interstitialStrings;
@property (copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes;
@property (nonatomic) double scaleFactor;
@property (nonatomic) int fractionAccuracy;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) BOOL showThousandsSeparator;
@property (nonatomic) BOOL useAccountingStyle;
@property (nonatomic) BOOL requiresFractionReplacement;
@property (nonatomic) BOOL isConditional;
@property (nonatomic) BOOL formatContainsIntegerToken;
@property (nonatomic) BOOL isComplexFormat;

+ (id)customFormatData;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCustomFormatData:(id)a0;
- (void)p_copySelfTo:(id)a0;

@end
