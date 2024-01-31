@class NSRegularExpression, NSSet, NSDataDetector;

@interface HKPIIRedactor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDataDetector *dataDetectorAll;
@property (readonly, nonatomic) NSDataDetector *dataDetectorSkipLink;
@property (readonly, nonatomic) NSDataDetector *dataDetectorSkipPhoneNumbers;
@property (readonly, nonatomic) NSDataDetector *dataDetectorSkipLinkSkipPhoneNumbers;
@property (readonly, nonatomic) NSRegularExpression *fullWordRegex;
@property (readonly, nonatomic) NSRegularExpression *SSNRegex;
@property (readonly, nonatomic) NSRegularExpression *longNumberRegex;
@property (readonly, nonatomic) NSSet *names;

+ (id)_SSNRegularExpressionWithError:(id *)a0;
+ (id)_longNumberRegexWithError:(id *)a0;
+ (id)_redactFullWordRegexWithError:(id *)a0;
+ (id)redactorWithNames:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_redactDataDetectorTypesFromString:(id)a0 options:(unsigned long long)a1;
- (unsigned long long)_redactLongNumbersFromString:(id)a0;
- (unsigned long long)_redactNamesFromString:(id)a0;
- (unsigned long long)_redactSSNsFromString:(id)a0;
- (id)redactedStringWithString:(id)a0;
- (id)redactedStringWithString:(id)a0 options:(unsigned long long)a1;
- (id)redactedStringWithString:(id)a0 options:(unsigned long long)a1 redactedCount:(unsigned long long *)a2;
- (id)redactedStringWithString:(id)a0 redactedCount:(unsigned long long *)a1;

@end
