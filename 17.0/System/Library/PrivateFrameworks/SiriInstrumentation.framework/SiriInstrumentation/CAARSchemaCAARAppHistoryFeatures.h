@class NSData;

@interface CAARSchemaCAARAppHistoryFeatures : SISchemaInstrumentationMessage {
    struct { unsigned char numMinutesSinceAppInstalled : 1; unsigned char numMinutesSinceAppLastLaunched : 1; unsigned char numAppLaunchesLastTwoMinutes : 1; unsigned char numAppLaunchesLastTenMinutes : 1; unsigned char numAppLaunchesLastOneHour : 1; unsigned char numAppLaunchesLastSixHours : 1; unsigned char numAppLaunchesLastOneDay : 1; unsigned char numAppLaunchesLastSevenDays : 1; unsigned char numAppLaunchesLastTwentyEightDays : 1; unsigned char numAppLaunchesLastInfinity : 1; } _has;
}

@property (nonatomic) unsigned int numMinutesSinceAppInstalled;
@property (nonatomic) BOOL hasNumMinutesSinceAppInstalled;
@property (nonatomic) unsigned int numMinutesSinceAppLastLaunched;
@property (nonatomic) BOOL hasNumMinutesSinceAppLastLaunched;
@property (nonatomic) unsigned int numAppLaunchesLastTwoMinutes;
@property (nonatomic) BOOL hasNumAppLaunchesLastTwoMinutes;
@property (nonatomic) unsigned int numAppLaunchesLastTenMinutes;
@property (nonatomic) BOOL hasNumAppLaunchesLastTenMinutes;
@property (nonatomic) unsigned int numAppLaunchesLastOneHour;
@property (nonatomic) BOOL hasNumAppLaunchesLastOneHour;
@property (nonatomic) unsigned int numAppLaunchesLastSixHours;
@property (nonatomic) BOOL hasNumAppLaunchesLastSixHours;
@property (nonatomic) unsigned int numAppLaunchesLastOneDay;
@property (nonatomic) BOOL hasNumAppLaunchesLastOneDay;
@property (nonatomic) unsigned int numAppLaunchesLastSevenDays;
@property (nonatomic) BOOL hasNumAppLaunchesLastSevenDays;
@property (nonatomic) unsigned int numAppLaunchesLastTwentyEightDays;
@property (nonatomic) BOOL hasNumAppLaunchesLastTwentyEightDays;
@property (nonatomic) unsigned int numAppLaunchesLastInfinity;
@property (nonatomic) BOOL hasNumAppLaunchesLastInfinity;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumAppLaunchesLastOneHour;
- (void)deleteNumAppLaunchesLastInfinity;
- (void)deleteNumAppLaunchesLastOneDay;
- (void)deleteNumAppLaunchesLastSevenDays;
- (void)deleteNumAppLaunchesLastSixHours;
- (void)deleteNumAppLaunchesLastTenMinutes;
- (void)deleteNumAppLaunchesLastTwentyEightDays;
- (void)deleteNumAppLaunchesLastTwoMinutes;
- (void)deleteNumMinutesSinceAppInstalled;
- (void)deleteNumMinutesSinceAppLastLaunched;

@end
