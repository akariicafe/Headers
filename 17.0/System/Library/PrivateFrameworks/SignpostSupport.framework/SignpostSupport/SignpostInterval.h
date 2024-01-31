@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (id)string1Value;
- (unsigned long long)hash;
- (unsigned long long)scope;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (id)number2Value;
- (id)string1Name;
- (BOOL)telemetryEnabled;
- (id)number1Value;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)string2Name;
- (int)tv_usec;
- (BOOL)intersectsInterval:(id)a0;
- (int)tz_minuteswest;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)number2Name;
- (long long)tv_sec;
- (void).cxx_destruct;
- (id)number1Name;
- (id)humanReadableType;
- (id)debugDescription;
- (int)tz_dsttime;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (id)_eventDescriptions;
- (BOOL)isEqual:(id)a0;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)durationMachContinuousTime;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (unsigned long long)startMachContinuousTime;
- (BOOL)_hasEndTimeval;
- (id)string2Value;
- (BOOL)_hasBeginTimeval;
- (float)durationSeconds;

@end
