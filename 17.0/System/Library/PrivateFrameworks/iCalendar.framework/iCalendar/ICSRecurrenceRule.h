@class ICSDateValue, NSArray, NSMutableDictionary, NSNumber;

@interface ICSRecurrenceRule : NSObject <NSSecureCoding, ICSWriting> {
    unsigned long long _freq;
    NSMutableDictionary *_parameters;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long freq;
@property (retain, nonatomic) ICSDateValue *until;
@property (nonatomic) NSNumber *count;
@property (nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSArray *bysecond;
@property (retain, nonatomic) NSArray *byminute;
@property (retain, nonatomic) NSArray *byhour;
@property (retain, nonatomic) NSArray *byday;
@property (retain, nonatomic) NSArray *bymonthday;
@property (retain, nonatomic) NSArray *byyearday;
@property (retain, nonatomic) NSArray *byweekno;
@property (retain, nonatomic) NSArray *bymonth;
@property (retain, nonatomic) NSArray *bysetpos;
@property (nonatomic) NSNumber *wkst;

+ (id)recurrenceRuleFromICSString:(id)a0;
+ (id)recurrenceRuleFromICSCString:(const char *)a0 withTokenizer:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)parameterValueForName:(id)a0;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (id)initWithFrequency:(unsigned long long)a0;
- (void)setParameterValue:(id)a0 forName:(id)a1;
- (void)ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)cleanUpForStartDate:(id)a0;
- (id)occurrencesForStartDate:(id)a0 fromDate:(id)a1 toDate:(id)a2 inTimeZone:(id)a3;
- (id)parametersToIncludeForChecksumVersion:(int)a0;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)a0;
- (id)propertiesToHide;
- (id)propertiesToIncludeForChecksumVersion:(int)a0;
- (id)propertiesToObscure;
- (void)removeParameterValueForName:(id)a0;
- (BOOL)shouldObscureParameter:(id)a0;
- (BOOL)shouldObscureValue;

@end
