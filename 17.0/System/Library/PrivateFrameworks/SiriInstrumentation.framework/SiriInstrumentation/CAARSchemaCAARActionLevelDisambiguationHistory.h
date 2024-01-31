@class NSData;

@interface CAARSchemaCAARActionLevelDisambiguationHistory : SISchemaInstrumentationMessage {
    struct { unsigned char numActionDisambiguationsLastTwoMinutes : 1; unsigned char numActionDisambiguationsLasTenMinutes : 1; unsigned char numActionDisambiguationsLastOneHour : 1; unsigned char numActionDisambiguationsLastSixHours : 1; unsigned char numActionDisambiguationsLastOneDay : 1; unsigned char numActionDisambiguationsLastSevenDays : 1; unsigned char numActionDisambiguationsLastTwentyEightDays : 1; unsigned char numActionDisambiguationsLastInfinity : 1; unsigned char numSelectedActionDisambiguationsLastTwoMinutes : 1; unsigned char numSelectedActionDisambiguationsLastTenMinutes : 1; unsigned char numSelectedActionDisambiguationsLastOneHour : 1; unsigned char numSelectedActionDisambiguationsLastSixHours : 1; unsigned char numSelectedActionDisambiguationsLastOneDay : 1; unsigned char numSelectedActionDisambiguationsLastSevenDays : 1; unsigned char numSelectedActionDisambiguationsLastTwentyEightDays : 1; unsigned char numSelectedActionDisambiguationsLastInfinity : 1; unsigned char minutesSinceLastDisambiguationSameActions : 1; unsigned char minutesSinceLastActionDisambiguationForThisAction : 1; unsigned char wasActionSelectedInLastDisambiguation : 1; unsigned char minutesSinceLastDisambiguationForSameActions : 1; } _has;
}

@property (nonatomic) unsigned int numActionDisambiguationsLastTwoMinutes;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastTwoMinutes;
@property (nonatomic) unsigned int numActionDisambiguationsLasTenMinutes;
@property (nonatomic) BOOL hasNumActionDisambiguationsLasTenMinutes;
@property (nonatomic) unsigned int numActionDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numActionDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numActionDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numActionDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numActionDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastInfinity;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTwoMinutes;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastTwoMinutes;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTenMinutes;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastTenMinutes;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastInfinity;
@property (nonatomic) BOOL minutesSinceLastDisambiguationSameActions;
@property (nonatomic) BOOL hasMinutesSinceLastDisambiguationSameActions;
@property (nonatomic) unsigned int minutesSinceLastActionDisambiguationForThisAction;
@property (nonatomic) BOOL hasMinutesSinceLastActionDisambiguationForThisAction;
@property (nonatomic) BOOL wasActionSelectedInLastDisambiguation;
@property (nonatomic) BOOL hasWasActionSelectedInLastDisambiguation;
@property (nonatomic) unsigned int minutesSinceLastDisambiguationForSameActions;
@property (nonatomic) BOOL hasMinutesSinceLastDisambiguationForSameActions;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMinutesSinceLastActionDisambiguationForThisAction;
- (void)deleteMinutesSinceLastDisambiguationForSameActions;
- (void)deleteMinutesSinceLastDisambiguationSameActions;
- (void)deleteNumActionDisambiguationsLasTenMinutes;
- (void)deleteNumActionDisambiguationsLastInfinity;
- (void)deleteNumActionDisambiguationsLastOneDay;
- (void)deleteNumActionDisambiguationsLastOneHour;
- (void)deleteNumActionDisambiguationsLastSevenDays;
- (void)deleteNumActionDisambiguationsLastSixHours;
- (void)deleteNumActionDisambiguationsLastTwentyEightDays;
- (void)deleteNumActionDisambiguationsLastTwoMinutes;
- (void)deleteNumSelectedActionDisambiguationsLastInfinity;
- (void)deleteNumSelectedActionDisambiguationsLastOneDay;
- (void)deleteNumSelectedActionDisambiguationsLastOneHour;
- (void)deleteNumSelectedActionDisambiguationsLastSevenDays;
- (void)deleteNumSelectedActionDisambiguationsLastSixHours;
- (void)deleteNumSelectedActionDisambiguationsLastTenMinutes;
- (void)deleteNumSelectedActionDisambiguationsLastTwentyEightDays;
- (void)deleteNumSelectedActionDisambiguationsLastTwoMinutes;
- (void)deleteWasActionSelectedInLastDisambiguation;

@end
